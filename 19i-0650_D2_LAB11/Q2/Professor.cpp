//#include"submission.cpp"
#include<string>
#include<iostream>
using namespace std;
Professor::Professor()
{
name="\0";
employeeID=0;
Designation="\0";


}
	Professor::Professor(string n, int id, string d)
{

name=n;
employeeID=id;
Designation=d;



}
	void Professor::setName(string n)
{
name=n;

}
	string Professor::getName() const
{
return name;
}
	void Professor::setEmployeeID(int id)
{
employeeID=id;

}
	int Professor::getEmployeeID() const
{
return employeeID;

}
	void Professor::setDesignation(string d)
{
Designation=d;

}
	string Professor::getDesignation() const
{

return Designation;
}


