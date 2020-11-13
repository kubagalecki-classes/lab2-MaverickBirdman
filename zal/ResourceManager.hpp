#pragma once
#include "Resource.hpp"

class ResourceManager{
 Resource* zmienna;

public:
 
ResourceManager()// konstruktor domyślny
 {zmienna=new Resource;}
   
double get(){return zmienna->get();}//metoda
    
ResourceManager(const ResourceManager &obiekt)//konstruktor kopiujący
    {zmienna = new Resource{ *obiekt.zmienna };}
   
ResourceManager operator=(const ResourceManager& obiekt)//kopiujący operator przypisania
    {if (&obiekt != this) 
        {delete zmienna;
            zmienna = new Resource{ *obiekt.zmienna };}
        return *this;}
    
ResourceManager(ResourceManager&& obiekt)
    {zmienna = nullptr;
        zmienna = obiekt.zmienna;
        obiekt.zmienna = nullptr;}

ResourceManager operator=(ResourceManager&& obiekt)
    {if (&obiekt != this) 
        {delete zmienna;
            zmienna = obiekt.zmienna;
            obiekt.zmienna = nullptr;}
        return *this;}
 
 ~ResourceManager()//destruktor
    {delete zmienna;}
};
