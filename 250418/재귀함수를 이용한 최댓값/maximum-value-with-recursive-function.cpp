#include <iostream>

using namespace std;

int n;
int arr[100];

int sum(int arr[],int a){
    if(a==1) return arr[0];
    int submax = sum(arr,a-1);
    return max(arr[a-1],submax);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << sum(arr,n) << " " ;

    return 0;
}