#include "Movie.h"
#include <iostream>
using namespace std;

Movie::Movie() { // default constructor
    title = "";
    year = 0;
    writer = "";
}

Movie::Movie(string t, int y, string w) { // constructor with parameters
    title = t;
    year = y;
    writer = w;
}

void Movie::setTitle(string t) { title = t;} // setters - assign values to private members
void Movie::setYear(int y) { year = y; } 
void Movie::setWriter(string w) { writer = w;}
    
string Movie::getTitle() { return title; } // getters - retrieve values of private members
int Movie::getYear() { return year; }
string Movie::getWriter() { return writer; }

void Movie::print() { // output values
    cout << "Movie: " << title << endl;
    cout << "    Year released: " << year << endl;
    cout << "    Screenwriter: " << writer << endl;
    cout << endl;
}