#include<iostream>
#include<math.h>
using namespace std;
#define n 100

int arr[n];
void Eratosthenes(){
    for(int i = 0; i < n; ++i){
        arr[i] = 1;
    }
    for(int i = 2; i < sqrt(n); i++){
        if(arr[i]){
                for(int j = 0;i*(j+2)< n; j++){
                    arr[i*(j+2)] = 0;
                }
        }
    }
    for(int i = 2; i < n; ++i){
        if (arr[i]){
            cout << i << endl;
        }
    }
}

int main(){
    Eratosthenes();

    return 0;

}