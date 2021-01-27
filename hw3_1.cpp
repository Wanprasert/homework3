#include <iostream>
#include <string>
int cal_com(int salary, int sale, int cp);
using namespace std;
int main()
{
    int salary, sale, cp, tcp, total;

    cout << "Enter Salary : ";
    cin >>salary;
    cout << "Enter Sale : ";
    cin >>sale;
    cout << "Enter Commission Percent: ";
    cin >>cp;
    
    cout << "Total Revenue : "<<cal_com(salary,sale,cp)<<" Baht" <<endl;
}

int cal_com(int salary,int sale,int cp)
{
    int total;
    int tcp;
    tcp = cp*sale/100;
    total = tcp+salary;
    return(total);
}