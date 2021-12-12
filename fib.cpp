#include <iostream>
using namespace std;

void ComputeFibonacci(int a1, int a2, int n) {
    if (n == 1) { cout << "=> Value of the desired term is " << a1 << endl; }

    else if (n == 2) { cout << "=> Value of the desired term is " << a2 << endl; }

    else { 
        cout << a1 << " + " << a2 << " = " << a1 + a2 << endl;
        ComputeFibonacci(a2, a1 + a2, n - 1);
    }
}


int main() {
    int termN; 
    char repeat;
    cout << "This program finds the nth term in the Fibonacci sequence by calculating step-by-step" << endl;
    
    do {
        termN = 0; //assign initial value for termN to activate the while loop
   
        while (termN < 1) {
            cout << "\n which term do you want to find? ";
            cin >> termN;  //user need to enter the valid termN (>=1)
        }

        cout << "0" << endl << "1" << endl; //first term is 0, second term is 1
        ComputeFibonacci(0, 1, termN);
 

        repeat = 'o'; //assign initial value for repeat to activate the while loop

        while (toupper(repeat) != 'Y' && toupper(repeat) != 'N') {
            cout << "Do you want to find another term? (Y/N)";
            cin >> repeat;
        }
    } while (toupper(repeat) == 'Y');
    return 0;
}