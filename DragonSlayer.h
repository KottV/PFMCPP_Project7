#pragma once
#include "Character.h"
#include "AttackItem.h"
struct DragonSlayer : Character
{
    DragonSlayer(const std::string&, int, int);
    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
    AttackItem attackItem;

private:
    const std::string name;
};
