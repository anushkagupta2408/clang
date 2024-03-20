//1.to read and print elements of array
/*#include<stdio.h>
void main(){
	int x[5];
	int i;
	for(i=0;i<=5;i++){
		printf("enter the element of %d position",i);
		scanf("%d",x[i]);
	}
	printf("elements of array are");
	for(i=0;i<=5;i++){
		printf("%d,",x[i]);
	}	
}*/

//2.take input and sum it.
/*#include<stdio.h>
void main(){
	int x[5];
	int i,sum=0;
	for(i=0;i<=5;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=5;i++){
		printf("%d,",x[i]);
		sum=sum+x[i];
	}
	printf("\n%d",sum);
}   
*/
//3.find max and min.
/*#include<stdio.h>
void main(){
	int x[7];
	int i,sum=0;
	for(i=0;i<=7;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	int max=x[i];
	int min=x[i];
	for(i=0;i<=5;i++){
	    if(x[i]>max){
	    	max=x[i];
		}
		if(x[i]<min){
			min=x[i];
		}	
	}
	printf("maximum is %d and minimum is %d",max,min);
}*/
//4.find second largest element in an array
/*#include<stdio.h>
void main(){
	int x[6];
	int i,j,t;
	for(i=0;i<=5;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<5;i++){
		for(j=0;j<5-i;j++){
			if(x[j]>x[j+1]){
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	for(i=0;i<6;i++){
		printf("%d,",x[i]);
	}
	printf("\n");
	printf("%d is second largest",x[i-2]);
}
*/
//5.copy one array to another
/*#include<stdio.h>
void main(){
	int x[10];
	int y[10];
	int i;
	for(i=0;i<=9;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=9;i++){
		y[i]=x[i];
	}
	printf("elements if y array");
	for(i=0;i<=9;i++){
		printf("%d,",y[i]);
	}
}*/

//6.inserting an element in array
/*#include<stdio.h>
void main(){
	int x[10];
	int i,p,v;
	for(i=0;i<=8;i++){
		printf("enter the values of array X at %d index: ",i);
		scanf("%d",&x[i]);	
	}
	printf("enter position :");
	scanf("%d",&p);
	printf("enter value :");
	scanf("%d",&v);
	for(i=9;i>=p;i--){
		x[i]=x[i-1];
	}
	x[p]=v;
	printf("array after insertion");
	for(i=0;i<=9;i++){
	    printf("%d,",x[i]);
	}
}*/
//7.deletion an element
/*#include<stdio.h>
void main(){
	int x[10];
	int i,p;
	for(i=0;i<=9;i++){
		printf("enter the values of array X at %d index: ",i);
		scanf("%d",&x[i]);	
	}
	printf("enter position");
	scanf("%d",&p);
    for(i=p;i<=8;i++){
		x[i]=x[i+1];
	}
	printf("array after deletion");
	for(i=0;i<=8;i++){
	    printf("%d,",x[i]);
	}
}*/
//8.print all unique elements
/*#include<stdio.h>
void main(){
	int x[7];
	int i;
	for(i=0;i<=7;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	int k=0;
	for(i=0;i<=7;i++){
		int k=0;
	    for(j=i+1;j<=7;j++){          
		    if(x[i]==x[j]){
			    k++;
		    }			
	    }
	    if(k==0){
	    	printf("%d,",x[i]);
		}
	}
}
//9.print all negative elements
#include<stdio.h>
void main(){
	int x[7];
	int i;
	for(i=0;i<=7;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=7;i++){
		if(x[i]<0){
		  	print("%d,"x[i]);
		}
	}
}

//10.count total no. of odd and even elements
#include<stdio.h>
void main(){
	int x[10],i;
	for(i=0;i<=9;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	int j=0,k=0;
	for(i=0;i<=9;i++){
		if(x[i]%2==0){
			j++;
		}
		else{
			k++;
		}	
	}
	printf("total elements in y/even array is %d",j);
	printf("\n");
	printf("total elements in z/odd array is %d",k);
}
//11.print total no. of negative elements
#include<stdio.h>
void main(){
	int x[7];
	int i,c=0;
	for(i=0;i<=7;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=7;i++){
		if(x[i]<0){
		  	c++;
		}
	}
	print("total negative elements is %d,"c);
}*/
//12.print total no. of duplicate elements
/*#include<stdio.h>
void main(){
	int x[7];
	int i,c=0,j,t;
	for(i=0;i<=7;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=7;i++){
		for(j=0;j<7-i;j++){
			if(x[j]>x[j+1]){
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}                                                    //
		}
	}
	int d=0;
	for(i=0;i<=7;i++){
		int c=0;
		for(j=i;j<=7;j++){
			if(x[i]==x[j+1]){
		  	    c++;
		  	    d++;
		    }
		}
		if(c>1){
		   	i=i+(c-1);
		} 
		printf("occurance of %d - %d",x[i],c);
	}
	printf("occurance of all is %d",d);	 
}*/

//13.delete duplicate elements and print
/*#include<stdio.h>
void main(){
	
	int i,c=0,j,k,size;
	int x[size];
	printf("enter size of array");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){                                    //
			if(x[i]==x[j]){
		  	    for(k=j;k<size;k++){
		  	    	x[k]=x[k+1];
				}
				size--;   
		    }
		}
    }
    printf("array is after deleting duplicate elements ");
    for(i=0;i<=size;i++){
		printf("%d,",x[i]);
	}
}*/

//14.count frequency of each elements in an array
/*#include<stdio.h>
void main(){
	int x[8];
	int i,c=0;
	for(i=0;i<=7;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=7;i++){
		for(j=0;j<7-i;j++){
			if(x[j]<x[j+1]){
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	for(i=0;i<=7;i++){
		int c=0;
		for(j=i;j<=7;j++){
			if(x[i]==x[j]){
		  	    c++;
		    }
		}
		if(c>1){
		   	i=i+(c-1);
		} 
		printf("occurance of %d - %d",x[i],c);
	}	 
}
//15.merge two array into third array
#include<stdio.h>
void main(){
	int x[5],y[3],z[8];
	int i,j=0;
	for(i=0;i<=4;i++){
		printf("enter the values of array X at %d index: ",i);
		scanf("%d",&x[i]);
		z[j]=x[i];
		j++;
	}
	for(i=0;i<=2;i++){
		printf("enter the values of array Y at %d index: ",i);
		scanf("%d",&y[i]);
		z[j]=y[i];
		j++;
	}
	printf("elenemts in new Z array----");
	for(i=0;i<=7;i++){
	    printf("%d,",z[i]);
	}
}

//16.find reverse of an array
#include<stdio.h>
void main(){
	int x[10];
	int y[10];
	int i;
	for(i=0;i<=9;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	int j=9;
	for(i=9;i>=0;i--){
		y[i]=x[j-i];      //9-i
	}
	for(i=0;i<=9;i++){
	   printf("%d,",y[i]);
    }
}
//17.put even and odd element into two arrays
#include<stdio.h>
void main(){
	int x[10];
	int y[10];
	int z[10];
	int i;
	for(i=0;i<=9;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	int j=0,k=0;
	for(i=0;i<=9;i++){
		if(x[i]%2==0){
			y[j]=x[i];
			j++;
		}
		else{
			z[k]==x[i];
			k++;
		}	
	}
	printf("elements in y/even array ");
	for(i=0;i<=j;i++){
		printf("%d,",y[i]);
	}
	printf("elements in z/odd array");
	for(i=0;i<=k;i++){
		printf("%d,",y[k]);
	}
}
//18.to search an element in an array
#include<stdio.h>
void main(){
	int x[7];
	int i,c=0,key;
	for(i=0;i<=7;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	printf("enter key");
	scanf("%d",&key);
	for(i=0;i<=7;i++){
		if(x[i]==key){
		  	printf("key at index %d",i);
		}
	}
}*/
//19.sort array elements in ascending array
/*#include<stdio.h>
void main(){
	int x[7];
	int i,t,j;
	for(i=0;i<=7;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=7;i++){
		for(j=0;j<7-i;j++){
			if(x[j]>x[j+1]){
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	for(i=0;i<=7;i++){
		printf("%d,",x[i]);
	}
}*/

//20.sort array elements in descending array
/*#include<stdio.h>
void main(){
	int x[7];
	int i,t,j;
	for(i=0;i<=7;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=7;i++){
		for(j=0;j<7-i;j++){
			if(x[j]<x[j+1]){
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	for(i=0;i<=7;i++){
		printf("%d,",x[i]);
	}
}*/
//21.sort even and odd elements of array separately
/*#include<stdio.h>
void main(){
	int x[10];
	int y[10];
	int z[10];
	int i;
	for(i=0;i<=9;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	
	int j=0,k=0;
	for(i=0;i<=9;i++){
		if(x[i]%2==0){
			y[j]=x[i];
			j++;
		}
		else{
			z[k]=x[i];
			k++;
		}	
	}
	for(i=0;y[i];i++){
		for(j=0;j<i;j++){
			if(x[i]<x[j]){
				x[i]=t;
				x[i]=x[i+1];
				x[i+1]=x[i];
			}
		}
	}
	for(i=0;y[i];i++){
		printf("%d,",y[i]);
	}
	for(i=0;z[i];i++){
		for(j=0;j<i;j++){
			if(x[i]<x[j]){
				x[i]=t;
				x[i]=x[i+1];
				x[i+1]=x[i];
			}
		}
	}
	for(i=0;z[i];i++){
		printf("%d,",z[i]);
	}
}               //or

#include<stdio.h>
void main(){
	int x[10];
	int y[10];
	int z[10];
	int i;
	for(i=0;i<=9;i++){
		printf("enter the values of array at %d index: ",i);
		scanf("%d",&x[i]);
	}
	
	for(i=0;i<=9;i++){
		for(j=0;j<9-i;j++){
			if(x[j]>x[j+1]){
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	int j=0,k=0;
	for(i=0;i<=9;i++){
		if(x[i]%2==0){
			y[j++]=x[i];	
		}
		else{
			z[k++]=x[i];
		}	
	}
	printf("even array");
	for(i=0;y[i]<j;i++){
		printf("%d,",y[i]);
	}
	printf("odd array");
	for(i=0;z[i]<k;i++){
		printf("%d,",z[i]);
	}
}*/

//22.add two matrices

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
    for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			x[i][j]=(x[i][j]+y[i][j]);
		}
    }
    for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
    }
}*/

//23.subtract two matrices
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
    for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			x[i][j]=(x[i][j]-y[i][j]);
		}
    }
    for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
    }
}*/
//24.perform scalar matrix multiplication.

//25.multiply two matrices.
/*#include<stdio.h>
void main(){
	int x[3][3],y[3][3];
	int z[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int i,j,k,s=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter [%d][%d] = ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter [%d][%d] = ",i,j);
			scanf("%d",&y[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			s=0;
			for(k=0;k<3;k++){
				s+=(x[i][k]*y[k][j]);
			}
			z[i][j]=s;
		}
		
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",z[i][j]);
		}
		printf("\n");
	}
}*/

//26.check whether two matrices are equal or not.
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
    for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(x[i][j]!=y[i][j]){
				printf("matrices are not same");
				break;
			}
		}
    }
    printf("matrices are equal....");
}*/
//27.find sum of main diagonal elements of a matrix.
/*#include<stdio.h>
void main(){
	int x[3][3]={{10,20,30},{20,80,10},{10,40,20}};
	int i,j,s=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){               //s+=x[i][i]
			if(i==j){                   // 
				s+=x[i][j];             //
			}
		}
	}
	printf("%d ",s);
}*/
//28.find sum of minor diagonal elements of a matrix.
/*#include<stdio.h>
void main(){
	int x[3][3];
	int i,j,k,s=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter [%d][%d] = ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	int j=2;
	for(i=0;i<3;i++){
		s+=x[i][j];
		j--;
	}	
	printf("\n%d",s);
}*/
//29.sum of each row and column of a matrix.
/*#include<stdio.h>
void main(){
	int x[3][3];
	int i,j,k,s=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter [%d][%d] = ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		sr=0;
		for(j=0;j<=2;j++){
			sr+=x[i][j];
			sc+=x[j][i];
		}
		printf(" sum of %d row is %d\n",i,sr);
		printf(" sum of %d column is %d\n  ",i,sc);
	}	
}*/
			
//30.interchange diagonal of a matrix.
/*#include<stdio.h>
void main(){
	int x[3][3]={{10,20,30},{20,80,10},{10,40,20}};
	int i,j,s=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){              
			if(i==0&&j==0){                   
				t=x[i][j];
				x[i][j]=x[i+2][j+2]; 
				x[i+2][j+2]=x[i][j];            
			}
			if(i==0&&j==2){
				t=x[i][j];
				x[i][j]=x[j][i]; 
				x[j][i]=x[i][j];  
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
}*/
//31.find upper triangular matrix.
/*#include<stdio.h>
void main(){
	int x[3][3]={{10,20,30},{20,80,10},{10,40,20}};
	int i,j,s=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		    if(i==j||i==1&&j==2||i==1&&j==2||i==0&&j==1||i==0&&j==2){
			    printf("%d ",x[i][j]);
		    }   
     	}
		printf("\n");
     	printf("   ");
    }
}*/
//32.finf lower triangular matrix.
/*#include<stdio.h>
void main(){
	int x[3][3]={{10,20,30},{20,80,10},{10,40,20}};
	int i,j,s=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		    if(i==j||i==1&&j==0||i==2&&j==1||i==2&&j==0||i==2&&j==1){
			    printf("%d ",x[i][j]);
		    }   
     	}
		printf("\n");
     	printf("   ");
    }
}*/
//33.find sum of upper triangular matrix.
/*#include<stdio.h>
void main(){
	int x[3][3]={{10,20,30},{20,80,10},{10,40,20}};
	int i,j,s=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		    if(i==j||i==1&&j==2||i==1&&j==2||i==0&&j==1||i==0&&j==2){
			    s+=x[i][j];
		    }   
     	}	
    }
    printf("%d",s);
}*/
//34.find transpose of a matrix.
/*#include<stdio.h>
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
		
}*/
	 
//35.check identity matrix.
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
			if(x[i][j]!=1){
				printf("not a identity matrix ");
				break;
			}
		}
	}
} */
//36.check sparse matrix.

#include<stdio.h>
void main(){
	int x[3][3];
	int i,j,s=0,c=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter [%d][%d] = ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<=3;j++){
			if(x[i][j]==0){
				s++;
			}
			else{
				c++;
			}
		}
    }
    if(s>c){
    	printf("it is a sparse matrix");
	}
	else{
		printf("it is a not sparse matrix");
	}
}

//37.check symmetric matrix.
/*#include<stdio.h>
void main(){
	int x[3][3]={{10,20,30},{20,80,10},{10,40,20}};
	int y[3][3];
	int i,j,count=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		    y[j][i]=x[i][j]
     	}	
    }
    for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		    if(y[i][j]!=x[i][j]){
		    	count++;
			}     
		}	
    }
    if(count==1){
    	prinf("matrix is symmetric");
	}
	else{
		prinf("matrix is symmetric");
	}

}*/




	
	
	
	
