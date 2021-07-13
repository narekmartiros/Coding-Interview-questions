#include <string>
#include <iostream>

bool one_away(std::string str1, std::string str2);

int main() {
    std::string st1{"Cde"};
    std::string st2{"Code"};
    std::cout << one_away(st1, st2);
}

bool one_away(std::string str1, std::string str2){
    if( str1.size() == str2.size()){
        int count = 0;
        for(int i = 0; i < str1.size(); ++i){
            if(str1[i] != str2[i]){
                ++count;
            }
        }
        return count <= 1;
    }
    int pos1 = 0;
    int pos2 = 0;
    while(pos1 < str1.size() && pos2 < str2.size()) {
        if(str1[pos1] != str2[pos2]) {
            if(pos1 != pos2){
                return false;
            }
            ++pos2;
        }
        else {
            ++pos1;
            ++pos2;
        }
    }
    return true;
}