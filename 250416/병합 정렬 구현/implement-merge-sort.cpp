#include <iostream>

using namespace std;

int n;
int arr[100000];
int bubble_arr[100000];

void fighter(int,int,int);

void bubble(int low,int high){
    if (low < high){
        int mid = (low + high) / 2 ;
        bubble(low,mid);
        bubble(mid+1,high);
        fighter(low,mid,high);
    }
}


void fighter(int low,int mid,int high){
    int i = low , j = mid + 1;
    int k = low;

    while(i<=mid && j<=high){
        if (arr[i]<=arr[j]){
            bubble_arr[k] = arr[i];
            k += 1;
            i += 1;
        }
        else{
            bubble_arr[k] = arr[j] ;
            k += 1;
            j += 1;
        }
     }

    while(i<=mid){
        bubble_arr[k] = arr[i];
        k += 1;
        i += 1;
    }
    
    while(j<=high){
        bubble_arr[k] = arr[j];
        k += 1;
        j += 1;
    }
    for (int k=low ; k<=high ; k++){
        arr[k] = bubble_arr[k] ;
    }
}


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bubble(0,n-1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    // Please write your code here.

    return 0;
}
