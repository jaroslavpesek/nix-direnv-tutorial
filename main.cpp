#include <iostream>
#include <unirec++/unirec.hpp>

int main (int argc, char *argv[]) {
    std::cout << "Hello World!" << std::endl;
    Nemea::Unirec unirec({1, 1, "something", "description"});
    unirec.init(argc, argv);
    return 0;
}
