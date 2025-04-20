#include <iostream>

using namespace std;

int n;
int arr[100];

void ch(int arr[],int a){
    int b = 0 ;
    for(int i = 0 ; i < a - 1 ; i++){
        for(int j = i + 1 ; j < a - 1 ; j++){
            if(arr[i] > arr[j]){
                b = arr[j] ;
                arr [j] = arr[i] ;
                arr [i] = b ;
            }
        }
    }
    return ;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    ch(arr,n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
    }

    // Please write your code here.

    return 0;
}
