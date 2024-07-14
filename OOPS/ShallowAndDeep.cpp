#include <bits/stdc++.h>
using namespace std;

class Hero{
    
    private:
    int health;

    public:
    char *name;
    char level;

    // default constructor
    Hero(){
        cout<<"simple constructor called"<<endl;
        name= new char[100];
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
    //This is the crux of the concept. 
    //we will create an entierly new array instead of creating a shallow copy.
    Hero(Hero& temp){
        char *ch  = new char[strlen(temp.name)+1];
        strcpy (ch,temp.name);
        this->name=ch;
        cout<<"copy constructor called"<<endl;
        this->health= temp.health;
        this->level= temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"{ ";
        cout<<"Name: "<<this->name<<" ,";
        cout<<"Health: "<<this->health<<" ,";
        cout<<"Level: "<<this->level<<" }"<<endl;
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
    void setName(char name[]){
        strcpy(this->name,name);
    }
    
};

int main()
{
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('A');
    char name[6]="Navan";
    hero1.setName(name);
    // hero1.print();

    //Hero hero2= hero1;
    Hero hero2(hero1);
    hero2.print();
    hero1.name[0]='Y';
    //In the case of default copy constructor the same name is accessed by two names.As the name is 
    hero1.print();
    // hero2.print();
    return 0;
}