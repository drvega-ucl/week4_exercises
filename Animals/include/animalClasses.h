#pragma once
#include <string>

class Animal
{
    public:

    void speak();

    std::string animalClass;

    std::string sound;
};

class Mammal : public Animal
{
    public:

    Mammal()
    {
        animalClass = "Mammal";
    }
};

class Bird : public Animal
{
    public:
    Bird()
    {
        animalClass = "Bird";
    }
};

class Dogs : public Mammal
{
    public:

    Dogs()
    {
        sound = "Woof";
        animalClass;
    }
};

class Cats : public Mammal
{   
    public:

    Cats()
    {
        sound = "Meow";
        animalClass;
    }
};

class Budgies : public Bird
{
    public:

    Budgies()
    {
        sound = "Tweet"; 
        animalClass;
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