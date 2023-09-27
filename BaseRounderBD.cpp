//Brandon Dix

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double number;
    double base;
    double decimal;

    while (1) {

        cout << "Enter a number: ";
        	cin >> number;
        		cout << endl;

        cout << "Enter the base of the number: ";
        	cin >> base;
        		cout << endl;

        cout << "Enter the number of decimal places to round to: ";
        	cin >> decimal;
        		cout << endl;

        int value = decimal + 1;
        double x = number;

        while (value) {
            x = x * 10;
            value = value - 1;
        }

        x = int(x) % 10;
        double y = (double)(x) / base;

        if (y >= 0.5) {
            value = decimal;

            while (value) {
                number = number * 10;
                value = value - 1;
            }

            number = number + 1;
            value = decimal;

            while (value) {
                number = number / 10;
                value = value - 1;
            }
        }

        cout << "The resulting number is: ";
        	cout << setprecision(decimal);
        	cout << fixed << number << endl << endl;

        cout << "Would you like to run the program again (Yes/No) : ";
        	string run;
        		cin >> run;
        			cout << endl;

        if (run == "No" || run == "no") {
            cout << "Okay!";
            return(0);
        }
    }
}