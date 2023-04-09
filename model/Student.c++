#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
        int id;
        string name;
        int age;
        double gpa;
        string NumberPhone;

        
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
        setGpa(int gpa){
            // this it refere to id of private
            this -> gpa = gpa;
        }
        setNumberPhone(string NumberPhone){
            // this it refere to id of private
            this -> NumberPhone = NumberPhone;
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
        getGpa(){
            return gpa;
        }
        getNumberPhone(){
            return NumberPhone;
        }
};