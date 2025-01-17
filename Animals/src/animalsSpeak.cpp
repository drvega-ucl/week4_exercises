#include <iostream>
#include <vector>
#include "animalClasses.h"
#include <memory>

int main()
{
    //declare a vector of animal pointers here

    std::vector<std::unique_ptr<Animal>> animals;

    //put some different kinds of animal pointers (dogs, cats, budgies) in your vector

    auto Fido = std::make_unique<Dogs>();
    auto Sylvester = std::make_unique<Cats>();
    auto Tweety = std::make_unique<Budgies>();
    auto Brian = std::make_unique<Labradors>();
    auto Max = std::make_unique<Terriers>();

     
    animals.push_back(std::move(Fido));
    animals.push_back(std::move(Sylvester));
    animals.push_back(std::move(Tweety)); 
    animals.push_back(std::move(Brian));
    animals.push_back(std::move(Max));

    //loop through all the animals in your vector and call Speak() on them in turn
    
    for (auto& animal : animals)
    {
        animal->speak();
    }

    return 0;
}