#include <iostream>

using namespace std;

int main() {
    int x = 1;
    int y = 2;
    int SommaPari = 0;

    cout<<endl<<"Sequenza:"<<endl<<x<<endl<<y;

    while (y <= 4000000) {
        if (y % 2 == 0) {
            SommaPari += y;
        }

        int Q = x;
        x = y;
        y =  Q + x;

        cout<<endl<<y;
    }

    cout<<endl<<endl<<"Somma dei numeri pari -> "<<SommaPari<<endl;

    return 0;
}
