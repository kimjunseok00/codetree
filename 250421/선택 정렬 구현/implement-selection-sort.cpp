#include <iostream>

using namespace std;

int n;
int arr[100];

void ch(int arr[],int a){
    for(int i = 0 ; i < a - 1 ; i++){
        int b = i ;
        for(int j = i + 1 ; j < a ; j++){
            if(arr[b] > arr[j]){
                b = j ;
            }
        }
            if(i!=b){
            swap(arr[i],arr[b]);
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
