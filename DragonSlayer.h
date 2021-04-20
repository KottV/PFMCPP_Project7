#pragma once
#include "Character.h"

struct DragonSlayer : public Character
{
    DragonSlayer(const std::string&, int, int);
    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};
