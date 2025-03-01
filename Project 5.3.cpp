#include <iostream>
main()
{
float totalMarks, marksObtain, percentage;
std::cout<<"ENTER THE TOTAL MARKS:";
std::cin>>totalMarks;
std::cout<<"\nENTER THE OBTAIN MARKS:";
std::cin>>marksObtain;
percentage =(marksObtain/totalMarks)*100;
std::cout<<"\nPERCENTAGE = "<<percentage<<" %";
}
