//
//  main.cpp
//  StaticConstractor
//
//  Created by Arifeen Mahmud on 5/7/21.
//

#include <iostream>

using namespace std;

    class widget {
    public:
    widget() {count++; }
    ~widget() {--count; }
    static int count;
    };
    int widget::count = 0;

        int main() {
        widget w,x;
            std::cout <<"Now thereare " << w.count <<"widgets\n";
        { widget w,x,y,z;
            std::cout <<"Now thereare " << z.count <<"widgets\n";
        }

            std::cout <<"Now thereare " << w.count <<"widgets\n";
        widget y;
            std::cout <<"Now thereare " << w.count <<"widgets\n";
        }

