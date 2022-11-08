#ifndef RESOURCES_H
#define RESOURCES_H

#include <iostream>
#include <string>
using namespace std;

class Resources
{
    
private:
    string name_;
    int amount_ = 0;

public:
    Resources();
    Resources(string name, int amount);

    void increaseAmount();

    void setAmount(int amount);
    int getAmount() const;

    void setName(string name_input);
    string getName() const;

};
#endif