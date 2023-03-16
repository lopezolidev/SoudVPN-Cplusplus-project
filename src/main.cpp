#include <iostream>

using namespace std;

// void H(int a){
//     cout << "Hello!";

//     return;
// }

bool isItPrime(int p){
    if(p == 2 || p == 3 || p == 5 ||p == 7 ||p == 11 ||p == 13 ||p == 17 ||p == 19 ||p == 23 ||p == 29 ||p == 31 || p == 37 || p == 41 || p == 43 || p == 47 ||p == 53 ||p == 59 ||p == 61 ||p == 67 || p == 71 || p == 73 || p == 79 || p == 83 || p == 89 || p == 97 || p == 67){
        cout << "Prime";
        return true;
    } else {
        return false;
    }
    //set of validations to look for prime number in the main number
}

long int correction(long int n){
    if(n < 0) return n * -1;
    return n;
}

int main(){
    // H(1);
    long int first, second;

    cout << "Inserte primer valor: " << endl;
    cin >> first;
    //initializing variables with a long integer

    if (correction(first) < 1000000000 || correction(first) > 9999999999){
        cout << "Cadena Erronea";
        return -1;
    } //validation to add robustness in the code

    cout << "Inserte segundo valor: " << endl;
    cin >> second;

    if(correction(second) < 10000000 || correction(second) > 99999999){
        cout << "Cadena Erronea";
        return -1;
    }

    cout << first % 100;

    if(isItPrime(first % 100)){
        cout << "Hello!";
    } else {
        cout << "Nope!";
    }
    //calling prime number function to call procedure C


    return 0;
}