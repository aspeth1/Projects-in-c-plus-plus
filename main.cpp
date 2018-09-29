/*
 * Created by Austin Speth
 */
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    int count = 0;
    int sum =0;
    const int minimum = 0;
    const int maximum = 101;
    int min;
    int max;

    int x;
    do{

        //Stores input to corresponding value and increases count
        cout << "Enter and integer between 1 and 100(-1 to terminate): " << endl;
        cin >> x;
        count++;

        //sets maximum value
        if(x < maximum && max < x){
            max = x;
        }

        //sets minimum value
        if(x > minimum && x < max) {
            min = x;
        }

        //Checks if integer is valid and decreases count if invalid
        if(x >= maximum || x <= minimum){
            cout << "Invalid integer, must be be between 1 and 100." << endl;
            count--;

        //adds the inputs together
        }else if(x < maximum && x > minimum){
            sum += x;
        }

        cout << sum << endl;


    }while (x != -1);


    //calculates the average
    double average = double(sum) / double(count);

    cout << "Count" << setw(8) << "Minimum" <<setw(8) << "Maximum" << setw(8) << "Average" << endl << setw(5)
    << count << setw(8) << min << setw(8) << max << setw(8) << setprecision(4) << average << endl;

    return 0;
}