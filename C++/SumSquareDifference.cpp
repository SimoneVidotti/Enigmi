// Sum Square Difference

/*
 *    The sum of the squares of the first ten natural numbers is,
 *    1^2 + 2^2 ... + 10^2 = 385
 *
 *    The square of the sum of the first ten natural numbers is,
 *    (1 + 2 ... + 10)^2 = 55^2 = 3025
 *
 *    Hence the difference between the sum of the squares of the first
 *    ten natural numbers and the square of the sum is,
 *    3025 - 385 = 2640
 *
 *    Find the difference between the sum of the squares of the first
 *    one hundred natural numbers and the square of the sum.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int Min, Max, x=0, y=0, z=0, R=0;

    cout<<endl<<"Min > ";
    cin>>Min;

    cout<<endl<<"Max > ";
    cin>>Max;

    for (int i=Min; i <= Max; i++) {
        x += pow(i, 2);
        z += i;
    }

    y = pow(z, 2);

    R = y - x;

    cout<<endl<<"The sum-square-difference is: "<<R<<endl;

    return 0;
}
