#include <iostream>
using namespace std;

int main()
{
    int answer;
    cout << "Geometry Calculator\n\n";
    cout << "\t1. Calculate the Area of a Circle\n";
    cout << "\t2. Calculate the Area of a Rectangle\n";
    cout << "\t3. Calculate the Area of a Triangle\n";
    cout << "\t4. Quit\n\n";
    cout << "\tEnter your choice (1-4): ";
    cin >> answer;

    switch(answer){
        case 1:
            int radius;
            cout << "\nCircle:\nEnter radius: ";
            cin >> radius;
            if (radius < 0){
                cout << "\nError: Negative values not accepted" << endl;
                break;
            }
            cout << "\nArea = " << 3.14159*radius*radius << endl;
            break;
        case 2:
            cout << "\nRectangle:\nEnter length: ";
            int length;
            cin >> length;
            if (length < 0){
                cout << "\nError: Negative values not accepted" << endl;
                break;
            }
            cout << "\nEnter width: ";
            int width;
            cin >> width;
            if (width < 0){
                cout << "\nError: Negative values not accepted" << endl;
                break;
            }
            cout << "\nArea = " << width*length << endl;
            break;
        case 3:
            cout << "\nTriangle:\nEnter base length: ";
            int base;
            cin >> base;
            if (base < 0){
                cout << "\nError: Negative values not accepted" << endl;
                break;
            }
            cout << "\nEnter height: ";
            int height;
            cin >> height;
            if (height < 0){
                cout << "\nError: Negative values not accepted" << endl;
                break;
            }
            cout << "\nArea = " << 0.5*base*height << endl;
            break;
        case 4:
            break;
        default:
            cout << "Error: Number not between 1-4" << endl;
    }
}