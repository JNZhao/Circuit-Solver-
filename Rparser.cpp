/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

bool maxValInvalid(int node, int resistor){ //checks that maxVal arguments are valid
    if (node <= 0 || resistor <= 0){
        cout << "Error: maxVal arguments must be greater than 0" << endl;
        return true;
    }
    return false;
}

bool valueOutOfRange (int value, int maxNodeNumber){ //checks that the user inputted node is valid
    if (value < 0 || value > maxNodeNumber){
        cout << "Error: node " << value << " is out of permitted range 0-" << maxNodeNumber << endl;
        return true;
    }
    return false;
}