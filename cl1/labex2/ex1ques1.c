#include<stdio.h>
#include<time.h>
int main() {

int u = 50;
int l = 10;
srand(time(NULL));
int random_number = (rand()%(l-u+1))+l;
printf("Random number =%d ",random_number);


}
