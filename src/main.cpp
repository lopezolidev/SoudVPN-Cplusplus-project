#include <iostream>

using namespace std;

long int correction(long int n){
    if(n < 0) return n * -1;
    return n; //correction for a negative number
}

bool limits(long int x){
    if((correction(x) < 1000000000 || correction(x) > 9999999999)){
        cout << "Cadena Erronea";
        return true;
    } else {
        return false;
    }     //function to set the limits of each number
}

bool limits2(long int x){
    if(correction(x) < 10000000 || correction(x) > 99999999){
        cout << "Cadena Erronea";
        return true;
    } else {
        return false;
    }
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

void msg(int q){
    switch (q)
    {
    case 11:
        cout << " ";
        break;
    case 14:
        cout << "Park";
        break;
    case 15:
        cout << "South";
        break;
    case 17:
        cout << "Central";
        break;
    case 18:
        cout << "East";
        break;
    case 19:
        cout << "West";
        break;
    case 21:
        cout << "Juice";
        break;
    case 22:
        cout << "Beast";
        break;
    case 23:
        cout << "Mr";
        break;
    case 24:
        cout << "Mrs";
        break;
    case 25:
        cout << "Goes";
        break;
    case 26:
        cout << "Cameroon";
        break;
    case 33:
        cout << "Solaris";
        break;
    case 34:
        cout << "Jupiter";
        break;
    case 35:
        cout << "Venus";
        break;
    case 37:
        cout << "Terra";
        break;
    case 38:
        cout << "Mars";
        break;
    case 39:
        cout << "Saturn";
        break;
    case 41:
        cout << "Neptune";
        break;
    case 43:
        cout << "Align";
        break;
    case 45:
        cout << "To";
        break;
    case 52:
        cout << "Star";
        break;
    case 55:
        cout << "Sol";
        break;
    case 58:
        cout << "Invictus";
        break;
    case 63:
        cout << "Aurora";
        break;
    case 66:
        cout << "Apollo";
        break;
    case 69:
        cout << "Nice";
        break;
    case 75:
        cout << "Ceres";
        break;
    case 78:
        cout << "Cupid";
        break;
    case 81:
        cout << "Diana";
        break;
    case 88:
        cout << "Discordia";
        break;
    case 92:
        cout << "Disciplina";
        break;
    case 99:
        cout << "Pax";
        break;
    default:
        cout << "Valor no Encontrado";
        break;
    } 
    return; //message-number matrix
}

int max (int n1, int n2){
    if(n1 <= n2) return n2;
    return n1;
}
int min(int n1, int n2){
    if(n1 <= n2) return n1;
    return n2;
}

int divideAndRule(int a, char b){
    int a1, a2, a3, a4, a5;
    a1 = a % 10;
    a /= 10;

    a2 = a % 10;
    a /= 10;

    a3 = a % 10;
    a /= 10;

    a4 = a % 10;
    a /= 10;
    
    a5 = a;

    cout << a1 << " " << a2 << " "  << a3 << " "  << a4 << " "  << a5 << endl;

    if(b == '+'){
        if( a5 != 0) return max(max(max(a5, a4), a3), max(a2, a1));
        return max(max(a4, a3), max(a2, a1)); //validating if first int is 0, isn't noticed
    } 
    if(b == '-'){
        if( a5 != 0) return min(min(min(a5, a4), a3), min(a2, a1));
        return min(min(a4, a3), min(a2, a1));
    } 
    return 0;
}

bool listed(int v){
    if(v != 11 && v != 14 && v != 15 && v != 17 && v != 18 && v != 19 && v != 21 && v != 22 && v != 23 && v != 24 && v != 25 && v != 26 && v != 33 && v != 34 && v != 35 && v != 37 && v != 38 && v != 39 && v != 41 && v != 43 && v != 45 && v != 52 && v != 55 && v != 58 && v != 63 && v != 66 && v != 69 && v != 75 && v != 78 && v != 81 && v != 88 && v != 92 && v != 99 ){
        return false;
    } else {
        return true;
    } //listing function to find out if the number is not in the set of message-number matrix
}

void funB(long int m){
    int v1, v2;
    if((m - 99999999) > 0){
        v1 = m % 100000;
        m /= 100000;
        v2 = m;
    } else {
        v1 = m % 10000;
        m /= 10000;
        v2 = m;
    } //according to digits we'll choose the segmentation of the number into 4 or 5 digits pair

    cout << divideAndRule(max(v1, v2),'+') << " " << divideAndRule(min(v1, v2),'-') << endl; //using divideAndRule function to separate the minimun from the maximum
    return;
}

void funA( long int n){
    int v1, v2, v3, v4, v5;

    v1 = n % 100;
    n /= 100;

    v2 = n % 100;
    n /= 100;
    
    v3 = n % 100;
    n /= 100;
    
    v4 = n % 100;
    n /= 100;
    
    v5 = n;     //dividing the number in pairs

    if(v5 != 0) msg(v5);
    
    if(v4 != v5 || v5 == 11) msg(v4);

    if(((v3 != v4 && v3 != v5) && listed(v3)) || (v4 == 11 || v5 == 11)) msg(v3);

    if((((v2 != v3 && v2 != v4) && v2 != v5) && listed(v2)) || ((v3 == 11 || v4 || 11 ) || v5 == 11)) msg(v2); 

    if((((v1 != v2 && v1 != v3) && (v1 != v4 && v1 != v5)) && listed(v1)) || ((v2 == 11 || v3 == 11) || (v4 == 11 || v5 == 11))) msg(v1);
    //comparing multiple times will output a non-repeated message with exception of 11
 
    cout << endl;
    return;
}

bool isItPrime(int p){
    if(p == 2 || p == 3 || p == 5 ||p == 7 ||p == 11 ||p == 13 ||p == 17 || p == 19 ||p == 23 ||p == 29 ||p == 31 || p == 37 || p == 41 || p == 43 || p == 47 ||p == 53 ||p == 59 ||p == 61 ||p == 67 || p == 71 || p == 73 || p == 79 || p == 83 || p == 89 || p == 97 || p == 67){
        return true;
    } else {
        return false;
    }     //set of validations to look for prime number in the main number
}

void limbo(long int n){
    if(isItPrime(n%100)){
        funA(flip(n)); //procedure C is the same as A but with the numbers flipped. Therefore we'll flip the numbers and send them to procedure A
    } else if(n < 0) {
        funB(correction(n)); //calling procA as the number is greater than 0 and its last 2 digits don't conform a prime number
    } else {
        funA(n); //procB will occur as A but with the number being less than 0
    }
    return;
}

int main(){
    long int first, second;     //initializing variables with a long integer

    cout << "Inserte primer valor de 10 digitos: " << endl;
    cin >> first;

    if (limits(first)) return -1; //validation to know if it's a valid number

    cout << "Inserte segundo valor de 8 dígitos: " << endl;
    cin >> second;

    if(limits2(second)) return -1;

    limbo(first);
    limbo(second);
    //calling limbo function to call procedure A, B or C
    return 0;
}