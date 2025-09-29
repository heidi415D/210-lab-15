#ifndef MOVIE_H
#define MOVIE_H

#include <string>
using namespace std;

// class here
class Movie {
private:
    string title;
    int year;
    string writer;

public:
    Movie();
    Movie(string t, int y, string w);

    void setTitle(string t);
    void setYear(int y);
    void setWriter(string w);

    string getTitle();
    int getYear();
    string getWriter();

    void print();
};
#endif