#include <bits/stdc++.h>
using namespace std;

bool diferente(long long num, long long num2){
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    n1 = num%10;
    num /= 10;
    n2 = num%10;
    num /=10;
    n3 = num%10;
    num /=10;
    n4= num%10;
    num /=10;
    n5= num%10;
    n6 = num2%10;
    num2 /= 10;
    n7 = num2%10;
    num2 /=10;
    n8 = num2%10;
    num2 /=10;
    n9= num2%10;
    n10= num2%10;
    if(n1 != n2 && n1 != n3 && n1 != n4 && n1 != n5 && n2 != n3 && n2 != n4 && n2 != n5 && n3 != n4 && n3 != n5 && n4 != n5 && n1 != n6 && n1 != n7 && n1 != n8 && n1 != n9 && n1 != n10 && n2 != n6 )
        return true;
    return false;
}

void verificacion(int d1){
    int divisor;
    for(int i = 1234; i < 98765; i++){
        divisor = i * d1;
        if(to_string(divisor).length() == 5 &&  diferente(divisor,i) ){
            cout << divisor << "/" << i << "=" << d1 << endl; 
        }
    }
}

int main(){
    long long d1,d2;
    cin >> d1;
    verificacion(d1);
}