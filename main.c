#include <stdio.h>

struct score{
	float not1;
	float percentage;
	float res;
};


int main(){
	
	int i,n;
	float sum=0;
	float total=0;
	printf("Enter the number of grades: ");
	scanf("%d",&n);
	if(n<0){
	    printf("CHECK THE VALUE!!");
	    return 0;
	}
	struct score s[n];
	for(i=0;i<n;i++){
		printf("\nEnter the %d.point: ",i+1);
		scanf("%f",&s[i].not1);
		if(s[i].not1>100 || s[i].not1<0){
			printf("ERROR!! PLEASE ENTER A VALID NOTE");
			return 0;
		}
		
		printf("Enter the %d.point's percentage: ",i+1);
		scanf("%f",&s[i].percentage);
		if(s[i].percentage>100 || s[i].percentage<0){
			printf("ERROR!! PLEASE ENTER A VALID PERCENTAGE");
			return 0;
		}
		
	total += s[i].percentage;
		
	s[i].res=s[i].not1*s[i].percentage/100;	
		sum += s[i].res;
	}
	
		
	if(total!=100){
		    printf("\nCHECK THE PERCENTAGES!!\n");
		    return 0;
	}
	
	printf("\nyour average is: %.2f", sum);
}




