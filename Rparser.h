/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rparser.h
 * Author: User
 *
 * Created on November 10, 2016, 10:41 PM
 */

#ifndef RPARSER_H
#define RPARSER_H

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

bool maxValInvalid(int node, int resistor);

bool valueOutOfRange (int value, int maxNodeNumber);

#endif
