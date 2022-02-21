#include<iostream>
int main()
{
  int no;
  long fac;

  std::cout<<"enter a number :";
  std::cin>>no;

  fac=1;
   for (int r=no; r >= 1; r--) 
   {
        fac = fac * r;
    }

  std::cout<<"factorial of "<<no<< " is :"<<fac<<std::endl;

  return 0;
}


