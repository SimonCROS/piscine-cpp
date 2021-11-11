#include <iostream>
#include <string>
#include <cmath>
#include <climits>
#include <iomanip>

double to_double(const std::string &s) {
    char *end;
    double val = strtod(s.c_str(), &end);
    if (*end == 'f')
        end++;
    if (end == s.c_str() || *end != '\0')
        throw std::invalid_argument("");
    return val;
}

void parse_all(const std::string &str) {
    double v;

    if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
        v = static_cast<double>(str[0]);
    else
        v = to_double(str);

    std::cout << "char: ";
    if (v != v || v < CHAR_MIN || v > CHAR_MAX || std::isinf(v))
        std::cout << "impossible" << std::endl;
    else if (std::isprint(v))
        std::cout << "'" << static_cast<char>(v) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;

    std::cout << "int: ";
    if (v != v || v < INT_MIN || v > INT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(v) << std::endl;

    std::cout << "float: ";
    std::cout << std::fixed << std::setprecision(1) << static_cast<float>(v) << "f" << std::endl;

    std::cout << "double: ";
    std::cout << std::fixed << std::setprecision(1) << static_cast<double>(v) << std::endl;
}

int main(int argc, char **argv) {
    if (argc != 2)
        return EXIT_FAILURE;
    try {
        parse_all(argv[1]);
    } catch (std::exception &e) {
        std::cout << "char:   impossible" << std::endl;
        std::cout << "int:    impossible" << std::endl;
        std::cout << "float:  impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}
