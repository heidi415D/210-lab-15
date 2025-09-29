// COMSC-210 | Lab 14 | Heidi Pico
// IDE: VS CODE

#include "Movie.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    vecotr<Movie> movies;
    ifstream fin("input.txt");

    string t, w;
    int y;

    if (fin.good()){
        while (getline(fin, t)) {
            fin >> y;
            fin.ignore();
            getline(fin, w);

            Movie temp(t, y, w);
            movies.push_back(temp)
        }
        fin.close();
    } else {
        cout << "Input file not found." << endl;
    }
    
    for (auto m : movies) {
        m.print();
    }
}
