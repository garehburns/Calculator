#include <iostream>

using namespace std;

class Math{
public:
    int Addition(int x, int y){
        int total = x + y;
        return total;
    }

    int Subtraction(int x, int y){
        int difference = x - y;
        return difference;
    }

    int Multiplication(int x, int y){
        int product = x * y;
        return product;
    }

    int Division(int x, int y){
        int quotient = x / y;
        return quotient;
    }
};

int main()
{
    int fnum, snum, operation;
    Math mathObj;

    cout << "Enter your first number: " << endl;
    cin >> fnum;

    cout << "\nEnter your second number: " << endl;
    cin >> snum;

    cout << "\nNote that decimal numbers will not be displayed, as they will be rounded." << endl;
    cout << "Now, do you want to add(1), subtract(2), multiply(3), or divide(4) these numbers?" << endl;
    cin >> operation;

    if(operation==1){
        cout << fnum << " and " << snum << " added together makes " << mathObj.Addition(fnum, snum) << "." << endl;
    }else if(operation==2){
        cout << snum << " subtracted from " << fnum << " leaves you with " << mathObj.Subtraction(fnum, snum) << "." << endl;
    }else if(operation==3){
        cout << fnum << " multiplied by " << snum << " makes " << mathObj.Multiplication(fnum, snum) << "." << endl;
    }else if(operation==4){
        cout << fnum << " divided by " << snum << " is equal to " << mathObj.Division(fnum, snum) << "." << endl;
    }else{
        cout << "You chose neither. Thus, none was done to the numbers you have entered." << endl;
    }

    return 0;
}
