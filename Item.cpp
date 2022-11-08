#include <iostream>
#include "Item.h"
using namespace std;

Item::Item() {

}
Item::Item (string item_name, int damage, int durability, int increaseHpBy, bool canChop, bool canDig, bool canMine) {
    item_name_ = item_name;
    damage_ = damage;
    durability_ = durability;
    increaseHpBy_ = increaseHpBy;
    canChop_ = canChop;
    canDig_ = canDig;
    canMine_ = canMine;
}

//DAMAGE
void Item::setDamage(int damage){
    damage_ = damage;
}
int Item::getDamage() const{
    return damage_;
}

//DURABILITY
void Item::setDurability(int durability){
    durability_ = durability;
}
int Item::getDurability() const{
    return durability_;
}

//INCREASE HP BY
void Item::setIncreaseHpBy(int increase_amount){
    increaseHpBy_ = increase_amount;
}
int Item::getIncreaseHpBy() const{
    return increaseHpBy_;
}


bool Item::getCanChop(){
    return canChop_;
}
bool Item::getCanDig(){
    return canDig_;
}
bool Item::getCanMine(){
    return canMine_;
}


