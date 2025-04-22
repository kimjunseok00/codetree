#include <iostream>

#define max_m 100000

using namespace std;
int n;
int arr[max_m];
void bubble(int arr[], int k){
    
    int max = arr[0] ;
    
    for(int i = 0 ; i < k ; i++){
        if(max < arr[i]) max = arr[i] ;
    }
    
    for (int exp = 1 ; max / exp > 0 ; exp *= 10){
        
        int brr[10][max_m] ;
        int brr_size[10] = {0} ;
    
        for(int j=0 ; j < k ; j++){
            int num = (arr[j] / exp) % 10 ;
            brr[num][brr_size[num]++] = arr[j] ;
            }
    
    int idx = 0 ; 
    
    for (int i = 0 ; i<10 ; i++){
        for(int j = 0 ; j<brr_size[i] ;j++){
            arr[idx++] = brr[i][j] ;
            }
        }
    }
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
    return 0;
}
