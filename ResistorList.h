/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ResistorList.h
 * Author: User
 *
 * Created on November 10, 2016, 10:41 PM
 */

#ifndef RESISTORLIST_H
#define RESISTORLIST_H

#include "Resistor.h"

#include <string>
#include <iostream>

using namespace std;

class ResistorList{
    private:
        Resistor *resHead; //pointer to list of resistor objects
    public:
        ResistorList();
        void insertR(string nameArg, double resistance, int endPoint1, int endPoint2);
        bool deleteR(string name); //delete specific resistor
        void printRAll(); //to print all resistors in list
        int countResistors();
        void printR(string name); //to print specific resistor in list
        bool findR(string name);
        Resistor* findResPoint(string name);
        void modifyR(string name, double resistance);
        void deleteRAll(); //delete all resistors
        int getSize();
        double makeFirstTerm(); //make first term of equation used in solve command
        Resistor* getHead();
};

#endif