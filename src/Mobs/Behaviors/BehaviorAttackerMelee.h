#pragma once

#include "BehaviorAttacker.h"

/** Grants the mob that ability to approach a target and then melee attack it.
Use BehaviorAttackerMelee::SetTarget to attack. */
class cBehaviorAttackerMelee : public cBehaviorAttacker
{
public:
	bool DoStrike(int a_StrikeTickCnt) override;
};