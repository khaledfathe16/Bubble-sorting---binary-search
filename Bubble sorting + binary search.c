#include <Stdio.h>

 void main(void){
int x,temp,size1,size2;
//scan the size of array
printf("How many numbers in your array you want = ");
scanf("%d",&size1);
int arr[size1];
 size2=(size1/2);

for(int i=0;i<size1;i++){
    printf("Please enter numbers %d =  ",i+1);
scanf("%d",&arr[i]);

}
//bubble sorting process
for(int i=0;i<size1-1;i++){
    for(int j=0;j<size1-i-1;j++){
       if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }}

}

printf("Please enter your Number to want it ");
scanf("%d",&x);
//Half binary searching
if(x==arr[size2]){
    printf("Number is exist");
}

else if(x>arr[size2]){
for(int i=size2;i<size1;i++){
    if(x==arr[i]){

        printf("Number is exist");
    }

}
}
else if(x<arr[size2]){
for(int i=size2;i>=0;i--){
    if(x==arr[i]){

        printf("Number is exist");
    }
}

}


 }

