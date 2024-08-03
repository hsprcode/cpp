#include "human.h"
using namespace std;

human::human(string name_i, int age_i, human_personality personality_i){
    name = name_i;
    age = age_i;
    personality = personality_i;
}
string human::get_name() const{
    return name;
}
int human::get_age() const{
    return age;
}
human_personality human::get_personality() const{
    return personality;
}
void human::set_age(int new_age){
    age = new_age;
}