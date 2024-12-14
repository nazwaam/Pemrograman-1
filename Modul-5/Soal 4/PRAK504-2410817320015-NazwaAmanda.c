#include<stdio.h>
int reverse(int n){
    int reversed = 0;
    while (n != 0){
        int reminder = n % 10;
        reversed = reversed * 10 + reminder;
        n /= 10;
    }
    return reversed;
}
int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d", reverse(C));
    
    return 0;
}