#include <iostream>

using namespace std;

bool ignore(int boola[],int boolb[],int x, int y){
    for(int i=0 ; i<=x-y ; i++){    
        bool match = true ;
        for(int j=0 ; j<y ; j++){
            if(boola[i+j] != boolb[j]){
            match = false;
            break;
        }
    }
        if (match) return true ;
    }
    return false ;
}
int n1, n2;
int a[100], b[100];

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    if(ignore(a,b,n1,n2)) cout << "Yes" ;
    else cout << "No" ;
    return 0;
} 