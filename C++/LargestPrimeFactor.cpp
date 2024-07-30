// Largest Prime Factor

/*
    Calcolare i fattori primi di un numero e trovare quello più grande.
*/

#include <iostream>

using namespace std;

void InputN(long int &N) {
    cout<<endl<<"Digita un numero: ";
    cin>>N;
}

void ScomposizioneFattoriPrimi(long int N) {
    cout<<endl<<"Fattori primi di "<<N<<" :";

    long int x = 1, Largest = 0, R = 1, y = 1;

    while (x <= N) {
        if (N%x == 0 && x != N && x != 1) {
            if (x%2 == 0) {
                y = 2;
            } else {
                y = x;
            }

            cout<<endl<<y;
            Largest = x;

            R *= y;

            if (R == N) {
                break;
            }
        }

        x++;
    }

    cout<<endl<<"Fattore primo più grande -> "<<Largest<<endl;
}

int main() {
    long int Num;

    InputN(Num);

    ScomposizioneFattoriPrimi(Num);

    return 0;
}
