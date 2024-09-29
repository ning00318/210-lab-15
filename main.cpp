// COMSC-210 | Lab 15: Movie Class | Nina Tsao

#include <iostream>
using namespace std;

// Movie class
class Movie {
// private member variables
private:
    string screenWriter;
    int yearReleased;
    string title;

// public setters & getters for each private member variable
public:
    string getScreenWriter() const {return screenWriter;}
    void setScreenWiter(string s) {screenWriter = s;}

    int getYearReleased() const {return yearReleased;}
    void setYearReleased(int y) {yearReleased = y;}

    string getTitle() const {return title;}
    void setTitle(string t) {title = t;}

    // print() method which prints the object data
    void print() {
        cout << "\tMovie: " << title << endl;
        cout << "\t\tYear released: " << yearReleased << endl;
        cout << "\t\tScreenwriter: " << screenWriter << endl;
    }
};

int main() {
    return 0;
}