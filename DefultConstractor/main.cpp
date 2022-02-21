//
//  main.cpp
//  DefultConstractor
//
//  Created by Arifeen Mahmud on 21/2/22.
//

#include <iostream>
using namespace std;

class Widget {
public:
    Widget() {++count;}
   ~ Widget() {--count;}
static int count;
};
int Widget::count = 0;

int main(int argc, const char * argv[]) {
    Widget w,x;
    cout<<"Now there are " << w.count <<" widgets.\n";

    {
    Widget w,x,y,z;
        cout<<"Now there are " << w.count <<" widgets.\n";
    }
    std::cout<<"Now there are " << w.count <<" widgets.\n";
    Widget y;
    std::cout<<"Now there are " << w.count <<" widgets.\n";

    return 0;
}
