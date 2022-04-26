#include <stdio.h>

int main()
{
    char GENDER;
    int COUNTRY,choice,A=1;
    double SIZE,US=0.0,UK=0.0,EURO=0.0;
    

    printf(" 			                                                          --------------------------------------------------------------\n");
    printf("                                                                                  |        THE OFFICIAL INTERNATIONAL SHOE SIZE CONVERTER     |\n ");
    printf("			                                                          --------------------------------------------------------------\n\n");
    printf("Welcome to the No. 1 source for determining your shoe size in all of the world's main international shoe sizing standards. The information presented here has been compiled from many sources in various countries to help you determine your local shoe size compared to those from other countries.\n\n");
    printf("\nThe standards included in this resource are from the US & Canada, United Kingdom, Europe. \n\n");
    
	printf("With the continuing increase in consumers purchasing goods through world wide online shopping, there is a requirement to ensure that you are able to purchase the correct size shoe right from the start. This resource should help you with that.\n\n");
    while (A>0){
    	
    	printf("                                                                                    PRESS M FOR MEN, W FOR WOMEN AND K FOR KID OR INFANT:  ");
    	printf(" ");
    	
   
	    scanf("                                                                                                                         %c", &GENDER);
    if (GENDER == 'K' || GENDER == 'W' || GENDER == 'M'||GENDER == 'k' || GENDER == 'w' || GENDER == 'm'){
    	printf("\n");
	    
	    printf("                                                                                               ENTER THE SIZE OF YOUR SHOE:  ");
	    
	    scanf("                                                                                                     %lf",&SIZE);
	    printf("\n");
	    
	    printf("                                                                                          PRESS 1 IF THE COUNTRY IS US or CANADA: \n");
	    printf("                                                                                          PRESS 2 IF THE COUNTRY IS UK: \n");
	    printf("                                                                                          PRESS 3 IF THE COUNTRY IS EUROPE: ");
	    
	    
	    
	    
	    scanf("                                                                                                      %d",&COUNTRY);
	    printf("\n");
	
	        if (GENDER == 'W'||GENDER == 'w')
	        {
	
	            if (COUNTRY==1)
	            {
	
	                UK=SIZE+2.5;
	                EURO=SIZE+35;
	                
	                printf("                                                                           GENDER           SIZE IN US/CANADA          SIZE IN UK           SIZE IN EURO\n");
	                printf("                                                                           WOMEN                %.1lf                   %lf                   %lf    \n ",SIZE,UK,EURO);
	                }
	                else if(COUNTRY==2) 
					{
						US=SIZE-2.5;
						EURO=SIZE+32.5;
						
	                printf("                                                                           GENDER           SIZE IN  UK        SIZE IN US/CANADA           SIZE IN EURO\n");
	                printf("                                                                           WOMEN                 %.1lf             %.1lf                   %.1lf     \n",SIZE,US,EURO);
	                }
	                else if(COUNTRY==3)
	                {
	                	UK=32.5-SIZE;
	                	US=35-SIZE;
	                	
	                printf("                                                                           GENDER           SIZE IN EUROPE          SIZE IN UK           SIZE IN US/CANADA\n");
	                printf("                                                                           WOMEN                 %.1lf             %.1lf                       %.1lf    \n ",SIZE,UK,US);
	                	
					}
					else
					printf("                                                                                                  INVALID COUNTRY");
	        }
	        else if (GENDER == 'M'||GENDER == 'm')
	        {
	        
	            if (COUNTRY==1) 
				{
					UK=SIZE-0.5;
					EURO=SIZE+31.5;
					
					printf("                                                                            GENDER           SIZE IN US/CANADA          SIZE IN UK           SIZE IN EURO\n");
	                printf("                                                                             MEN                 %.1lf                    %.1lf                   %.1lf    \n ",SIZE,UK,EURO);
	            	
	            }
	            else if(COUNTRY==2) 
				{
					US=SIZE+0.5;
					EURO=SIZE+32;
					
					
	                printf("                                                                            GENDER           SIZE IN UK          SIZE IN US           SIZE IN EURO\n");
	                printf("                                                                             MEN                 %.1lf              %.1lf                   %.1lf    \n ",SIZE,US,EURO);
	            }
	            else if(COUNTRY==3)
	            {
	                UK=32-SIZE;
	                US=31.5-SIZE;
					
					printf("                                                                            GENDER           SIZE IN EURO          SIZE IN UK           SIZE IN US\n");
	                printf("                                                                             MEN                %.1lf                 %.1lf                 %.1lf     \n",SIZE,UK,US);	
				}
				else
				printf("                                                                                                    INVALID COUNTRY\n");
			}
			else if(GENDER=='K'||GENDER == 'k')
			{
				if (COUNTRY==1) 
				{
					UK=SIZE-0.5;
					EURO=SIZE+31.5;
					
					printf("                                                                            GENDER           SIZE IN US          SIZE IN UK           SIZE IN EURO\n");
	                printf("                                                                          KID/INFANT            %.1lf               %.1lf                   %.1lf    \n ",SIZE,UK,EURO);
	            	
	            }
	            else if(COUNTRY==2) 
				{
					US=SIZE+0.5;
					EURO=SIZE+15.5;
					
					
	                printf("                                                                            GENDER           SIZE IN UK          SIZE IN US           SIZE IN EURO\n");
	                printf("                                                                           KID/INFANT           %.1lf               %.1lf                   %.1lf    \n ",SIZE,US,EURO);
	            }
	            else if(COUNTRY==3)
	            {
	                UK=15.5-SIZE;
	                US=15-SIZE;
					
					printf("                                                                            GENDER           SIZE IN EURO          SIZE IN UK           SIZE IN US\n");
	                printf("                                                                           KID/INFANT           %.1lf                  %.1lf                 %.1lf     \n",SIZE,UK,US);
				}
				else 
				printf("                                                                                                      INVALID COUNTRY\n");
			}	
	}
	else(printf("                                                                                                        INVALID INPUT"));
	    
	    printf("\n");
	    printf("                                                                                           PRESS 1 TO CONTINUE ELSE PRESS 0:  \n");
	    scanf("%d",&choice);
	    if (choice==1)(A=1);
	    else {
	    	A=0;
	    	printf("                                                                                      Thanks for using our international shoe size converter");
		}
    
    	
	
	
	}
    return 0;
}
