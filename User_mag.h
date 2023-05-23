#pragma once
#ifndef EMPLOYEE_MANAGEMENT_H
#define EMPLOYEE_MANAGEMENT_H

#include <stdio.h>

extern int employeeID;
extern char employeeName[50];
extern int employeeAge;
extern float employeeSalary;
extern double employeeBonus;
extern short yearsOfExperience;
extern long employeePhoneNumber;
extern char* status;
extern int CH, A;

void Create_user();
void Print_user();
void Save_user();
void Read_user();

#endif /* EMPLOYEE_MANAGEMENT_H */
