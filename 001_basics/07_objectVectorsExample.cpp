#include <iostream>
#include <string>
#include <vector>

using  namespace std;

enum class human_personality {creative, analytical, intelligent, friendly};

// the below class definition is from 02_classExample.cpp
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

    vector<human> teamMember;

    teamMember.push_back(human("Harry", 17, human_personality::creative));
    teamMember.push_back(human("John", 41, human_personality::analytical));
    teamMember.push_back(human("John2", 11, human_personality::analytical));
    teamMember.push_back(human("Kelly", 15, human_personality::intelligent));
    teamMember.push_back(human("Betty", 21, human_personality::friendly));

    // begin, end, next, and prev can be used to get to the allocated memory of each object, and thus can point to their functions.

    // pointer
    cout << "first human is " << teamMember.begin()->get_name() << ", has personality " << (int) teamMember.begin()->get_personality() << endl;
    // pointer
    cout << "next human is " << next(teamMember.begin())->get_name() << ", has personality " << (int) next(teamMember.begin())->get_personality() << endl;
    // not a pointer
    cout << "human at index 2 is" << teamMember[2].get_name() << ", has personality " << (int) teamMember[1].get_personality() << endl;
    // pointer
    cout << "second last is " << prev(teamMember.end(), 2)->get_name() << ", has personality " << (int) prev(teamMember.end(), 2)->get_personality() << endl;
    // pointer
    cout << "last human is " << (teamMember.end() - 1)->get_name() << ", has personality " << (int) (teamMember.end() - 1)->get_personality() << endl;
    
    
    cout << endl;
    cout << endl;
    return (0);
}