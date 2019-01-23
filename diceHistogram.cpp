/************************
************ Austin Speth
**************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <array>
#include <sstream>

using namespace std;

//Scoped enumeration that sets the sides of the die
enum class Side {
    ONE, TWO, THREE, FOUR, FIVE, SIX
};

//structure for storing the values and labels
struct Bar {
    int value;
    Side label;
};

//Function prototype for dice roll
void rollDice(Bar h[], int n = 100);

//String function prototype for storing output of histogram
string getHistogram(Bar h[], char c = '*');

int main(){

    //Histogram array
    Bar histogram[6] = {{0, Side::ONE}, {0, Side::TWO}, {0, Side::THREE}, {0, Side::FOUR}, {0, Side::FIVE}, {0, Side::SIX}};

    //do-while loop that takes users input and runs program
    char x;
    do {
        cout << "DICE ROLLING SIMULATION" << endl;
        cout << "=======================" << endl;
        cout << "r. Roll dice" << endl;
        cout << "h. Display histogram" << endl;
        cout << "q. Quit program \n" << endl;
        cout << "Enter your choice: " << endl;
        cin >> x;

        //tests user input for dice roll
        if (x == 'r') {
            rollDice(histogram);
        }

        //tests user input to output histogram
        if (x == 'h'){
            cout << getHistogram(histogram);
        }


    }while(x != 'q' && x != 'Q');

    return 0;
}

//Function for generating random numbers to simulate dice roll and store roll to value in struct
void rollDice(Bar h[], int n) {

    int roll;
    for (int i = 0; i < n; i++) {
        roll = 1 + rand() % 6;
        if (roll == 1){
            h[0].value++;
        }else if(roll == 2){
            h[1].value++;
        }else if(roll == 3){
            h[2].value++;
        }else if(roll == 4){
            h[3].value++;
        }else if(roll == 5){
            h[4].value++;
        }else if(roll == 6){
            h[5].value++;
        }
    }

}


//String function for storing input to be printed to the console
string getHistogram(Bar h[], char c){

    stringstream sout;

    sout << "One: ";
    for(int i = 0; h[0].value > i; i++){
        sout << c;
    }
    sout << "(" << h[0].value << ")" << endl;

    sout << "Two: ";
    for(int i = 0; h[1].value > i; i++){
        sout << c;
    }
    sout << "(" << h[1].value << ")" << endl;

    sout << "Three: ";
    for(int i = 0; h[2].value > i; i++){
        sout << c;
    }
    sout << "(" << h[2].value << ")" << endl;

    sout << "Four: ";
    for(int i = 0; h[3].value > i; i++){
        sout << c;
    }
    sout << "(" << h[3].value << ")" << endl;

    sout << "Five: ";
    for(int i = 0; h[4].value > i; i++){
        sout << c;
    }
    sout << "(" << h[4].value << ")" << endl;

    sout << "Six: ";
    for(int i = 0; h[5].value > i; i++){
        sout << c;
    }
    sout << "(" << h[5].value << ")" << endl;
    return sout.str();

}