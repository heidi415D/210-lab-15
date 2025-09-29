// COMSC-210 | Lab 14 | Heidi Pico
// IDE: VS CODE

#include <iostream>
#include <string>
using namespace std;

// class here
class Movie {
private:
    string title;
    int year;
    string writer;

public: 
    Movie() {
        title = "";
        year = 0;
        writer = "";
    }

    Movie(string t, int y, string w) {
        title = t;
        writer = w;
        year = y;
    }

    void setTitle(string t) { title = t;}
    void setYear(int y) { year = y; } 
    void setWriter(string w) { writer = w;}
    
    string getTitle() { return title; }
