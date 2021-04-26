#include "DefensiveItem.h"

void DefensiveItem::use(Character* character)
{
	useDefensiveItem(character, *this);
}
