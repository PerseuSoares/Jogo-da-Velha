#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main ()
{
	int i,j,rep=0,x=1,o=0,f=0;
	char m[3][3];
	m[1][0]=' ';
	m[1][1]=' ';
	m[1][2]=' ';
	m[0][0]=' ';
	m[0][1]=' ';
	m[0][2]=' ';
	m[2][0]=' ';
	m[2][1]=' ';
	m[2][2]=' ';
	system ("color 1B"); 
	printf("\t\t\t");
	printf("   JOGO DA VELHA\n\n\n\t\t\t");
	
	printf("    0     1     2  \n\t\t\t");
	printf("       |     |     \n\t\t\t");
	printf("0      |     |     \n\t\t\t");
	printf("  _____|_____|_____\n\t\t\t");
	printf("       |     |     \n\t\t\t");
	printf("1      |     |     \n\t\t\t");
    printf("  _____|_____|_____\n\t\t\t");
    printf("       |     |     \n\t\t\t");
    printf("2      |     |     \n\t\t\t");
    printf("       |     |     \n\t\t\t");
    
    
    
    while(rep<9)
    {
	
       	rep++;
		   
		   for(rep=0;rep<9;rep++)
		      {
			        if(rep%2==0){
			   	     printf("Vez: X\n\t\t\t\t");
				     printf("Linha:");
                     scanf("%i",&i);
                     printf("\n\t\t\t\t");
                     printf("Coluna:");
                     scanf("%i",&j);
		      	        
						  system("cls");
		      	        printf("\t\t\t");
		      	        
		      	        
				         if (i==0 && j==0)
		                   {
                         	m[i][j]='X';
                         	printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                        printf("    0     1     2  \n\t\t\t");
						    printf("       |     |     \n\t\t\t");
	                        printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                        printf("  _____|_____|_____\n\t\t\t");
	                        printf("       |     |     \n\t\t\t");
	                        printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                            printf("  _____|_____|_____\n\t\t\t");
                            printf("       |     |     \n\t\t\t");
                            printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                            printf("       |     |     \n\t\t\t");
			              
						   } 
			       	
		                 if (i==0 && j==1)
		                   {
                         	m[i][j]='X';
                         	printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                        printf("    0     1     2  \n\t\t\t");
						    printf("       |     |     \n\t\t\t");
	                        printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                        printf("  _____|_____|_____\n\t\t\t");
	                        printf("       |     |     \n\t\t\t");
	                        printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                            printf("  _____|_____|_____\n\t\t\t");
                            printf("       |     |     \n\t\t\t");
                            printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                            printf("       |     |     \n\t\t\t");
			               } 
		          
		                 if (i==0 && j==2)
		                   {
                         	m[i][j]='X';
                         	printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                        printf("    0     1     2  \n\t\t\t");
						    printf("       |     |     \n\t\t\t");
	                        printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                        printf("  _____|_____|_____\n\t\t\t");
	                        printf("       |     |     \n\t\t\t");
	                        printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                            printf("  _____|_____|_____\n\t\t\t");
                            printf("       |     |     \n\t\t\t");
                            printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                            printf("       |     |     \n\t\t\t");
			               } 
		          
		                 if (i==1 && j==0)
		                   {
                         	m[i][j]='X';
                         	printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                        printf("    0     1     2  \n\t\t\t");
						    printf("       |     |     \n\t\t\t");
	                        printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                        printf("  _____|_____|_____\n\t\t\t");
	                        printf("       |     |     \n\t\t\t");
	                        printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                            printf("  _____|_____|_____\n\t\t\t");
                            printf("       |     |     \n\t\t\t");
                            printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                            printf("       |     |     \n\t\t\t");
			               } 
		          
		                if (i==1 && j==1)
		                   {
                         	m[i][j]='X';
                         	printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                        printf("    0     1     2  \n\t\t\t");
						    printf("       |     |     \n\t\t\t");
	                        printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                        printf("  _____|_____|_____\n\t\t\t");
	                        printf("       |     |     \n\t\t\t");
	                        printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                            printf("  _____|_____|_____\n\t\t\t");
                            printf("       |     |     \n\t\t\t");
                            printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                            printf("       |     |     \n\t\t\t");
			               } 
		          
		                if (i==1 && j==2)
		                   {
                         	m[i][j]='X';
                         	printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                        printf("    0     1     2  \n\t\t\t");
						    printf("       |     |     \n\t\t\t");
	                        printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                        printf("  _____|_____|_____\n\t\t\t");
	                        printf("       |     |     \n\t\t\t");
	                        printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                            printf("  _____|_____|_____\n\t\t\t");
                            printf("       |     |     \n\t\t\t");
                            printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                            printf("       |     |     \n\t\t\t");
			               } 
			               
			            if (i==2 && j==0)
		                   {
                         	m[i][j]='X';
                         	printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                        printf("    0     1     2  \n\t\t\t");
						    printf("       |     |     \n\t\t\t");
	                        printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                        printf("  _____|_____|_____\n\t\t\t");
	                        printf("       |     |     \n\t\t\t");
	                        printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                            printf("  _____|_____|_____\n\t\t\t");
                            printf("       |     |     \n\t\t\t");
                            printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                            printf("       |     |     \n\t\t\t");
			               }    
			               
		                if (i==2 && j==1)
		                   {
                         	m[i][j]='X';
                         	printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                        printf("    0     1     2  \n\t\t\t");
						    printf("       |     |     \n\t\t\t");
	                        printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                        printf("  _____|_____|_____\n\t\t\t");
	                        printf("       |     |     \n\t\t\t");
	                        printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                            printf("  _____|_____|_____\n\t\t\t");
                            printf("       |     |     \n\t\t\t");
                            printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                            printf("       |     |     \n\t\t\t");
			               } 
		          
		                if (i==2 && j==2)
		                   {
                         	m[i][j]='X';
                         	printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                        printf("    0     1     2  \n\t\t\t");
						    printf("       |     |     \n\t\t\t");
	                        printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                        printf("  _____|_____|_____\n\t\t\t");
	                        printf("       |     |     \n\t\t\t");
	                        printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                            printf("  _____|_____|_____\n\t\t\t");
                            printf("       |     |     \n\t\t\t");
                            printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                            printf("       |     |     \n\t\t\t");
			               } 
			               
			               if (m[0][0]=='X'&&m[0][1]=='X'&&m[0][2]=='X'||m[1][0]=='X'&&m[1][1]=='X'&&m[1][2]=='X'||m[2][0]=='X'&&m[2][1]=='X'&&m[2][2]=='X')
			              {
			              	f=1;
						  printf("\n\t\t\t");
						   printf("FIM DE JOGO!!\n\t\t\t");
						   printf("Vencedor: X\n\t\t\t");
						  rep=9;
						  break;
			              }
						   
						   if (m[0][0]=='X'&&m[1][0]=='X'&& m[2][0]=='X'||m[0][1]=='X'&&m[1][1]=='X'&&m[2][1]=='X'||m[0][2]=='X'&&m[1][2]=='X'&&m[2][2]=='X')
			               {
			               	f=2;
			               	printf("\n\t\t\t");
						   	printf("FIM DE JOGO!!\n\t\t\t");
						   	printf("Vencedor: X\n\t\t\t");
						   rep=9;
						   break;
			               }
						   if (m[0][0]=='X' && m[1][1]=='X' && m[2][2]=='X' || m[0][2]=='X' && m[1][1]=='X' && m[2][0]=='X')
						   {
						   	f=3;
						   	printf("\n\t\t\t");
						   	printf("FIM DE JOGO!!\n\t\t\t");
						   	printf("Vencedor: X\n\t\t\t");
						   rep=9;
						   break;
						   }
						     
			        }
		                         	if(rep%2!=0){
			   	                      printf("Vez:O\n\t\t\t\t");
				                      printf("Linha:");
                                      scanf("%i",&i);
                                      printf("\n\t\t\t\t");
                                      printf("Coluna:");
                                      scanf("%i",&j);
		      	
		                              system("cls");
									  printf("\t\t\t"); 	
		      
		                               if (i==0 && j==0)
		                               {
                         	            m[i][j]='O';
                         	            printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                                    printf("    0     1     2  \n\t\t\t");
						                printf("       |     |     \n\t\t\t");
	                                    printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                                    printf("  _____|_____|_____\n\t\t\t");
	                                    printf("       |     |     \n\t\t\t");
	                                    printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                                        printf("  _____|_____|_____\n\t\t\t");
                                        printf("       |     |     \n\t\t\t");
                                        printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                                        printf("       |     |     \n\t\t\t");
			                           } 
			       	
		                               if (i==0 && j==1)
		                              {
                         	          m[i][j]='O';
                         	          printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                                  printf("    0     1     2  \n\t\t\t");
						              printf("       |     |     \n\t\t\t");
	                                  printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                                  printf("  _____|_____|_____\n\t\t\t");
	                                  printf("       |     |     \n\t\t\t");
	                                  printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                                      printf("  _____|_____|_____\n\t\t\t");
                                      printf("       |     |     \n\t\t\t");
                                      printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                                      printf("       |     |     \n\t\t\t");
			                          } 
		          
		                              if (i==0 && j==2)
		                              {
                                       m[i][j]='O';
                                       printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                                   printf("    0     1     2  \n\t\t\t");
						               printf("       |     |     \n\t\t\t");
	                                   printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                                   printf("  _____|_____|_____\n\t\t\t");
	                                   printf("       |     |     \n\t\t\t");
	                                   printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                                       printf("  _____|_____|_____\n\t\t\t");
                                       printf("       |     |     \n\t\t\t");
                                       printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                                       printf("       |     |     \n\t\t\t");
			                          } 
		          
		                              if (i==1 && j==0)
		                              {
                         	          m[i][j]='O';
                         	          printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                                  printf("    0     1     2  \n\t\t\t");
						              printf("       |     |     \n\t\t\t");
	                                  printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                                  printf("  _____|_____|_____\n\t\t\t");
	                                  printf("       |     |     \n\t\t\t");
	                                  printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                                      printf("  _____|_____|_____\n\t\t\t");
                                      printf("       |     |     \n\t\t\t");
                                      printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                                      printf("       |     |     \n\t\t\t");
			                          } 
		          
		                              if (i==1 && j==1)
		                              {
                         	           m[i][j]='O';
                         	           printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                                   printf("    0     1     2  \n\t\t\t");
						               printf("       |     |     \n\t\t\t");
	                                   printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                                   printf("  _____|_____|_____\n\t\t\t");
	                                   printf("       |     |     \n\t\t\t");
	                                   printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                                       printf("  _____|_____|_____\n\t\t\t");
                                       printf("       |     |     \n\t\t\t");
                                       printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                                       printf("       |     |     \n\t\t\t");
			                          } 
		          
		                              if (i==1 && j==2)
		                             {
                         	          m[i][j]='O';
                         	          printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                                  printf("    0     1     2  \n\t\t\t");
						              printf("       |     |     \n\t\t\t");
	                                  printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                                  printf("  _____|_____|_____\n\t\t\t");
	                                  printf("       |     |     \n\t\t\t");
	                                  printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                                      printf("  _____|_____|_____\n\t\t\t");
                                      printf("       |     |     \n\t\t\t");
                                      printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                                      printf("       |     |     \n\t\t\t");
			                          } 
			               
			                          if (i==2 && j==0)
		                              {
                         	          m[i][j]='O';
                         	          printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                                  printf("    0     1     2  \n\t\t\t");
						              printf("       |     |     \n\t\t\t");
	                                  printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                                  printf("  _____|_____|_____\n\t\t\t");
	                                  printf("       |     |     \n\t\t\t");
	                                  printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                                      printf("  _____|_____|_____\n\t\t\t");
                                      printf("       |     |     \n\t\t\t");
                                      printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                                      printf("       |     |     \n\t\t\t");
			                          }    
			               
		                               if (i==2 && j==1)
		                              {
                         	           m[i][j]='O';
                         	           printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                                   printf("    0     1     2  \n\t\t\t");
						               printf("       |     |     \n\t\t\t");
	                                   printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                                   printf("  _____|_____|_____\n\t\t\t");
	                                   printf("       |     |     \n\t\t\t");
	                                   printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                                       printf("  _____|_____|_____\n\t\t\t");
                                       printf("       |     |     \n\t\t\t");
                                       printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                                       printf("       |     |     \n\t\t\t");
			                          } 
		          
		                              if (i==2 && j==2)
		                              {
                         	           m[i][j]='O';
                         	           printf("   JOGO DA VELHA\n\n\n\t\t\t");
	                                   printf("    0     1     2  \n\t\t\t");
						               printf("       |     |     \n\t\t\t");
	                                   printf("0  %3c | %3c | %3c \n\t\t\t",m[0][0],m[0][1],m[0][2]);
	                                   printf("  _____|_____|_____\n\t\t\t");
	                                   printf("       |     |     \n\t\t\t");
	                                   printf("1  %3c | %3c | %3c \n\t\t\t",m[1][0],m[1][1],m[1][2]);
                                       printf("  _____|_____|_____\n\t\t\t");
                                       printf("       |     |     \n\t\t\t");
                                       printf("2  %3c | %3c | %3c \n\t\t\t",m[2][0],m[2][1],m[2][2]);
                                       printf("       |     |     \n\t\t\t");
			                          } 
		      	                      
			                          if (m[0][0]=='o'&& m[0][1]=='O'&& m[0][2]=='O'||m[1][0]=='O'&& m[1][1]=='O'&& m[1][2]=='O'||m[2][0]=='O'&& m[2][1]=='O'&& m[2][2]=='O')
			                          {
			                          	f=1;
						                    printf("\n\t\t\t");
						                    printf("FIM DE JOGO!!\n\t\t\t");
						                    printf("Vencedor: O\n\t\t\t");
						                   rep=9;
			                          }
						   
						                 if (m[0][0]=='O' && m[1][0]=='O' && m[2][0]=='O'||m[0][1]=='O' && m[1][1]=='O' && m[2][1]=='O'||m[0][2]=='O' && m[1][2]=='O' && m[2][2]=='O')
			                              {
			                              	f=2;
			               	               printf("\n\t\t\t");
						                    printf("FIM DE JOGO!!\n\t\t\t");
						                    printf("Vencedor: O\n\t\t\t");
						                   rep=9;
			                              }
						                  
										     if (m[0][0]=='O' && m[1][1]=='O' && m[2][2]=='O' || m[0][2]=='O' && m[1][1]=='O' && m[2][0]=='O')
						                      {
						                      	f=3;
						   	                  printf("\n\t\t\t");
						                         printf("FIM DE JOGO!!\n\t\t\t");
						                         printf("Vencedor: O\n\t\t\t");
						                        rep=9;
											  }
						                     
                                     }
                          
              }


	     
    }
	if(f==0)
	{
	 printf("FIM DE JOGO!!\n\t\t\t");
	 printf("Nenhum Ganhador");
	}
	
	return 0;
}
            
		
