#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    int rl = std::stoi(std::string(argv[1]));
    double td = std::stod(std::string(argv[2]));
    double theta = std::stod(std::string(argv[3]));
    std::string genome = argv[4];
    std::string out_stem = argv[5];

    std::cout << "read_len = " << rl << "\n";
    std::cout << "target_depth = " << td << "\n";
    std::cout << "theta = " << theta << "\n";
    std::cout << "genome = " << genome << "\n";
    std::cout << "out_stem = " << out_stem << "\n";
    return 0;
}
