/*
 * Employee.h
 *
 *  Created on: Apr 25, 2019
 *      Author: hassan
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
class Employee{
protected:
	int Emp_no;

public:
	Employee()
{
Emp_no=0;
}
	Employee(int e)
{
Emp_no=e;
}
	virtual int getSalary()=0;
	int getEmpNo() const
{
return Emp_no;
}
	void setEmpNo(int empNo)
{
Emp_no=empNo;

}
};

#endif /* EMPLOYEE_H_ */
