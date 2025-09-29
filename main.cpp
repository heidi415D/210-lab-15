// COMSC-210 | Lab 14 | Heidi Pico
// IDE: VS CODE

#include <iostream>
#include <string>
using namespace std;

    void setTitle(string t) { title = t;}
    void setYear(int y) { year = y; } 
    void setWriter(string w) { writer = w;}
    
    string getTitle() { return title; }
    int getYear() { return year; }
    string getWriter() { return writer; }

    void print() {
        cout << "Movie: " << title << endl;
        cout << "    Year released: " << year << endl;
        cout << "    Screenwriter: " << writer << endl;
        cout << endl;
    }

int main() {
    Movie m("Test Movie", 2025, "Heidi Pico");
    m.print();
    return 0;
}
