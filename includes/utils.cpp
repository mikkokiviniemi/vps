#include "utils.h"


//Feed the pet, which increases the pet's happiness and fullness.
void feed_pet (Pet& pet, int amount) {
    pet.energy += amount;
    pet.happiness += amount;
}