// Write a class “Department” having attributes deptName (string), No_of_ClassRooms(int) and
// No_of_Faculty_Offices (int). Do the following in the code
// a. Create parametrized constructors to initialize the values
// b. Overload the operator + and – to add and subtract, respectively the No_of_ClassRooms and
// No_of_Faculty_Offices.
// c. Write a display function to display the results.
// d. The main function is supposed to be as follows:
// int main(){
// Department d1(“CS”, 30, 10);
// Department d2(“SE”, 20, 7);
// Department d3, d4;
// d3.setName(“Electronics”);
// d3=d1+d2;
// d4.setName(“AHS”);
// d4=d1-d2;
// d3.display();
// d4.display();
// }

#include <iostream>
#include <string>
using namespace std;

class Department
{
private:
    string dept_name;
    int no_of_ClassRooms;
    int no_of_Faculty_Offices;

public:
    Department() : dept_name(""), no_of_ClassRooms(0), no_of_Faculty_Offices(0) {}
    Department(string dn, int noc, int nof) : dept_name(dn), no_of_ClassRooms(noc), no_of_Faculty_Offices(nof) {}

    void setName(string name)
    {
        dept_name = name;
    }

    Department operator+(Department &other)
    {
        Department result = *this;
        result.no_of_ClassRooms += other.no_of_ClassRooms;
        result.no_of_Faculty_Offices += other.no_of_Faculty_Offices;
        return result;
    }

    // Operator overloading: Alternative Way
    //Department operator+(const Department &other)
    //{
    //    return Department(dept_name, no_of_ClassRooms + other.no_of_ClassRooms, no_of_Faculty_Offices + other.no_of_Faculty_Offices);
    //}


    Department operator-(Department &other)
    {
        Department result = *this;
        result.no_of_ClassRooms -= other.no_of_ClassRooms;
        result.no_of_Faculty_Offices -= other.no_of_Faculty_Offices;
        return result;
    }

    // Operator overloading: Alternative Way
    //Department operator-(const Department &other)
    //{
    //    return Department(dept_name, no_of_ClassRooms - other.no_of_ClassRooms, no_of_Faculty_Offices - other.no_of_Faculty_Offices);
    //}

    void display()
    {
        cout << "Name of Department: " << dept_name << endl;
        cout << "Number of Class Rooms: " << no_of_ClassRooms << endl;
        cout << "Number of Faculty Offices: " << no_of_Faculty_Offices << endl;
    }
};

int main()
{
    Department d1("CS", 30, 10);
    Department d2("SE", 20, 7);
    Department d3, d4;

    d3.setName("Electronics");
    d3 = d1 + d2;

    d4.setName("AHS");
    d4 = d1 - d2;

    d3.display();
    d4.display();

    return 0;
}
