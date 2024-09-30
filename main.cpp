// COMSC-210 | Lab 15: Movie Class | Nina Tsao
// Reference: https://www.geeksforgeeks.org/convert-string-to-int-in-cpp/

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
    void setScreenWriter(string s) {screenWriter = s;}

    // print() method which prints the object data
    void print() {
        cout << "\tMovie: " << title << endl;
        cout << "\t\tYear released: " << yearReleased << endl;
        cout << "\t\tScreenwriter: " << screenWriter << endl;
    }
};

int main() {
    const int SIZE = 4;
    vector<Movie> movie(SIZE);
    ifstream fin;
    fin.open("input.txt");

    if (fin.good()) {
        Movie tempMovie;
        string title, screenWriter, year;
        int yearReleased;

        for (int i = 0; i < SIZE; i++) {
            getline(fin, title);
            tempMovie.setTitle(title);

            getline(fin, year);
            yearReleased = stoi(year);
            tempMovie.setYearReleased(yearReleased);

            getline(fin, screenWriter);
            tempMovie.setScreenWriter(screenWriter);

            movie[i] = tempMovie;
        }

        fin.close();
    }
    else {
        cout << "File not found." << endl;
        return 1;
    }

    for (auto i: movie)
        i.print();
        
    return 0;
}