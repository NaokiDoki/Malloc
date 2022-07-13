#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,*ptr;
	
	printf("Enter the number of subjects:\n");
	scanf("%d",&n);
	
	ptr = (int *)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		printf("Enter marks for %d subjects: ",(i+1));
		scanf("%d",ptr+i);
	}
	int sum =0;
	for(i=0;i<n;i++){
		sum = sum + *(ptr+i);
	}
	
	printf("Total marks obtained is %d\n", sum);
	printf("Percentage obtained is %f\n",(float)sum/(float)n);
	
	free(ptr);
	return 0;
}
