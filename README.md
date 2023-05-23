# Repository_C
This C program is a simple user management system that allows the user to create and save employee details, read the saved employee details from a file, and exit the program.

The program consists of several functions:

    Create_user(): This function prompts the user to input employee details such as ID, name, age, salary, bonus, years of experience, and phone number. It also allows the user to choose the employee's status as either "Interne" or "Externe".

    Print_user(): This function prints the employee details on the console, including ID, status, name, age, salary, bonus, years of experience, and phone number.

    Save_user(): This function saves the employee details to a file named "employee_details.txt" in a specific format.

    Read_user(): This function reads and displays the contents of the "employee_details.txt" file on the console.

The main() function acts as the program's entry point. It presents a menu to the user with options to create a new user, read the existing users, or exit the program. Depending on the user's choice, the corresponding functions are called. After completing an operation, the program asks the user if they want to continue using the program or exit.

Note that the program uses the scanf_s() function to read input from the user, which is a secure version of the scanf() function that helps prevent buffer overflow vulnerabilities.

Overall, this program provides a basic user management system with functionality to create, save, and read employee details.

@DANNOUNE Mohamed-Amine
