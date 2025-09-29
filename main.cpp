// COMSC-210 | Lab 15 | Heidi Pico
// IDE: VS CODE

#include "Movie.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<Movie> movies; // vector to hold Movie objects
    ifstream fin("input.txt"); // open input file

    string t, w; // temp variables
    int y;

    //check if file opened successfully
    if (fin.good()){
        while (getline(fin, t)) { // keep reading until end of file
            fin >> y;
            fin.ignore();
            getline(fin, w);

            Movie temp(t, y, w);
            movies.push_back(temp); // add movie object to vector
        }
        fin.close(); // close file after reading
    } else {
        cout << "Input file not found." << endl;
    }
    
    cout << "Movies in project:\n\n"; // output all movies stored in vector
    for (auto m : movies) {
        m.print(); // call the movie class
    }

    return 0;
}
