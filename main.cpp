#include <iostream>
using namespace std;

void Insertion(int arr[], int n){
    for (int i = 1; i < n; i++){
        
        // i = 1
        
        int j = i - 1; // j = 0  (10) in the array

        int a = arr[i]; // i = 1 which means arr[i] = 1

        while(j >= 0 && arr[j] > a){ // arr[j] > a /////    so arr[j] = 10 ///// a = 1

            arr[j+1] = arr[j]; // arr[j+1] = 1 and arr[j] = 10 /// so it change the 1 to 10
            j = j - 1; // I dont get get why this is here 
        
        }
        
        arr[j + 1] = a; // Now j's value is 0 // some value in the array is deleted but we still have that same valure stored in the variable a 
        // so this peace of code put the a varable in the array where it belongs.
    
    }
}

void Print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int ar[] = {10, 1, 12, 17, 16, 11, 30, 60, 50, 40, 70};
    int size = sizeof(ar)/sizeof(ar[0]);

    Insertion(ar, size);
    Print(ar, size);

    return 0;
}
