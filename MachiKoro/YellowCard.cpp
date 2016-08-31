#include "stdafx.h"
#include "YellowCard.h"

// TODO: Add yellow card actions
void YellowCard::action(Bank *p1, Bank *p2, Card *c1, Card *c2, int val)
{
	// Nothing to really do here yet
}

TrainStation::TrainStation() {
	this->active = false;
	this->set_card("TrainStation", 4, 0, 0, 0, Icon::establishment);
}

ShoppingMall::ShoppingMall() {
	this->active = false;
	this->set_card("ShoppingMall", 10, 0, 0, 0, Icon::establishment);
}

AmusementPark::AmusementPark() {
	this->active = false;
	this->set_card("AmusementPark", 16, 0, 0, 0, Icon::establishment);
}

RadioTower::RadioTower() {
	this->active = false;
	this->set_card("RadioTower", 22, 0, 0, 0, Icon::establishment);
}


