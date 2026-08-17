# Address Book – Contact Management System

A console-based Contact Management System developed using C programming.  
The application allows users to create, search, edit, delete, and manage contacts with input validation, duplicate detection, and file handling.

## Features

- Create a new contact
- Search for an existing contact
- Edit contact details
- Delete a contact
- List all contacts
- Save contact information
- Load saved contacts
- Detect duplicate contacts
- Validate name, phone number, and email
- Persistent data storage using file handling

## Technologies & Concepts

- C Programming
- Structures
- Pointers
- Functions
- Arrays
- File Handling
- Input Validation
- Modular Programming
- Git & GitHub

## Project Structure

```text
ADDRESS-BOOK-C/
│
├── main.c
├── contact.h
│
├── create_contact.c
├── search_contact.c
├── edit_contact.c
├── delete_contact.c
├── save_contact.c
├── list_contact.c
├── is_duplicate.c
├── load_contact.c
│
└── .gitignore
```
## Application Workflow
```text
                  ADDRESS BOOK
                         │
                         ▼
                    Main Menu
                         │
        ┌────────────────┼────────────────┐
        │                │                │
        ▼                ▼                ▼
   Create Contact   Search Contact   Edit Contact
        │                │                │
        └────────────────┼────────────────┘
                         │
        ┌────────────────┼────────────────┐
        │                │                │
        ▼                ▼                ▼
   Delete Contact    List Contacts      Exit
        │                │
        └────────┬───────┘
                 ▼
          File Handling
          ┌──────┴──────┐
          ▼             ▼
     Save Contact   Load Contact
```
#How to Compile  and Run

- Clone the Respository
```txt
  git clone https://github.com/mvmonika04/ADDRESS-BOOK-C.git
```
- Navigate to the Project
```txt
  cd ADDRESS-BOOK-C
```
- Compile the Program
```txt
  gcc *.c -o address_book
```
- Run the Program
```txt
  ./address_book
```
## Learning Outcomes

This project helped me gain practical experience in:

- Developing a multi-file C application
- Using structures and pointers
- Implementing file handling
- Designing modular programs
- Performing input validation
- Implementing duplicate detection
- Debugging C programs
- Managing source code using Git and GitHub

## Future Enhancements

- Add contact sorting
- Improve the user interface
- Add advanced search options
- Add more contact fields
- Improve data storage and security

## Author
**Monika M.V**

- GitHub: [https://github.com/mvmonika04⁠](https://github.com/mvmonika04⁠)

- Project Repository: [ https://github.com/mvmonika04/ADDRESS-BOOK-C ]⁠
  
		 
