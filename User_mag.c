#include <stdio.h>
#include "User_mag.h"

int employeeID;
char employeeName[50];
int employeeAge;
float employeeSalary;
double employeeBonus;
short yearsOfExperience;
long employeePhoneNumber;
char* status;
int CH,A;



int main() {
    A = 1;

    while (A==1) {
        //system("cls");
        printf("--------------------------------- ");
        printf("\n\t**USER MANAGEMENT**\n");
        printf("---------------------------------\n ");
        printf("\n\n\t1. Create a new user\n\t2. Read the users\n\t3. Exit\n\n\nChoice : ");
        scanf_s("%d", &CH);

        switch (CH) {
        case 1:
            Create_user();
            Save_user();
            break;
        case 2:
            Read_user();
            break;
        case 3:
            printf("Exiting the program...\n");
            return 0;
        default:
            printf("Invalid choice /!\\n");
            break;
        }
        printf("\n\n");
        printf("\n\n");
        printf("----------------------------------------------- ");
        printf("\n**DO YOU WANT TO KEEP USING THE PROGRAMME **\n");
        printf("-----------------------------------------------\n ");
        printf("\n\n\t1. YES\n\t2. NO\n\n\nChoice : ");
        scanf_s("%d", &A);

        printf("\n\n");

        system("cls");
    }
    printf("Exiting the program...\n");
    return 0;
}

void Create_user() {
    // Input the values for employee variables
    printf("\n\n");
    printf("\n\n");
    printf("--------------------------------- ");
    printf("\n\tEmployee Details\n");
    printf("--------------------------------- ");
    printf("\n ");

    printf("1. Interne\n2. Externe\n\n\nChoice : ");
    scanf_s("%d", &CH);

    if (CH == 1) {
        status = "Interne";
    }
    else if (CH == 2) {
        status = "Externe";
    }
    else {
        printf("Invalid choice\n");
        return;
    }
    printf("Enter employee ID: ");
    scanf_s("%d", &employeeID);

    printf("Enter employee name: ");
    scanf_s("%s", employeeName, sizeof(employeeName));

    printf("Enter employee age: ");
    scanf_s("%d", &employeeAge);

    printf("Enter employee salary: ");
    scanf_s("%f", &employeeSalary);

    printf("Enter employee bonus: ");
    scanf_s("%lf", &employeeBonus);

    printf("Enter years of experience: ");
    scanf_s("%hd", &yearsOfExperience);

    printf("Enter employee phone number: ");
    scanf_s("%ld", &employeePhoneNumber);
}

void Print_user() {
    // Print the employee details
    printf("--------------------------------- ");
    printf("\nEmployee Details\n");
    printf("---------------------------------\n ");
    printf("\n ");
    printf("ID: %d\n", employeeID);
    printf("Status: %s\n", status);
    printf("Name: %s\n", employeeName);
    printf("Age: %d\n", employeeAge);
    printf("Salary: %.2f\n", employeeSalary);
    printf("Bonus: %.5lf\n", employeeBonus);
    printf("Years of Experience: %hd\n", yearsOfExperience);
    printf("Phone Number: %ld\n", employeePhoneNumber);
}

void Save_user() {
    FILE* file;
    if (fopen_s(&file, "employee_details.txt", "w") != 0) {
        printf("Unable to create/open the file.\n");
        return;
    }
    fprintf(file, "======================================\n");
    fprintf(file, "Employee Details : \n");
    fprintf(file, "------------------\n");
    fprintf(file, "ID: %d\n", employeeID);
    fprintf(file, "Status: %s\n", status);
    fprintf(file, "Name: %s\n", employeeName);
    fprintf(file, "Age: %d\n", employeeAge);
    fprintf(file, "Salary: %.2f\n", employeeSalary);
    fprintf(file, "Bonus: %.5lf\n", employeeBonus);
    fprintf(file, "Years of Experience: %hd\n", yearsOfExperience);
    fprintf(file, "Phone Number: %ld\n", employeePhoneNumber);
    fprintf(file, "======================================\n");

    fclose(file);

    printf("Employee details saved successfully.\n");
}

void Read_user() {
    FILE* file;
    if (fopen_s(&file, "employee_details.txt", "r") != 0) {
        printf("Unable to open the file.\n");
        return;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);
}


