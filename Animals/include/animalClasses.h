#pragma once
#include <string>

class Animal
{
    public:

    void speak();

    std::string sound;
};

class Dogs : public Animal
{
    public:

    Dogs()
    {
        sound = "Woof";
    }
};

class Cats : public Animal
{   
    public:

    Cats()
    {
        sound = "Meow";
    }
};

class Budgies : public Animal
{
    public:

    Budgies()
    {
        sound = "Tweet"; 
    }
};

class Labradors : public Dogs{};

class Terriers : public Dogs
{
    public:
    
    Terriers()
    {
        sound = "Yap";
    }
};