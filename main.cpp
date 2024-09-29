// COMSC-210 | Lab 15: Movie Class | Nina Tsao

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

// Movie class
class Movie {
// private member variables
private:
    string title;
    int yearReleased;
    string screenWriter;

// public setters & getters for each private member variable
public:
    string getTitle() const {return title;}
    void setTitle(string t) {title = t;}

    int getYearReleased() const {return yearReleased;}
    void setYearReleased(int y) {yearReleased = y;}

    string getScreenWriter() const {return screenWriter;}
    void setScreenWiter(string s) {screenWriter = s;}

    // print() method which prints the object data
    void print() {
        cout << "\tMovie: " << title << endl;
        cout << "\t\tYear released: " << yearReleased << endl;
        cout << "\t\tScreenwriter: " << screenWriter << endl;
    }
};

int main() {
    vector<string> movie;
    ifstream fin;
    fin.open("input.txt");
    if (fin.good())
        cout << "Works well!" << endl;
    else {
        cout << "File not found." << endl;
        return 1;
    }
    return 0;
}