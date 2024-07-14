#include <bits/stdc++.h>
using namespace std;

class Hero{
    
    private:
    int health;

    public:
    // default constructor
    Hero(){
        cout<<"simple constructor called"<<endl;
     }
    // paramerterized constructor

    Hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health=health;
    }
    Hero(int health,char level){
        cout<<"this-> "<<this<<endl;
        this->health=health;
        this->level=level;
    }
    // copy constructor
    Hero(Hero& temp){
        cout<<"copy constructor called"<<endl;
        this->health= temp.health;
        this->level= temp.level;
    }

    char level;
    void print(){
        cout<<"Health "<<this->health<<endl;
        cout<<"Level "<<this->level<<endl;
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

    Hero h1(70,'C');
    h1.print();
    //line below is copy constructor 
    Hero h2(h1);
    h2.print();
    /*
    //static allocation
     
    Hero H1(10);
    // cout<<"Address of H1:"<<&H1<<endl;
    //dynamic allocation
    H1.print();
    Hero *h2 = new Hero(40);
    h2->print();
    Hero *h3 = new Hero(50,'F');
    h3->print();   
    */
    return 0;
}