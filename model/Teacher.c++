#include <iostream>
#include <string>
using namespace std;
class Teacher{
    private:
        int id;
        string name;
        int age;
        string NumberPhone;
        double salary;

        
    public:
        // ----------------------------------------------------
        // ----- Set all function that input data private -----
        // ----------------------------------------------------

        setId(int id){
            // this it refere to id of private
            this -> id = id;
        }
        setName(int name){
            // this it refere to id of private
            this -> name = name;
        }
        setAge(int age){
            // this it refere to id of private
            this -> age = age;
        }
        setNumberPhone(string NumberPhone){
            // this it refere to id of private
            this -> NumberPhone = NumberPhone;
        }
        setSalary(double salary){
            // this it refere to id of private
            this -> salary = salary;
        }
        // ----------------------------------------------------
        // ----- Get all function that input data private -----
        // ----------------------------------------------------

        // get return value without parameter function 
        getId(){
            return id;
        }
        getName(){
            // this it refere to id of private
            return name;
        }
        getAge(){
            return age;
        }
        getNumberPhone(){
            return NumberPhone;
        }
        getSalary(){
            return salary;
        }
};