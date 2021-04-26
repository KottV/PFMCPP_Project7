#pragma once
#include "Character.h"
#include "AttackItem.h"
struct DragonSlayer : Character
{
    DragonSlayer(const std::string&, int, int);
    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
    std::unique_ptr<AttackItem> attackItem = std::make_unique<AttackItem>();

private:
    const std::string name;
};
