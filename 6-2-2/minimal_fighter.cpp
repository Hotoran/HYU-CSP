#include"minimal_fighter.h"

//consturctors
MinimalFighter::MinimalFighter()
        { mHp = 0; mPower = 0; mStatus = Invalid; }
MinimalFighter::MinimalFighter(int _hp, int _power)
        { mHp = _hp; mPower = _power;
            if (mHp <= 0) {mStatus = Dead;}
            else {mStatus = Alive;}
        }
//member_fucntions
int MinimalFighter::hp() {return this->mHp;}
int MinimalFighter::power() {return this->mPower;}
FighterStatus MinimalFighter::status() {return this->mStatus;}
void MinimalFighter::setHp(int _hp) {
	this->mHp = _hp;
	if (_hp <= 0) {this->mStatus = Dead;}
}

void MinimalFighter::hit(MinimalFighter *_enemy) {
	int tempHp1, tempHp2;
	tempHp1 = this->mHp - _enemy->power();
	this->setHp(tempHp1);

	tempHp2 = _enemy->hp() - this->mPower;
	_enemy->setHp(tempHp2);
}

void MinimalFighter::attack(MinimalFighter *_enemy) {
	int tempHp;
	tempHp = _enemy->hp() - this->mPower;
	_enemy->setHp(tempHp);
	this->mPower = 0;
}

void MinimalFighter::fight(MinimalFighter *_enemy) {
	int tempHp1, tempHp2;
	while (this->mHp > 0 and _enemy->hp() > 0){
		tempHp1 = this->mHp - _enemy->power();
    	tempHp2 = _enemy->hp() - this->mPower;
		this->setHp(tempHp1);
    	_enemy->setHp(tempHp2);
	}
}

