#include<stdio.h>
#include<math.h>
int main ()

{
				float x1,y1,x2,y2,x3,y3;
				//	coordinates A
				printf("enter coordinates A ");
				scanf("%f%f",&x1,&y1);
				//	coordinates B
				printf("enter coordinates B ");
				scanf("%f%f",&x2,&y2);
				//	coordinates C
				printf("enter coordinates C ");
				scanf("%f%f",&x3,&y3);
				
//	Three points with coordinates (x, y) is non-negative numbers present by an array of six elements (0 <= x, y <= 2020).
	while((x1>=0)&&(x2>=0)&&(x3>=0)&&(y1<=2020)&&(y2<=2020)&&(y3<=2020))
	{		
				//	configuration	
				int  A	= sqrt(pow((x2-x1),2) + pow((y2-y1),2));	//Distance(A,B)
				int  B  = sqrt(pow((x3-x2),2) + pow((y3-y2),2));	//Distance(B,C)
				int  C  = sqrt(pow((x1-x3),2) + pow((y1-y3),2));	//Distance(C,A)
				
				printf(" Distance(A,B) = A in  (%.2f;%.2f)=%.2f ",x1,y1,(float)A );
				printf("\n Distance(B,C) = B in  (%.2f;%.2f)=%.2f ",x2,y2,(float)B );
				printf("\n Distance(C,A) = C in  (%.2f;%.2f)=%.2f ",x3,y3,(float)C );
				
				
				
				// Conditions to form a triangle 
				if(A < (B + C ) && B < (A +C) && C < (B+C))
					{
						if( ( A == B) && ( B == C ) )
						{
							printf("\ttam giac deu");//equilateral triangle
						}
						
						else if ((A == B) || (B == C)||(C == A))
						{	
							
							printf("\n\t tam giac can");//Isosceles triangle
						}
						else if    ( 	pow(C,2) == pow(A,2) + pow(B,2)  || 
								    	pow(A,2) == pow(B,2) + pow(C,2)  ||
								     	pow(B,2) == pow(A,2) + pow(C,2)   )
						{
							printf("\n\ttam giac vuong ");//Right triangle
						}
						
						
						else if (		pow(C,2) == pow(A,2)  +  pow(B,2)  || 
								    	pow(A,2) == pow(B,2)  +  pow(C,2)  ||
								     	pow(B,2) == pow(A,2)  +  pow(C,2)	
								&&
								
										(A == B) || (B == C) || (C == A)	)
						{
							printf("\n\ttam giac vuong can");//Triangle right angle
						}
						else if (		pow(C,2) > pow(A,2) + pow(B,2)  || 
								    	pow(A,2) > pow(B,2) + pow(C,2)  ||
								     	pow(B,2) > pow(A,2) + pow(C,2)  )
						{
							printf("\n\ttam giac tu"); //Obtuse triangle
						}
										//enter coordinates A 5 5
										//enter coordinates B 6 6
										//enter coordinates C 8 8
						else
						{
							printf("\n\ttam giac nhon");//Pointed triangle
						}
						
					}	
	}	 	
 } 
