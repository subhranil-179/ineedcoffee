#include <iostream>
using namespace std;

int main () {
    // Question 1

    /*
    int a = 9;

    if (a == 9) { cout << "NINEY"; }

    if (a > 0) { cout << "POSITIVE"; }
    else { cout << "NEGATIVE"; }
    */

    /*
    My answer is:
        NINEY
        POSITIVE
    */

    // Question 2

    /*

    int a = 2;
    int b = a + 1;

    if ((a=3)==b){
        cout << a;
    }
    else {
        cout << a+1;
    }
    */

    /*
    My answer is:
     3; a is assigned value 3 and before that b's value was calculated as 2+1=3,
     making the if condition true!
    */

    // Question 3

    int a = 24;

    if (a > 20) {
        cout << "First";
    }
    else if (a == 24) {
        cout << "Second";
    }
    else {
        cout << "Final";
    }
    cout << a;
    /* My Answer:
     First 24; first condition returned true, so no need to check other conditions
     */
}
