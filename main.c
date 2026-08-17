#include<stdio.h>
#include"contact.h"
#define BLUE "\033[1;34m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[1;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
int main()
{
    AddressBook addressbox;  
    addressbox.countcontact=0;
    load_contact(&addressbox);
    int num;
        printf("\n========================================");
        printf(" ADDRESS BOOK MANAGEMENT SYSTEM ");
        printf("=======================================\n");
    do{
        printf(CYAN"\n _________________________________\n");
        printf("|       ADDRESS BOOK MENU         |\n");
        printf("|_________________________________|\033[0m\n");
        printf("\n[1]. Create Contact\n");
        printf("[2]. Search Contact\n");
        printf("[3]. Edit contact\n");
        printf("[4]. Delete contact\n");
        printf("[5]. Listout all contact\n");
        printf("[6]. Save contact\n");
        printf("[7]. Exit");
        printf("\n-----------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d",&num);
        printf("-----------------------------------\n");
        switch(num)
        {
            case 1:
                  create_contact(&addressbox);
                  break;
            case 2:
                  search_contact(&addressbox);
                  break;  
            case 3:       
                  edit_contact(&addressbox);
                  break;  
            case 4:       
                  delete_contact(&addressbox);
                  break;  
            case 5:     
                  listout_contact(&addressbox);
                  break;  
                  
            case 6:       
                  printf(GREEN"Contact Saved Sucessfully..\033[0m");
                  break;  
            case 7:       
                  printf(YELLOW"\n\" THANK YOU \"\n\n"RESET);
                  break;  
            default:
                  printf(RED "\nInvalid input!\033[0m\n");                  
        }
    }while(num != 7);
    return 0;
}