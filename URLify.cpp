#include <string>
#include <iostream>

void URLify(std::string &str);

int main() {

    std::string st{"MR John Smith   "};
    URLify(st);
    std::cout << st;

}

void URLify(std::string &str) {
    for(int i = 0; i < str.size(); ++i) {
        if(str[i] == ' '){
            str.erase(str.begin()+i);
            str.insert(i, "%20");
        }
    }
}

