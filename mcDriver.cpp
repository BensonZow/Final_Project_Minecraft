// CSCI1300 Fall 2022 Project 3
// Author: Benson Zou 
//Partner: Trish Le
// Recitation: 303 – Chanheum Park
// Project 3 - mcDriver.cpp

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cassert>

#include "Mob.h"
#include "Resources.h"
#include "Map.h"
#include "Item.h"
#include "Minecraft.h"

using namespace std;

int main () {
    int returned; //checks and stores returned map index from action menu
    int mapIndex = 0; //default 

    //assert(NewWorld.getUsername().compare("Steve") == 0);
    //Minecraft NewWorld;
    do { //loop generates world again if player respawns
        string username;
        cout << "Type in a username!" << endl;
        cin >> username;
        cout << "Minecraft is generating..." << endl;
        Minecraft NewWorld = Minecraft(username);
        do { //game loop 
            if (returned == 4) {    //player respawns
                mapIndex = 0;   //change map to default 
            }
            NewWorld.getMap().displayMap(mapIndex); //display map
            NewWorld.stats();   //display stats
            returned = NewWorld.action_menu(mapIndex); 
            if (returned != mapIndex) {
                mapIndex = returned;
            }
            if (returned == 5) {
                NewWorld.playerRankings();
                return 0;
            }
        }
        while (returned != 3 && returned != 4);
        //4 means respawn
        //3 means quit
        //2,1,0 are map indexes
        if (returned == 4) {
            cout << "resetting Minecraft..." << endl;
            NewWorld.getMap().resetMap();
        }
    }
    while (returned == 4);

    return 0;
}