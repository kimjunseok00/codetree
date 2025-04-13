#include <iostream>

using namespace std;

int n;
int arr[100];
void selection(int arr[],int size){
    
    for(int i = 0 ; i < size-1 ; i++){
        int min = i ;
        for(int j=i+1 ; j<size ; j++){
            if(arr[j] < arr[min]){
                min = j ;
            }
        }
            int tmp = arr[i] ;
            arr[i] = arr[min] ;
            arr[min] = tmp ;
    }
}

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    selection(arr,n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
    }

    return 0;
}
