#include <stdio.h>
void display();
void sum();
void search();
void minmax();

int array[100], n; // global variable

int main() {

  int choice = 0; // local variable 
  int ans = 1;
  printf("Enter size of an array=");
  scanf("%d", & n);
  printf("Enter elements =\n");
  
  for (int i = 0; i < n; i++) {
    scanf("%d", & array[i]);
  }
  
  

  while (ans == 1) {
    printf("choose an option:\n");
    printf("1. display array\n2. sum of all\n3. search a no.\n4.finding min and max\n");
    scanf("%d", & choice);
    switch (choice) {
    case 1:
      display();
      break;
    case 2:
      sum();
      break;
    case 3:
      search();
      break;
    case 4:
      minmax();
      break;
    default:
      printf("Please enter valid option \n");
      break;
    }
    printf("do you want to continue?\n1.yes\n2.no\n");
    scanf("%d", & ans);
  }
  return 0;
}

void display() {
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void sum() {
  int sum = 0, i;
  for (int i = 0; i < n; i++) {
    sum += array[i];
  }
  printf("Sum of all numbers=%d\n", sum);
}

void search() {
  int search, flag = 0;
  printf(" enter number to be searched=");
  scanf("%d", & search);
  for (int i = 0; i < n; i++) {
    if (array[i] == search) {
      printf("%d is at %d position\n", search, i + 1);
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("%d is not present\n", search);
}

void minmax() {
  int min, max;
  min = array[0];
  max = array[0];
  for (int i = 0; i < n; i++) {
    if (array[i] > max) {
      max = array[i];
    }
    if (array[i] < min) {
      min = array[i];
    }
  }
  printf("Mininum no.=%d\nMaximum no.=%d\n", min, max);
}