#include<stdio.h>
int main(){
	int i,temp,size,a[100],j;
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
	
}
