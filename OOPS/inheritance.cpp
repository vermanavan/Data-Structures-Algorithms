#include <bits/stdc++.h>
using namespace std;

class human{

    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        this->weight = w;
    }
};

class Male : public human{

    public:
        string color;
        void sleep(){
            cout<<"male sleeping"<<endl;
        }
};

// class Student{

//     private:
//         string name;
//         int age;
//         int height;

//     public:
//     int getAge(){
//         return this->age;
//     }

// };

int main()
{
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.height<<endl;
    cout<<object1.color<<endl;
    object1.sleep();
    object1.setWeight(56);
    cout<<object1.weight<<endl;
    return 0;
}