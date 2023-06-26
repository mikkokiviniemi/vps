#include "utils.h"


//Feed the pet, which increases the pet's happiness and fullness.
void feed_pet (Pet& pet, int amount) {
    pet.energy += amount;
    pet.happiness += amount;
}

//Play with the pet, which increases the pet's happiness but decreases it's energy
void play_pet (Pet& pet, int amount) {
    pet.happiness += amount;
    pet.energy -= amount;
}

//Put the pet to sleep, which increases its energy
void sleep_pet (Pet& pet, int amount) {
    pet.energy += amount;
}