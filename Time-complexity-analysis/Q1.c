/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("%d ",rand());
  printf("%d ",rand());
}
*/

/*take an array from user and reverse it.*/
/*
#include<stdio.h>

int num,temp=0;
int main()
{
    printf("enter an number");
  scanf("%d",&num);
  int arr[num];
  printf("enter an array");

  for(int i=0;i<num;i++){
    scanf("%d",&arr[i]);
  }

  for(int i=0,j=num-1;j>i;i++,j--){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }
  
  for(int i=0;i<num;i++){
    printf("%d ",arr[i]);
  }
}
*/
/*
#include<stdlib.h>
#include<stdio.h>

void display(int arr[], int size)
{
  for(int i=0; i<size; i++)
  {
    printf("%d\n", arr[i]);
  }

}
void reverse(int arr[],int num){
  int temp;
  for(int i=0,j=num-1;i<j;i++,j--){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }
}
int main(){
  int num;
  printf("enter an num");
  scanf("%d",&num);
  int arr[num];
  printf("enter an array");
  for(int i=0 ; i<num; i++){
    scanf("%d", &arr[i]);
  }
display(arr, num);
  //reverse(arr);
  //display(arr);
    reverse(arr,num);
      for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
      }
}
*/
/*
#include<stdio.h>
#include<stdio.h>
int y, b;

void addmatrix(int arr[][y],int brr[][b],int crr[][3],int x,int a,int p,int q){
  if(x==a && y==b){
    for(int i=0;i<x;i++){
      for(int j=0;j<y;j++){
        crr[i][j]= arr[i][j]+ brr[i][j];
      }
    }
  }
  else{
  printf("matrix addition not possible");
  }
}
int main(){
  int x,a,p,q;
  
  x=y=a=b=p=q=3;

  printf("enter the value of x,y,a and b");
  scanf("%d %d %d %d %d %d",&x,&y,&a,&b,&p,&q);
  int arr[x][y];
  int brr[a][b];
  int crr[p][q];
  printf("enter an first matrix");
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
      scanf("%d",&arr[i][j]);
   }
  }

  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
   printf("enter an 2nd matrix");
  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      scanf("%d",&brr[i][j]);
   }
  }
  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      printf("%d ",brr[i][j]);
    }
    printf("\n");
  }
  addmatrix(arr,brr,crr,x,y,a,b,p,q);
   for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
      printf("%d ",crr[i][j]);
    }
    printf("\n");
  }
  
} 
*/

/*


#include<stdio.h>
void multi(int num,int temp){
  int multiples;
  if(temp==11){
    return;
  }
  multiples=num*temp;
  printf("%d ",multiples);
  multi(num,temp+1);
}
int main(){
  int num;
  printf("enter an num");
  scanf("%d",&num);
  multi(num,1);
}
*/
/*
#include<stdio.h>
void fib(int num,int temp1,int temp2){
  int temp;
  if(num==0){
    return;
  }
  printf("%d ",temp1);
  temp=temp2;
  temp2=temp1+temp2;
  temp1=temp;
  num--;
  fib(num,temp1,temp2);
}
int num;
int main(){
  printf("enter an num");
  scanf("%d",&num);
  fib(num,1,1);
}
*/
/*
#include<stdio.h>
void fib(int num,int temp1,int temp2){
  int temp;
  for(int i=0;i<num;i++){
    printf("%d ",temp1);
    temp=temp2;
    temp2=temp1+temp2;
    temp1=temp;
  }
}
int main(){
  int num;
  printf("enter an num");
  scanf("%d",&num);
  fib(num,1,1);
}
*/



#include<stdio.h>
int fib(int num){
  int currfib;

  if(num==1||num==2){
    return 1;
  }

   currfib = fib(num-1)+fib(num-2);
   return currfib;
}

int main(){
  int num,ans;
  printf("enter and num");
  scanf("%d",&num);
  ans=fib(num);
  printf("%d",ans);
}













