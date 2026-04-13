#include "Slime.h"
#include "ActionResult.h"
#include <iostream>


Slime::Slime(std::string name, int maxHp, int maxToughness)
    : Enemy{ std::move(name), maxHp, maxToughness }
{
}

ActionResult Slime::performAttack()
{
    ++m_turnCount;

    if (m_turnCount % 4 == 0)
    {
        std::cout << "  >> " << m_name
            << " absorbs the moisture -- REGENERATE! <<\n";
        return ActionResult{ ActionResult::Type::Heal, 20 };
    }

    return ActionResult{ ActionResult::Type::Damage, 12 };
}