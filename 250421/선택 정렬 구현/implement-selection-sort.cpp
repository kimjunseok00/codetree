#include <iostream>

using namespace std;

int n;
int arr[100];

void ch(int arr[],int a){
    for(int i = 0 ; i < a - 1 ; i++){
    int b = i ;
        for(int j = i + 1 ; j < a - 1 ; j++){
            if(arr[i] > arr[j]){
                b = j ;
            }
                int tmp = arr[i] ;
                arr [i] = arr[b] ;
                arr [b] = tmp ;
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
