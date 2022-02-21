#include<iostream>
int main()
{
  double salary, netSalary;
   int etype, otHrs, otRate;
   std::cout<<"enter employee type :";
  std::cin>>etype;
   std::cout<<"enter salary:";
   std::cin>>salary;
   std::cout<<"enter othrs :";
   std::cin>>otHrs;

   switch(etype)
   {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }
netSalary = salary + otHrs* otRate;
std::cout<<"net salary is :"<<netSalary<<std::endl;
  return 0;
}

   
