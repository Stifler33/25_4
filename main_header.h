#pragma once
#include <iostream>
#include "coordinates.h"
#define TWO std::cout << "Enter coordinates\n"; std::cin >> Ax >> Ay;
#define FOUR std::cout << "Enter coordinates\n"; std::cin >> Ax >> Ay >> Bx >> By;
int Ax, Ay, Bx, By;
struct action {
    void scalpel(int Ax, int Ay, int Bx, int By){
        coor.scalpel[0] = Ax;
        coor.scalpel[1] = Ay;
        coor.scalpel[2] = Bx;
        coor.scalpel[3] = By;
        std::cout << "incision\n";
    }
    void hemostat(int x, int y){
        coor.hemostat[0] = x;
        coor.hemostat[1] = y;
        std::cout << "clamp\n";
    }
    void tweezers(int x, int y){
        coor.tweezers[0] = x;
        coor.tweezers[1] = y;
        std::cout << "tweezers\n";
    }
    void suture(int Ax, int Ay, int Bx, int By){
        coor.suture[0] = Ax;
        coor.suture[1] = Ay;
        coor.suture[2] = Bx;
        coor.suture[3] = By;
        std::cout << "suture\n";
    }
};
action operation;
std::string end = "suture";
bool equalCoor = false;