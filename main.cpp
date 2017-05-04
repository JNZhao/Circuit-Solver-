
/* 
 * File:   main.cpp
 * Author: jianan zhao
 *
 * Created on September 27, 2016, 10:56 PM
 */

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <cctype>

#define MAX_NODE_NUMBER 5000



using namespace std;

int parser() {
    string line, command;
    string name;
    string node1;
    string node2;
    string resistance;
    double r;
    int n1;
    int n2;


    cout << "> ";

    getline(cin, line);

    while (!cin.eof()) {

        stringstream lineStream(line);

        lineStream >> command;

        if (command == "insertR") {
            lineStream>>name;
            if (name == "all") {
                cout << "Error: resistor name cannot be the key word \"all\"" << endl;

            } else if (lineStream.eof()) {
                cout << "Error: too few arguments" << endl;
            } else {
                lineStream>>resistance;
                stringstream newStream(resistance);
                newStream>>r;
                if (!newStream.eof()) {
                    cout << "Error: invalid argument" << endl;
                } else {

                    if (r < 0) {
                        cout << "Error: negative resistance" << endl;


                    } else if (lineStream.eof()) {
                        cout << "Error: too few arguments" << endl;


                    } else {
                        lineStream>>node1;
                        stringstream newStream(node1);
                        newStream>>n1;
                        if (!newStream.eof())
                            cout << "Error: invalid argument" << endl;
                        else {
                            if (n1 < 0 || n1 > MAX_NODE_NUMBER) {
                                cout << "Error: node " << n1 << " " << "is out of permitted range 0-5000" << endl;

                            } else if (lineStream.eof()) {
                                cout << "Error: too fewer arguments" << endl;

                            } else {
                                lineStream>>node2;
                                if (!lineStream.eof())
                                    cout << "Error: too many arguments" << endl;
                                else {
                                    stringstream newStream(node2);
                                    newStream>>n2;
                                    if (!newStream.eof())
                                        cout << "Error: invalid argument" << endl;
                                    else {


                                        if (n2 < 0 || n2 > MAX_NODE_NUMBER) {
                                            cout << "Error: node " << n2 << " " << " is out of permitted range 0-5000" << endl;

                                        } else {
                                            if (n1 == n2) {
                                                cout << "Error: both terminals of resistor connect to node " << node1 << endl;

                                            } else {
                                                cout << fixed << setprecision(2) << showpoint << "Inserted: resistor " << name << " " << r << " " << "Ohms" << " " << node1 << " " << "-> " << node2 << endl;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }

                }
            }
        } else if (command == "modifyR") {
            lineStream>>name;
            if (name == "all") {
                cout << "Error: resistor name cannot be the key word \"all\"" << endl;
            } else if (lineStream.eof()) {
                cout << "Error: too fewer arguments" << endl;
            } else {
                lineStream>>resistance;
                stringstream newStream(resistance);
                newStream>>r;
                if (!newStream.eof())
                    cout << "Error: invalid argument" << endl;
                else {
                    if (r < 0) {
                        cout << "Error: negative resistance" << endl;
                    } else if (!(lineStream >> ws).eof()) {
                        cout << "Error: too many arguments" << endl;
                    } else {
                        cout << fixed << setprecision(2) << showpoint << "Modified: resistor " << name << " " << "to " << r<< " " << "Ohms" << endl;

                    }
                }

            }
        } else if (command == "printR") {
            lineStream>>name;
            if ((name == "all") && (lineStream.eof())) { //==================================== i changed here!!!!!
                cout << "Print: all resistors" << endl;
            } else if (!lineStream.eof()) {
                cout << "Error: too many arguments" << endl;
            } else {
                cout << "Print: resistor " << name << endl;
            }

        } else if (command == "printNode") {

            lineStream>>node1;


            if (node1 == "all" && (lineStream.eof())) {
                cout << "Print: all nodes" << endl;
            } else {
                stringstream newStream(node1);
                newStream>>n1;
                if (!newStream.eof()) {
                    cout << "Error: invalid argument" << endl;
                } else {


                    if (n1 < 0 || n1 > MAX_NODE_NUMBER)
                        cout << "Error: node " << n1 << " " << "is out of permitted range 0-5000" << endl;

                    else if (!lineStream.eof()) {
                        cout << "Error: invalid argument" << endl;

                    } else

                        cout << "Print: node " << n1 << endl;
                }
            }
        } else if (command == "deleteR") {
            lineStream>>name;
            if (!lineStream.eof())
                cout << "Error: too many arguments" << endl;
            else {
                if (name == "all") {
                    cout << "Deleted: all resistors" << endl;
                } else {

                    cout << "Deleted: resistor " << name << endl;
                }
            }
        } else {
            cout << "Error: invalid command" << endl;

        }

        cout << "> ";
        getline(cin, line);
    } // End input loop until EOF.
    return 0;
}

int main() {
    parser();

    return 0;

}
