#include<stdio.h>
#include<string.h>
#include"contact.h"
#define YELLOW "\033[1;33m"
#define GREEN "\033[1;32m"
#define CYAN  "\033[1;36m"
#define RED  "\033[1;31m"
#define BLUE "\033[1;34m"
void create_contact(AddressBook *addressbox)
{      printf(CYAN);
       printf( " _________________________________\n");
       printf("|      1.CREATE CONTACT           |\n");
       printf("|_________________________________|\033[0m\n");
       int i=0,count=addressbox->countcontact;
       printf("\nEnter the name : ");
       scanf(" %[^\n]",addressbox->contacts[count].name);
       while(addressbox->contacts[count].name[i]!='\0')
       {     
             char ch=addressbox->contacts[count].name[i]; 
             if(!((ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z')||(ch==' ')))
               { 
                  printf(RED "\ninvalid input!\n\033[0m");
                  return ;
               }  
             i++;   
       }
       char temp[100];
       int num=0,valid=1;
       i=0;
       printf("Enter the mobile number : ");
       scanf("%99s",temp);
      
       while( temp[i]!='\0')
       { 
            
              char c=temp[i];
              if(c<'0'|| c>'9')
               {
                  valid=0;
                  break;
               }
          
            num++;  
            i++;    
       } 
      if(valid==0||num>10||num<10)
      {
         printf(RED "\nPlease enter 10 digit..!\033[0m\n");
         return;
      }  
      else if(is_duplicate(addressbox,temp))
      {
         printf("\n\033[1;33mContact already exists!\033[0m\n");
         return ;
      }
      else
      {
        strcpy(addressbox->contacts[count].phone,temp);  
      }    
      int k=0;
      char mailt[50];
      int at_pos=-1,dot_after_at=-1,valid_char=0,at_count=0;
      printf("Enter the mail id : ");
      scanf("%49s",mailt);
      while(mailt[k]!='\0')
       {
            char m=mailt[k];
         
              if((m>='a'&& m<='z')||(m>='0'&&m<='9'))
              {
                  valid_char=1;   
              }    
              else if(m=='@')
              {
                 at_count++;
                 at_pos=k;
              }      
              else if(m=='.')
              {
                 if(at_pos != -1)
                    dot_after_at=k;
              }
              else
              {
                valid_char=0;
              }
             k++;
             
        }
        if(at_count != 1||at_pos==0||dot_after_at==-1||dot_after_at==at_pos+1||addressbox->contacts[count].mail[k-1]=='.')
        {
          valid_char=0;
        }
        if(valid_char==0)
        {
         printf(RED "\nPlease enter valid mail..!\033[0m\n");
         return ;
        }
        else if(duplicate_mail(addressbox,mailt))
        {
          printf("\n\033[1;33mContact already exists !\033[0m\n");
          return ;
        }
        else
        {
          strcpy(addressbox->contacts[count].mail,mailt);
        }
   

      addressbox->countcontact++;
      save_contact(addressbox);
    
      printf(GREEN"\n Contact Added Successfully... \033[0m");
        printf("\n+---------------------------------------------------------------+\n");
    printf("| [%-2d]  |%-10s |%-15s| %-25s|\n",count+1,addressbox->contacts[count].name,
                                addressbox->contacts[count].phone,
                                addressbox->contacts[count].mail);
    printf("+---------------------------------------------------------------+\n");
      
}