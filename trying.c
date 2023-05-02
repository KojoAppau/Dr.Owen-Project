#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

         char myBuf[100];
	 char fileName[100];
	 FILE *f;
         char myJunk[1000];
	 char *token;
	 char *string1;
	 char *ptr;
	 char *string2;
	 char *search = " ";
	 const char character[] = "#";
	 int i = 0;
	 long long M[32768];







   void Load(FILE *f)
     {
		 
		if(f!=NULL)
		{
			 
			  while (!feof(f))
			   {
			
			    fgets(myBuf, 100, f); /* or use getline, weird params */
			  
			    
			    //Reads and stores the string until the "#"
			    token = strtok(myBuf,character);
			  
			    
		
			


			// First Part of the Seperation
			string1 = strtok(token, search);
		       

			// Second Part of the Seperation
		  	string2 = strtok(NULL, search);
			
		       
			if(string2!=NULL)
			{   
			
			 //Copies the first part of the Line              
		        strcpy(myJunk,string1);
		        
		        //Joins the second part of the line to the first onbe removing the space
		        strcat(myJunk,string2);
		        
		        //Prints the result
		        printf("%s\n", myJunk);
		        
		         //Storing the (changed number to octal) in Memory
		         M[i]= strtol(myJunk,&ptr,8);
		         
		         //Checking to see if the conversion went well
			  printf("%lld\n\n", M[i]);
			  i++;
			 }
			 
			 else
			 { 
			   //Copies the first part of the Line  
	 		   strcpy(myJunk,string1);
	 		   
	 		   
	 		   //Prints the result
			   printf("%s\n", myJunk);
			   
			   i = atoi(myJunk);
			   printf("%d\n", i);
			   
			  /* 
			  //Storing the (changed number to octal) in Memory
			  M[i]= strtol(myJunk,&ptr,8);
			  
			  //Checking to see if the conversion went well
			  printf("%lld\n\n", M[i]);
			  i++;
			  */
			 }
			   
			 }
		        
			  		 
			  
			   
			    
			    
		}
			   
		 
		 
		 else
		 {
		    printf("This is null");
		 }
     }












int main() 
{

	 
	 
	  printf("Kindly enter the name of the octal file ==>");
	  scanf("%s",fileName);
	  f = fopen(fileName,"r");
	  Load(f);
	  printf("%lld\n" , M[3000]);
	  
	 
	 
    
  
	 
 }

