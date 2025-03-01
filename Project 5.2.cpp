#include <iostream>
main()
{
int apples, childrens, perChild, applesleft;
std::cout<<"ENTER THE AMOUNT OF APPLES:";
std::cin>>apples;
std::cout<<"\nENTER THE AMOUNT OF CHILDRENS:";
std::cin>>childrens;
perChild =apples/childrens;
applesleft =apples%childrens;
std::cout<<"\nAPPLES PER CHILD = "<<perChild<<" APPLES";
std::cout<<"\nAPPLES LEFT = "<<applesleft<<" APPLES";
}
