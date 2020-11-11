#pragma once
#include "Resource.hpp"
class ResourceManager
{Resource* zmienna;
public:
ResourceManager()//dom
        {zmienna=new Resource;}
ResourceManager(const ResourceManager &obiekt)//kop
        {zmienna = new Resource{ *obiekt.zmienna };}
ResourceManager operator=(const ResourceManager& obiekt)//kop op przyp
    {if (&obiekt != this) 
        {delete zmienna;
         zmienna = new Resource{ *obiekt.zmienna };}
         return *this;}
 ~ResourceManager()//des
        {delete zmienna;}
 double get(){return zmienna->get();}//fun
};
