#include<iostream>

int main(){
    int n;
    std::cin >> n;
    
    int *a = new int[n];
    
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    
    for (int i = n - 1; i > 0; i--){
        std::cout << a[i] << ' ';
    }
    std::cout << a[0]; 
    
    delete [] a;
    
}