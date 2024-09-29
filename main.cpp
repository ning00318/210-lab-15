// COMSC-210 | Lab 15: Movie Class | Nina Tsao

#include <iostream>
using namespace std;

class Movie {
private:
    string screenWriter;
    int yearReleased;
    string title;
public:
    string getScreenWriter() const {return screenWriter;}
    int getYearReleased() const {return yearReleased;}
    string getTitle() const {return title;}

};

int main() {
    return 0;
}