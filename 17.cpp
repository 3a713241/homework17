#include <stdio.h> 
#include <stdlib.h> 
int main(void) 
{
	int str[5];
	int x,z,y,k,c;
	printf("��J5�Ӽ� \n");
	for(x=1;x<6;x++){
		printf("��J��%d�Ӽ�: ",x);
		scanf("%d",&str[x]);
	}
	for(z=1;z<6;z++){
		for(y=z+1;y<6;y++){
			if(str[z]>str[y]){
				c=str[z];
				str[z]=str[y];
				str[y]=c;
			}
		}
		
	}
	for(k=1;k<6;k++){
	printf("%d ",str[k]);
   }
   printf("\n");
   printf("�̤p��%d",str[1]);
   
 } 
