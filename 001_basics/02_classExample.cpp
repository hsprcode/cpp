#include <iostream>
#include <string>

using  namespace std;

enum class human_personality {creative, analytical, intelligent, friendly};

class human{
public:
    human(string name_i, int age_i, human_personality personality_i){
        name = name_i;
        age = age_i;
        personality = personality_i;
    }
    string get_name() const{
        return name;
    }
    int get_age() const{
        return age;
    }
    human_personality get_personality() const{
        return personality;
    }
    void set_age(int new_age){
        age = new_age;
    }
private:
    string name;
    int age;
    human_personality personality;
};

int main() {
    cout << endl;
    cout << endl;

    human my_human("Harry", 17, human_personality::creative);
    
    cout << my_human.get_name() << " is a " << (int) my_human.get_personality() << " human." << endl;
    // The absence of a default reverse-map for enum classes in C++ is due to the language design. 
    // Enumerations are typically used for symbolic constants, and their primary purpose is to provide a set of named values. 
    // Enumerations are not inherently designed for bidirectional mapping between integer values and enum class values.

    cout << my_human.get_name() << " is " << my_human.get_age() << " years old." << endl;
    
    cout << endl;
    cout << endl;
    return (0);
}