#include <string>
#include <iostream>

bool is_rotation(std::string st1, std::string st2);

int main() {
    std::string s1{"waterbottle"};
    std::string s2{"erbottlewat"};
    std::cout << is_rotation(s1, s2);
}

bool is_rotation(std::string st1, std::string st2) {
    if( st1.size() == st2.size() && st1.size() > 0) {
        std::string st = st1 + st1;
        int j = 0;
        for( int i = st.find(st2[0]); i < st2.size(); ++i){
            if(st2[j] != st[i]){
                return false;
            }
            ++j;
        }
        return true;
    }
    else{
        return false;
    }
}