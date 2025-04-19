#include <iostream>

using namespace std;

int n,i=0;

    int f(int num,int i){
        if(num==0) return 0;
        if(num==1) return i;
        if(num%2==0) return f(num/2,i+1);
        if(num%2==1) return f(3*num+1,i+1);
    }

int main() {
    cin >> n;
    cout << f(n,i);
    return 0;
}