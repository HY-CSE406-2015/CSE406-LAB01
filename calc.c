#include <stdio.h>
#include <stdlib.h>
// This is master branch!!!
// Modified Text in master
int main(int argc, char*[] argv){
  int input_type;
  int val_1, val_2;

  // Get type
  scanf("%d", &input_type);
  // Get value 1
  scanf("%d", &val_1);
  // Get value 2
  scanf("%d", &val_2);
  if(input_type == 1) plus(val_1, val_2);
  if(input_type == 2) minus(val_1, val_2);
  if(input_type == 3) square(val_1);
}

int plus(int var_1, int var_2){
  int value = var_1 + var_2;

  return value;
}

int minus(int var_1, int var_2){
  return var_1 - var_2;
}

int square(int var_1){
  var_1 *= var_1;

<<<<<<< HEAD
  return value;
}

<<<<<<< HEAD
int division(int var_1, int var_2){
  int value;
  value = var_1/ var_2;

=======
void hola(){
  printf("Bonjour!");
>>>>>>> origin/heeju_branch
}
=======
  return var_1;
}
>>>>>>> jsw_branch
