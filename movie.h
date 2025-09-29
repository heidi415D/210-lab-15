#ifndef MOVIE_H
#define MOVIE_H

#include <string>
using namespace std;

// class definition
class Movie {
private:
    string title;
    int year;
    string writer;

public: // default constructor and constructor with parameters
    Movie();
    Movie(string t, int y, string w);

    void setTitle(string t); // setters
    void setYear(int y);
    void setWriter(string w);

    string getTitle(); // getters
    int getYear();
    string getWriter();

    void print(); // print method
};

#endif