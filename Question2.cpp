#include <iostream>
#include <conio.h> 
using namespace std;

class Tollbooth {
private:
    unsigned int carCount;
    double cashTotal;

public:
    Tollbooth() {
        carCount = 0;
        cashTotal = 0.0;
    }
    void payingCar() {
        carCount++;
        cashTotal += 0.50;
    }
    void nopayCar() {
        carCount++;
    }
    void display() const {
        cout << "\nTotal cars: " << carCount << endl;
        cout << "Total cash: $" << cashTotal << endl;
    }
};

int main() {
    Tollbooth tollbooth;
    char ch;
    cout << "1.Press 'P' for a paying car"<<endl<<"2.Press 'N' for a non - paying car." << endl;
    cout << "3.Press 'Esc' to display totals and exit.\n";
    cout << "\n";
    while (true) {
        
        ch = _getch(); 

        if (ch == 27) { 
            cout << "\nExiting and displaying totals:";
            tollbooth.display();
            break;
        }
        else if (ch == 'P' || ch == 'p') {
            tollbooth.payingCar();
            cout << "Paying car counted.\n";
        }
        else if (ch == 'N' || ch == 'n') {
            tollbooth.nopayCar();
            cout << "Non-paying car counted.\n";
        }
        else {
            cout << "Invalid input. Please press 'P', 'N', or 'Esc'.\n";
        }
    }
    return 0;
}
