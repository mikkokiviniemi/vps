/*
Virtual Pet Simulator
Create a application that will simulate taking care of a virtual pet.

Your application will have the following features. 

Create a new pet with name and type.
Feed the pet, which increases the pet's happiness and fullness.
Play with the pet, which increases the pet's happiness but decreases it's energy
Put the pet to sleep, which increases its energy
Display the pet's current stats (happiness, fullness and energy)
Save the pet's current state to a file
Load a pet's state from a file
Add unit testing and try to get close 100% code coverage.
Start by creating a new repository for this project and create issues for all the features. 
For each issue, create a new branch,
implement the feature and then create a pull request to merge the branch into the main branch. 
The pull request should mention the issue it resolves.
*/

#include <iostream>
#include "utils.h"

int main()
{
    Pet test_pet = {"Mau","Cat",0,0};
    display_pet(test_pet);
    feed_pet (test_pet,3);
    play_pet(test_pet,3);
    sleep_pet(test_pet,3);
    display_pet(test_pet);
    save_pet(test_pet, "./data/test_pet.csv");
    Pet test_pet_2 = load_pet("./data/file.csv");
    display_pet(test_pet_2);


    return 0;
}
