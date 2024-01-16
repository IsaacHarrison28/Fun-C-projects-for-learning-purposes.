#include <string>

class Person
{

public:
    Person();
    void collectInfo();

private:
    std::string name;
    std::string middle_name;
    std::string favorite_food;
    std::string favorite_color;
    std::string favorite_place;
    std::string birth_place;
    std::string birth_day;
    std::string father_name;
    std::string mother_name;
    int current_age;
    bool uni_student;
};