#include <iostream>

using namespace std;

int n;
int arr[100];

void bubble(int arr[],int a){
    int b = 0;
    for(int i = 0 ; i < a-1 ; i++){
        for(int j = 0 ; j < a-1 ; j++){
            if(arr[j] > arr[j+1]){
            b = arr [j] ;
            arr[j] = arr[j+1] ;
            arr [j+1] = b ;
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
    bubble (arr,n);
    for (int i = 0; i < n; i++) {
        cout << (arr[i]) << " " ;
    }
    return 0;
}