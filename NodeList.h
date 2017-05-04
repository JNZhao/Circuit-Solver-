/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodeList.h
 * Author: User
 *
 * Created on November 10, 2016, 10:41 PM
 */


#ifndef NODELIST_H
#define NODELIST_H

#include "Node.h"
#include "ResistorList.h"

#include <string>
#include <iostream>

using namespace std;

class NodeList{
    private:
        Node* nodeHead;
    public:
        NodeList();
        void insertNode(int nodeNum_);
        bool nodeExists(int nodeNum); //checks if node with number nodeNum exists
        Node* findNode(int nodeNum);
        Node* getHead();
        void printR(string name);
        int getSize();
};

#endif

