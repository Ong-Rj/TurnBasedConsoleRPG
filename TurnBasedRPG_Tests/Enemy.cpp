#include "Enemy.h"
#include <algorithm>
#include "optional"


int  Enemy::getToughness()    const { return m_toughness; }
int  Enemy::getMaxToughness() const { return m_maxToughness; }
bool Enemy::isBroken()        const { return m_isBroken; }

void Enemy::reduceToughness(int amount)
{
    m_toughness = std::max(0, m_toughness - amount);
    if (m_toughness == 0)
    {
        m_isBroken = true;
        m_toughness = m_maxToughness; // reset for the next cycle
    }
}

void Enemy::recoverFromBreak()
{
    m_isBroken = false;
}

ActionResult Enemy::performAttack()
{
    return ActionResult{ ActionResult::Type::Damage, 20 };
}


