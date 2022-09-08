#include <stdio.h>
int main(void){
char c;
int i;
long l;
long long ll;
float f;
printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of an int: %ld byte(s)\n", sizeof(i));
printf("Size of an long int: %ld byte(s)\n", sizeof(l));
printf("Size of an long long int: %ld byte(s)\n", sizeof(ll));
printf("Size of an float: %ld byte(s)\n", sizeof(f));
return 0;
}
