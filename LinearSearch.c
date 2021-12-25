#include<stdio.h>
int main(){
	int i,size,a[100],element;
	printf("Enter size of array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
		printf("Array Formed:\n");
	for(i=0;i<size;i++){
	printf("%d\t",a[i]);
	}
	printf("\nEnter the Element You Want to search: ");
	scanf("%d",&element);
	for(i=0;i<size;i++){
		if(a[i]==element){
			printf("\nLocation is %d: ",i+1);
		}
		
	}

}
