#include<iostream>
using namespace std;

void update1(int n)
{
    n++;
}

void update2(int& n)
{
    n++;   
}

int main()
{
    /*
    int i=5;
    int &j = i; //creating reference variable

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    //basically reference variable JAB CREATE TAB SE VO HE i & j MEANS i & j ARE ATE SAME POSITION
    
    */
    

    //WHEN WE USE UPDATE FUNCTION THERE'S AN DIFFERENCE IN UPDATE1 & UPDATE2 AS BY PASSING REFERNCE(int &n)  THE ACTUAL VALUE IS USED & IN NORMAL (int n) IT JUST CREATES A COPY OF SAME AS ORIGINAL  
    int n =5;
    cout<<"Before :"<< n << endl;
    update1(n);
    cout<<"After update1 :" << n <<endl;
    update2(n);
    cout<<"After Update2 :"<< n <<endl;
    
    
    return 0;
}