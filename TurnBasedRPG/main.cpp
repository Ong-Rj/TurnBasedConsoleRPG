
#include "Battle.h"
#include "StoneGolem.h"
#include "Vampire.h"
#include "Mage.h"
#include <iostream>
#include <string>


int main()
{
    std::cout << "Enter your name: ";
    std::string name{};
    std::getline(std::cin, name);
    if (name.empty())
        name = "Hero";

    Player     player{ name };
    //StoneGolem stonegolem{ "Stone Golem", 200, 100 };
    //Battle     battle{ player, stonegolem };
    //Mage mage{ "Mage" };
    Vampire vampire{ "Vampire", 100, 40 };
    //Battle     battle{ mage, slime };
    Battle     battle{ player, vampire };
    battle.run();

    return 0;
}