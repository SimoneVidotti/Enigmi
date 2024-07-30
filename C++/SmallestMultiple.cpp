// Smallest Multiple

/*
    2520 is the smallest number that can be divided by each of the numbers from to without any remainder.
    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?
*/

#include <iostream>

using namespace std;

int main() {
    long int Min, Max, SmallestMultiple;

    cout<<endl<<"From: ";
    cin>>Min;

    cout<<endl<<"To: ";
    cin>>Max;

    SmallestMultiple = Min;

    while (true) {
        bool Ctrl = false;

        for (long int i=Min; i <= Max; i++) {
            if (SmallestMultiple%i == 0) {
                Ctrl = true;
            } else {
                Ctrl = false;
                break;
            }
        }

        if (Ctrl == true) {
            break;
        }

        SmallestMultiple++;
    }

    cout<<endl<<"The smallest multiple from "<<Min<<" to "<<Max<<" is: "<<SmallestMultiple<<endl;

    return 0;
}
