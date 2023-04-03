#include <bits/stdc++.h>
using namespace std;

int a= 0, b = 0,t[8];
int w =1;
bool place(int r,int c){
    for(int q = 0; q < r; q++){
        if(t[q] == c ||abs(q - r) == abs(t[q] - c)){
            return false;
        }
    }
    return true;
}

void tablero(int r){
    int c;
    if(r == 8 && t[a] == b){
        cout << w << "\t";
        for(int i = 0; i < 8;i++){
            cout << t[i] << " ";
        }
        cout << "\n";
        w++;            
    }
    for(c = 0; c < 8; c++){
        if(place(r,c)){
            t[r] = c;
            tablero(r+1);
        }
    }
    
}

int main(){
    cout << "SOLN \t COLUMN\n";
    tablero(0);    
}