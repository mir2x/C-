#include<iostream>
#include<string>

class Person {
    public:
        Person() {};
        Person(std::string name, int age) {
            this -> name = name;
            this -> age = age;
        }
        Person(const Person& other) {
            this -> name = other.name;
            this -> age = other.age;
        }
        void setName(std::string name);
        void setAge(int age);
        std::string getName();
        int getAge();
    private:
        std::string name;
        int age;
};

void Person::setName(std::string name) {
    this -> name = name;
}

void Person::setAge(int age) {
    this -> age = age;
}

std::string Person::getName() {
    return this->name;
}

int Person::getAge() {
    return this -> age;
}

int main() {
    Person* person1 = new Person;
    person1 -> setName("Tanim");
    person1 -> setAge(24);
    std::cout << "Name: " << person1 -> getName() << " Age: " << person1 -> getAge() <<'\n';
    Person* person2 = new Person("Amin", 54);
    std::cout << "Name: " << person2 -> getName() << " Age: " << person2 -> getAge() <<'\n';
    return 0;
}