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

//Display the pet's current stats (happiness, fullness and energy)
void display_pet (Pet& pet) {
    std::cout << "Name: " << pet.name << "\n";
    std::cout << "Type: " << pet.type << "\n";
    std::cout << "Energy: " << pet.energy << "\n";
    std::cout << "Happiness: " << pet.happiness << "\n";
}

//Save the pet's current state to a file
void save_pet (Pet& pet, std::string file_name) {
    std::ofstream file(file_name);

    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file");
    }
    file << "name,type,energy,happiness\n";
    file << pet.name << "," << pet.type << "," << pet.energy << "," << pet.happiness << "\n";
    file.close();
}
