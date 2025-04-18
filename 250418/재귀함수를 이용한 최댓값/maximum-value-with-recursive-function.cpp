#include <iostream>

using namespace std;

int n;
int arr[100];

int sum(int arr[],int a){
    if(a==1) return a;
    int max = sum(arr,a-1);
    return max > arr[a] ? max : arr[a];
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << sum(arr,n) << " " ;

    return 0;
}