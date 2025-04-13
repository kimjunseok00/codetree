#include <iostream>
#include <set>
using namespace std;

int n;
int arr[100];

void bubble(int arr[],int size){
    bool sorted; 

        do{
        sorted = true ;
        for(int j = 0 ; j<size-1 ; j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = tmp ;
                sorted = false ;
            }
        }
    }while(!sorted);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubble(arr,n) ;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}