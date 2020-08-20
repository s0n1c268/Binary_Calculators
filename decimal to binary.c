#include <stdio.h>
#include <math.h>

long decimalToBinary(int decimalnum){

    long binarynum = 0;
    int rem, temp = 1;

    while(decimalnum!=0){

          rem = decimalnum%2;
          decimalnum = decimalnum / 2;
          binarynum = binarynum + rem * temp;
          temp = temp * 10;
    }
    return binarynum;
 }

 int main(){

    int decimalnum;
    printf("Enter a number: ");
    scanf("%d", &decimalnum);
    printf("Here is your binary number: %ld", decimalToBinary(decimalnum));
    return 0;
 }
