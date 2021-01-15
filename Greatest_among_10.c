#include <stdio.h>
  int main() {
    int x[10];
    int i;
    int greatest_no;
    printf("Enter the ten values:\n");
    
    for (i = 0; i < 10; i++) {
    scanf("%d", &x[i]);
    }
    //Assume that x[0] is greatest
    greatest_no = x[0];
    for (i = 0; i < 10; i++) {
if (x[i] > greatest_no) {
greatest_no = x[i];
    }
    }
    printf("Greatest of the given ten numbers is %d", greatest_no);
    return 0;
  }