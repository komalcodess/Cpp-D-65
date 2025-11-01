#include <stdio.h>
int sum(int);
int sum(int n){
int total=0;
if(n>0){
for(int i=n; i>0; i/=10){
    int digit=i%10;
    total+=digit;}
    }    return total;

}
int main(){
int n;
printf("Enter the number to find the sum of it's digit: ");
scanf("%d",&n);
int res=sum(n);
printf("The sum of the digits is :%d",res);

if(res%2==0){printf("\nThe sum is even");}
else {printf("\nThe sum is odd");}
return 0;
}
