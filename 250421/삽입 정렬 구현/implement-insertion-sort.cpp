#include <iostream>

#define MAX_N 100

using namespace std;

int n;
int arr[MAX_N];

void join(int arr[],int a){
    for (int i = 0 ; i < a ; i++){
        int key = arr[i] ;
        for(int j = i -1 ; j>=0 && arr[j] > key ; j--){
            int tmp = arr[j+1] ;
            arr[j+1] = arr[j] ;
            arr[j] = tmp ;
        }
    }
    return ;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    join(arr,n);
    
    for (int i = 0; i < n; i++) {
        cout << arr [i] << " " ;
    }
    return 0;
}
