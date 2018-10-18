#include <stdio.h>

void print_integers(int int_value,int *int_pointer)
{
  printf("Pointer-Number: %d\n",*int_pointer);
  printf("Value-Number: %d \n",int_value);
}

void change_integers(int int_value, int *int_pointer)
{
  int_value = 10;
  *int_pointer = int_value;
}

int main(int argc, char const *argv[]) {

int int_value = 7;
int *int_pointer;
int_pointer = &int_value;

print_integers(int_value, int_pointer);
change_integers(int_value, int_pointer);
print_integers(int_value, int_pointer);

  return 0;
}
