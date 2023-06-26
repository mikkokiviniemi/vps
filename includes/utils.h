#ifndef UTILS_H
#define UTILS_H

#include <iostream>

//Create a new pet with name and type.
struct Pet {

    std::string name;
    std::string type;
    int energy;
    int happiness;
};

//Feed the pet, which increases the pet's happiness and fullness.
void feed_pet (Pet& pet, int amount);

//Play with the pet, which increases the pet's happiness but decreases it's energy
void play_pet(Pet &pet, int amount);

//Put the pet to sleep, which increases its energy
//Display the pet's current stats (happiness, fullness and energy)
//Save the pet's current state to a file
//Load a pet's state from a file
//Add unit testing and try to get close 100% code coverage.


#endif  