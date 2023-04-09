// this class is mohter of any class can inherte the data any method can reapt of ohter sub class
class BaseEntity{
    private:
        int id;
        string name;
        int age;
        string NumberPhone;
        // double salary;
        // double gpa;
    public:
        


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
};