//
//  main.cpp
//  weekend
//
//  Created by Arifeen Mahmud on 10/7/21.
//

#include <iostream>
using namespace std;
class mess
{
public:
 enum days{sat, sun, mon,tue,wed,thurs,fri};
 int status;
 void setStatus(int stat)
 {
 status=stat;
 }
 void show()
 {
 if(status==1)
 cout<<"weekend"<<endl;
 else if(status==0)
 cout<<"Working day"<<endl;
 else cout<<"Wrong input";
 }
};

int main()
{
 mess m1;
 int day;
 cin>> day;
    cout<< m1.sat;
 if ((day==m1.sat)||(day==m1.fri))
 m1.setStatus(1);
 else if
((day==m1.sun)||(day==m1.mon)||(day==m1.tue)||(day==m1.wed)||(day==m1.thurs))
 m1.setStatus(0);
 m1.show();
 return 0;
}
