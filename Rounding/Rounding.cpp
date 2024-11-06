#include <iostream>
#include <string>


double get_after_point(double nom) {
    std::string stir = std::to_string(nom);

    auto fi = stir.find('.');

    std::string subs = stir.substr(fi);

    return std::stod(subs);
}

double roundDown(double nom) {
    return nom - get_after_point(nom);
}

double roundUp(double nom) {
    if (nom > roundDown(nom)) {
        return roundDown(nom) + 1;
    }
    else { return nom; }
}

double mathRound(double nom) { // Можно и нормально было сделать но мне лень
    return round(nom);
}

int main()
{

    std::cout << mathRound(23.534);
}
