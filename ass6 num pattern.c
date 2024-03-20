/*#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=5){
	    printf("1");
		j++;
	    }
	    i++;
	    printf("\n");
	}	
}*/

/*#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=5){
			if(i%2==0){
				printf("0");
				j++;
			}
			else{
				printf("1");
		        j++;
			}
	    }
	    i++;
	    printf("\n");
	}
}*/

/*#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=5){
			if(j%2==0){
				printf("1");
				j++;
			}
			else{
				printf("0");
		        j++;
			}
	    }
	    i++;
	    printf("\n");
	}
}*/

/*#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=5){
			if(i==1||i==5){
				printf("1");
				j++;
			}
			else{
				if(j==1 || j==5){
					printf("1");
					j++;
				}
				else{
					printf("0");
		            j++;
				}	
			}
	    }
	    i++;
	    printf("\n");
	}
}*/

/*5.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=5){
			if(i==3 && j==3){
				printf("0");
				j++;
			}
			else{
				printf("1");
				j++;
			}
	    }
	    i++;
	    printf("\n");
	}
}*/

/*6.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=5){
			if(i==1||i==5||i==3){
				if(j%2==0){
					printf("1");
				    j++;	
				}
				else{
					printf("0");
				    j++;
				}
			}
			else{
				if(j%2==0){
					printf("1");
					j++;
				}
				else{
					printf("0");
		            j++;
				}	
			}
		}
		i++;
		printf("\n");
	}
}*/

/*7.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=5){
			if(i==3){
				printf("0");
				j++;
			}
			else{
				if(j==3){
					printf("0");
					j++;
				}
				else{
					printf("1");
		            j++;
				}	
			}
		}
		i++;
		printf("\n");
	}
}*/

/*8.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=5){
			if((i==1||i==5)&&(j==1||j==5)){
				printf("1");
				j++;
			}
			else if((i==2||i==4)&&(j==2||j==4)){
			   	printf("1");
				j++;
			}
			else if(i==3&&j==3){
				printf("1");
				j++;
			}
			else{
				printf("0");
				j++;
			}
		}
		i++;
		printf("\n");
	}
}*/

/*9.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=5){
			if((i==1||i==5)&&(j==4||j==2||j==3)){
				printf("1");
				j++;
			}
			else if((i==2||i==4||i==3)&&(j==1||j==5)){
			   	printf("1");
				j++;
			}
			else{
				printf("0");
				j++;
			}
		}
		i++;
		printf("\n");
	}
}*/

/*10.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=5){
	    printf("%d",i);
		j++;
	    }
	    i++;
	    printf("\n");
	}	
}*/

/*11.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=5){
	    printf("%d",j);
		j++;
	    }
	    i++;
	    printf("\n");
	}	
}*/

/*12.#include<stdio.h>
void main(){
	int i=1,j,k=5;
	while(i<=5){
		j=i;
		while(j<=k){
	    printf("%d",j);
		j++;
		
	    }
	    k++;
	    i++;
	    printf("\n");
	}	
}*/

/*13.#include<stdio.h>
void main(){
	int i=1,j=1,k;
	while(i<=5){
		k=1;
		while(k<=5){
			if(i==1||i==2){
			    printf("%d  ",j);
		        j++;
		        k++;
			}
			else{
				printf("%d ",j);
		        j++;
		        k++;
			}
	    }
	    i++;
	    printf("\n");
	}	
}*/

/*14.#include<stdio.h>
void main(){
	int i=1,j,k;
	while(i<=5){
		j=i;                             //..
		k=5;
		while(j<=k){
			    printf("%d  ",j);
		        j++;   
		}
	    i++;
	    
	    printf("\n");
    }  
}*/	

//15.

//16.
/*#include<stdio.h>
void main(){
	int i=1,j,k;
	while(i<=5){
		j=i;              
		k=5;
		while(j<=k){
			    printf("%d  ",j);
		        j++;                     //
				  
		}
	    i++;
	    printf("\n");
    }  
}*/	

//17.
//18.
//19.

/*20.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=i){
			printf("%d",i);
			j++;
		}
		i++;
		printf("\n");
	}
}*/

/*21.#include<stdio.h>
void main(){
	int i=5,j;
	while(i>=1){
		j=1;
		while(j<=i){
			printf("%d",i);
			j++;
		}
		i--;
		
		printf("\n");
	}
}*/


//22.
/*#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=i;
		while(j<=5){
			printf("%d",i);
			j++;
		}
		i++;
		printf("\n");
	}
}*/

/*23.#include<stdio.h>
void main(){
	int i=5,j;
	while(i>=1){
		j=5;
		while(j>=i){
			printf("%d",i);
			j--;
		}
		i--;
		printf("\n");
	}
}*/

/*24.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=i){
			printf("%d",j);
			j++;
		}
		i++;
		printf("\n");
	}
}*/

/*25.#include<stdio.h>
void main(){
	int i=5,j;
	while(i>=1){
		j=1;
		while(j<=i){
			printf("%d",j);
			j++;
		}
		i--;
		printf("\n");
	}
}*/

/*26.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=i;
		while(j>=1){
			printf("%d",j);
			j--;
		}
		i++;
		printf("\n");
	}
}*/

/*27.#include<stdio.h>
void main(){
	int i=5,j;
	while(i>=1){
		j=i;
		while(j>=1){
			printf("%d",j);
			j--;
		}
		i--;
		printf("\n");
	}
}*/

/*28.#include<stdio.h>
void main(){
	int i=5,j;
	while(i>=1){
		j=5;
		while(j>=i){
			printf("%d",j);
			j--;
		}
		i--;
		printf("\n");
	}
}*/

/*29.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=5;
		while(j>=i){
			printf("%d",j);
			j--;
		}
		i++;
		printf("\n");
	}
}*/

/*30.#include<stdio.h>
void main(){
	int i=5,j;
	while(i>=1){
		j=i;
		while(j<=5){
			printf("%d",j);
			j++;
		}
		i--;
		printf("\n");
	}
}*/

/*31.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=i;
		while(j<=5){
			printf("%d",j);
			j++;
		}
		i++;
		printf("\n");
	}
}*/

/*32.#include<stdio.h>
void main(){
	int i=1,j,k=1;
	while(i<=5){
		j=i;                   
		while(j<=k){
			printf("%d",j);
			j++;
		}
		i++;
		k=k+2;
		printf("\n");
	}
}*/

/*33.#include<stdio.h>
void main(){
	int i=5,j,k=9;
	while(i>=1){
		j=i;                   
		while(j<=k){
			printf("%d",j);
			j++;
		}
		i--;
		k=k-2;
		printf("\n");
	}
}*/

/*34.#include<stdio.h>
void main(){
	int i=1,j,k=9;
	while(i<=9){
		j=i;                   
		while(j<=k){
			printf("%d",j);
			j=j+2;
		}
		i=i+2;
		printf("\n");
	}
}*/

                         //triangle 0,1 pattern

/*35.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=i){
			if(j%2==0){
				printf("0");
			    j++;	
			}
			else{
				printf("1");
				j++;
			}
		}
		i++;
		printf("\n");
		
		
	}
}*/

/*36.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=i){
			if(i%2==0){
				printf("0");
				j++;
			}
			else{
				printf("1");
				j++;
			}
		}
		i++;
		printf("\n");
		
		
	}
}*/

/*37.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=i){
			if(i==2||i==3){
				if(j%2==0){
					printf("1");
					j++;
				}
				else{
					printf("0");
					j++;
				}
			}
			else{
				if(j%2==0){
				    printf("0");
			        j++;	
			    }
			    else{
				    printf("1");
			    	j++;
			    }
			}	
		}
		i++;
		printf("\n");	
	}
}*/

/*38.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=5){
		j=1;
		while(j<=i){
			if((i==3&&j==2)||(i==4&&(j==2||j==3))){
				printf("0");
			}
			else{
				printf("1");
			}
			j++;
		}
		i++;
		printf("\n");
	}
}*/
               //triangle hard no. patterns
 
/*39.#include<stdio.h>
void main(){
	int i=1,j;
	while(i<=9){
		j=1;
		while(j<=i){
			printf("%d",j);
			j++;
		}
		i=i+2;
		printf("\n");
	}
}*/            

/*#include<stdio.h>
void main(){
	int i=1,j,k=1;
	while(i<=5){
		j=1;
		while(j<=k){
			if(i%2==0){
				if(j%2==0){
					printf("%d",j);
				}
			}                           //40.
			else{
				if(j%2!=0){
					printf("%d",j);
				}
			}
			j++;
	    } 
		i++;
		k=k+2;  	
		printf("\n");	
	}
}*/

//41.to 52

/*53.#include<stdio.h>
void main(){
	int i=1,r;
	int n=12345;
	while(n>=1){
		printf("%d",n);
		n=n/10;
		printf("\n");
	}
}*/

//53 to 57

