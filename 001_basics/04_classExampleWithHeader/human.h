#ifndef HUMAN_H
#define HUMAN_H
#include <string>

using namespace std;

enum class human_personality {creative, analytical, intelligent, friendly};

class human{
public:
    human(string name_i, int age_i, human_personality personality_i);
    string get_name() const;
    int get_age() const;
    human_personality get_personality() const;
    void set_age(int new_age);
private:
    string name;
    int age;
    human_personality personality;
};

#endif 