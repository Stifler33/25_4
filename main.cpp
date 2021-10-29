#include <iostream>
#include "main_header.h"
int main() {
    std::string action = "scalpel";
    int countIteration = 0;
    while (action != end || !equalCoor){
        std::cout << "Enter action\n";
        if (countIteration == 0) {
            std::cout << "scalpel\n";
        }else std::cin >> action;
        if (action == "scalpel"){
            FOUR
            operation.scalpel(Ax, Ay, Bx, By);
        }else if (action == "hemostat"){
            TWO
            operation.hemostat(Ax, Ay);
        }else if (action == "tweezers"){
            TWO
            operation.tweezers(Ax, Ay);
        }else if (action == "suture"){
            FOUR
            operation.suture(Ax, Ay, Bx, By);
            for (int i = 0; i < 4; i++){
                if (coor.suture[i] != coor.scalpel[i]){
                    std::cout << "coordinates do not match\n";
                    break;
                }
                equalCoor = true;
            }
            if (equalCoor) std::cout << "Operation completed\n";
        }else {
            std::cout << "not correct action\n";
        }
        countIteration++;
    }
    return 0;
}
