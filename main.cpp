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
    const int SIZE = 4;     // four records

    vector<Movie> movie(SIZE);
    ifstream fin;
    fin.open("input.txt");      // read data from an input.txt file

    if (fin.good()) {
        // read data into a temporary Movie object
        Movie tempMovie;
        string title, screenWriter, year;
        int yearReleased;

        // read data for each record
        for (int i = 0; i < SIZE; i++) {
            getline(fin, title);
            tempMovie.setTitle(title);

            getline(fin, year);
            yearReleased = stoi(year);      // stoi() -> convert string to integer
            tempMovie.setYearReleased(yearReleased);

            getline(fin, screenWriter);
            tempMovie.setScreenWriter(screenWriter);

            movie[i] = tempMovie;   // store objects in the vector
        }

        fin.close();
    }
    else {
        cout << "File not found." << endl;
        return 1;
    }

    // print object in the vector
    for (auto i: movie)
        i.print();

    return 0;
}