#include <iostream>
#include <vector>
#include <algorithm>
#include "shape.h"
#include "ex1.cpp"

template <typename T>

//Dobrota Delia711

struct F {
    int x;
    void operator() (T par) {
        par->set_arie(par->get_arie() * x);
    }
};


void apply(std::vector<shape*> v, F<shape*> f) {
    std::cout << "Adauga x: ";
    std::cin >> f.x;
    std::for_each(v.begin(), v.end(), f);
}


int main() {

    F<shape*> f{};
    std::vector<shape*> v;
    v.push_back(new shape("dreptunghi", 10));
    v.push_back(new shape("cerc", 5));

    apply(v, f);
    for (auto const& element : v)
        std::cout << element->str() << '\n';


    int vec[5] = { 1,2,3,4,5 };
    std::cout << add(vec, 0, 4) << std::endl;
    return 0;
}