#include<stdio.h>


/*int factorial(int n) {

if(factorial==0 || factorial==1) {
    return 1;
}
else
    return n * factorial(n-1);

}
*/

int stringcount(char str[]) {
int length =0;
while(str[length]!='\0'){
    length++;
}
return length-1;
}



int main() {

/*
int n;
int m;
printf("Enter n & m");
scanf("%d %d",&n,&m);

int random_number = (rand()%(m-n+1))+n;
printf("%d",random_number);
*/
/*
int n;
int num = 5;
printf("%d",factorial(num));
return 0;
*/

char str[100];
fgets(str, sizeof(str), stdin);

int result = stringcount(str);
printf("%d",result);


}






