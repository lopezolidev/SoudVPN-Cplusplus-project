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

long int flip(long int n){
    int v1, v2, v3, v4, v5;
    v1 = n % 100;
    n /= 100;

    v2 = n % 100;
    n /= 100;
    
    v3 = n % 100;
    n /= 100;
    
    v4 = n % 100;
    n /= 100;
    
    v5 = n;
        
    return v1*100000000 + v2*1000000 + v3*10000 + v4*100 + v5;    
}

long int funC( long int n){
    int v1, v2, v3, v4, v5;
    
    n = flip(n);

    v1 = n % 100;
    n /= 100;

    v2 = n % 100;
    n /= 100;
    
    v3 = n % 100;
    n /= 100;
    
    v4 = n % 100;
    n /= 100;
    
    v5 = n;

        funA(v1);
        funA(v2);
        funA(v3);
        funA(v4);
    //calling function A, either way is going to execute the same code, with the exception of flipping

    if(v5 != 0){
        funA(v5);
    } 
}

long int funA( long int n){

}


long int funB( long int n){
    
}

void limbo(long int n){
    if(isItPrime(n)){
        funC(n);
    } else if(n > 0) {
        funA(n);
    } else {
        funB(n);
    }
    return;
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

    limbo(first);
    limbo(second);

    //calling limbo function to call procedure A, B or C

    return 0;
}