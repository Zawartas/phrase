#include <iostream>
#include <map>
#include <string>
#include <cstdlib>

int main(int argc, char *argv[])
{
    if (argc != 2){
        std::cout << "wrong amount of arguments\n";
        return -1;}

    std::string hamlet;

    std::getline(std::cin, hamlet);
    std:: map <std::string, int> wynik;
    int n = atoi(argv[1]);

    std::string temp;

    for (int it = 0; it < hamlet.length() - n + 1; it++){
        temp = hamlet.substr(it, n);
        wynik[temp]++;
    };

    int maks = wynik.begin()->second;

    for (auto &k: wynik) {
        if (k.second > maks){
            maks = k.second;
            temp = k.first;
        }
    }

    std::cout << std::endl << temp;

    return 0;
}
