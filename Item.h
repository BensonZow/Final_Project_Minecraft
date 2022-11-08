#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std;

class Item {

private:
    string item_name_;
    int damage_;
    int durability_; 
    int increaseHpBy_;
    //int efficiency? cuz different types of tools, diamond, wooden
    bool canChop_;
    bool canDig_;
    bool canMine_;

public:
    Item ();
    Item (string item_name, int damage, int durability, int increaseHpBy, bool canChop, bool canDig, bool canMine);
    
    //get/setter functions for all variables
    void setDamage(int damage);
    int getDamage() const;

    void setDurability(int durability);
    int getDurability() const;

    void setIncreaseHpBy(int increase_amount);
    int getIncreaseHpBy() const;

    bool getCanChop();
    bool getCanDig();
    bool getCanMine();

};

#endif

