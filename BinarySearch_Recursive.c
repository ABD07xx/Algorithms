#include<stdio.h>
int bs(int a[],int size,int x,int start,int end){
	while(start<=end){
		int mid=(start+end)/2;
		if(a[mid]==x){
			
			return mid;
		}
		else if(a[mid]<x){
		return	bs(a,size,x,mid+1,end);
		}
		else if(a[mid]>x){
		return	bs(a,size,x,start,mid-1);
	}
}
return -1;	
}


int main(){
	
	int i,j,temp,size,a[100];
	int start,mid,end;
	
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	/*Array Formation*/
	for(i=0;i<size;i++){
		printf("Enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
		printf("Array Formed:\n");
	for(i=0;i<size;i++){
	printf("%d\t",a[i]);
	}
	
	/*Ascending Order*/
		 for (i = 0; i < size; i++){
        for (j = i + 1; j < size; j++){
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
	printf("\nArray in Ascending Order: \n");
	for(i=0;i<size;i++){
	printf("%d\t",a[i]);
	}

	/*Binary Search*/
	
	int x,result;
	printf("\nEnter the Element you want to search: ");
	scanf("%d",&x);
	
	result = bs(a,size,x,0,size-1);
	if(result == -1){
		printf("Not Found");
	}
	else{
		printf("Element is found at position %d ",result+1);
	}
}
