#include<stdio.h>                           
int main(){                                 
int n,k=0,o,c;                                                                  
scanf("%d",&n);
int arr[n];                             
	do{                                 
	do{scanf("%d",&arr[k]);			
	}while(arr[k]%2==0);
	k++;
	}while(k<n);
	for(k=0,c=n-1;k<n/2;k++,c--){
	o=arr[k]-arr[c];
	printf("%d\n",o);
	}
	if(n%2!=0){
	printf("%d\n",arr[n/2]);
	}
	return 0;
	}			
