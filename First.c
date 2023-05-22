// =====================================================================// 	
//     			  Projet 01 : Exo 1-Random VAR           		 	    //
//															            //
//	Nom 	   : DANNOUNE		   							            //
//  Prenom     : Mohamed-Amine    										//
//																	    //
//  M2 IRS                      									   	//
//======================================================================//

#include <stdio.h>

int main() {
    int employeeID;
    char employeeName[50];
    int employeeAge;
    float employeeSalary;
    double employeeBonus;
    short yearsOfExperience;
    long employeePhoneNumber;

    // Input the values for employee variables
    printf("--------------------------------- ");
    printf("\nEmployee Details\n");
    printf("--------------------------------- ");
    printf("\n ");
    
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

    // Print the employee details
    printf("--------------------------------- ");
    printf("\nEmployee Details\n");
    printf("--------------------------------- ");
    printf("ID: %d\n", employeeID);
    printf("Name: %s\n", employeeName);
    printf("Age: %d\n", employeeAge);
    printf("Salary: %.2f\n", employeeSalary);
    printf("Bonus: %.5lf\n", employeeBonus);
    printf("Years of Experience: %hd\n", yearsOfExperience);
    printf("Phone Number: %ld\n", employeePhoneNumber);

    return 0;
}
