#include<stdio.h>
#ifndef CONTACT_H
#define CONTACT_H


typedef struct 
{
    char name[50];
    char phone[11];
    char mail[50];
}contact;
typedef struct
{
    contact contacts[100];
    int countcontact;
}AddressBook;

void create_contact(AddressBook *addressbox);
void search_contact(AddressBook *addressbox);
void save_contact(AddressBook *addressbox);
void edit_contact(AddressBook *addressbox);
void delete_contact(AddressBook *addressbox);
void listout_contact(AddressBook *addressbox);
void load_contact(AddressBook *addressbox);
int is_duplicate(AddressBook *addressbox,char *temp);
int duplicate_mail(AddressBook *adreebox,char *mailt);

#endif