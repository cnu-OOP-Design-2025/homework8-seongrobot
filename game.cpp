#include "game.h"
int Knight::getAttack() const {return 70;}
int Knight::getDefense() const {return 80;}
int Knight::getSpeed() const {return 40;}

int Wizard::getAttack() const {return 50;}
int Wizard::getDefense() const {return 30;}
int Wizard::getSpeed() const {return 50;}

int Archer::getAttack() const {return 60;}
int Archer::getDefense() const {return 40;}
int Archer::getSpeed() const {return 70;}

int Armor::getDefense() const {
    return character->getDefense() + 30;
}
int Armor::getSpeed() const{
    return character->getSpeed() - 5;
}
int Armor::getAttack() const{
    return character->getAttack();
}
string Armor::getDescription() const{
    return character->getDescription() +", Armor";
}

int Boots::getDefense() const {
    return character->getDefense();
}
int Boots::getSpeed() const {
    return character->getSpeed() + 15;
}
int Boots::getAttack() const{
    return character->getAttack();
}
string Boots::getDescription() const{
    return character->getDescription() +", Boots";
}

int Staff::getDefense() const {
    return character->getDefense();
}
int Staff::getSpeed() const {
    return character->getSpeed();
}
int Staff::getAttack() const {
    return character->getAttack() + 20;
}
string Staff::getDescription() const{
    return character->getDescription() +", Staff";
}

int Bow::getDefense() const {
    return character->getDefense();
}
int Bow::getSpeed() const {
    return character->getSpeed();
}
int Bow::getAttack() const {
    return character->getAttack() + 25;
}
string Bow::getDescription() const{
    return character->getDescription() +", Bow";
}

int Sword::getDefense() const {
    return character->getDefense();
}
int Sword::getSpeed() const {
    return character->getSpeed();
}
int Sword::getAttack() const {
    return character->getAttack() + 30;
}
string Sword::getDescription() const{
    return character->getDescription() +", Sword";
}
