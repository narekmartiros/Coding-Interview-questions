#include <string>
#include <iostream>

bool is_permutation(std::string str1, std::string str2);

int main() {
    std::string st{"ollmba"};
    std::string st1{"llmabo"};
    std::cout << is_permutation(st, st1);
}

bool is_permutation(std::string str1, std::string str2){
    if(str1.size() != str2.size()){
        return false;
    }
    int table[128]{};
    for(int i = 0; i < str1.size(); ++i){
        table[str1[i]]++;
    }
    for(int i = 0; i < str2.size(); ++i){
        if(!table[str2[i]]){
            return false;
        }
    }
    return true;
}

