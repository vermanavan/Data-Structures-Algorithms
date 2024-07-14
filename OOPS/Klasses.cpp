#include <bits/stdc++.h>

using namespace std;
class Hero{
    
    private:
    int health;

    public:
    
    char level;
    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health= h;
    }
    void setLevel(char ch){
        level =ch; 
    }
    
};


int main()
{ 
    //static allocation
    Hero h1;
    h1.setHealth(80);
    h1.setLevel('B');
    cout<<"level of h1 is :"<<h1.level<<endl;
    cout<<"health of h1 is :"<<h1.getHealth()<<endl;
    //dynamic allocation
    Hero *h2 = new Hero;
    h2->setHealth(70);
    h2->setLevel('A');
    cout<<"level of h1 is :"<<(*h2).level<<endl;
    cout<<"health of h1 is :"<<(*h2).getHealth()<<endl;
    cout<<"level of h1 is :"<<h2->level<<endl;
    cout<<"health of h1 is :"<<h2->getHealth()<<endl;

    // cout<<"H1  health"<<h1.getHealth()<<endl;
    // h1.setHealth(70);
    // // h1.health= 70;
    // h1.level='A';
    // cout<<"health is :"<<h1.getHealth()<<endl;
    // cout<<"level is :"<<h1.level<<endl;
    
    return 0;
}