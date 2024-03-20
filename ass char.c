/*#include<stdio.h>
void main(){
	int x[2][2],y[2][2];
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter element of x[%d][%d] position",i,j);
			scanf("%d",&x[i][j]);
		}
	} 
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter element of x[%d][%d] position",i,j);
			scanf("%d",&x[i][j]);
		}
    }
    
    int flag=0;
    for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(x[i][j]!=y[i][j]){
				printf("matrices are not same");
				flag = 1;                                        //
				break;
			}
		}
		if (flag==1){
			break;
		}
    }
    printf("matrices are equal....");
}*/

#include<stdio.h>
void main(){
	int x[3][2],y[2][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("enter element of x[%d][%d] position",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
		    printf("%d ",x[i][j]);
		} 
		printf("\n");    
	}
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
		    y[j][i]=x[i][j];
     	}	
    }
    printf("\n\n");
    for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		    printf("%d ",y[i][j]);
		} 
		printf("\n");    
	}
		
}
