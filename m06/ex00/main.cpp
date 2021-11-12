#include <iostream>
#include <string>
#include <climits>
#include <iomanip>

double to_double(std::string &s, bool *special) {
    char *end;
    double val;

    std::transform(s.begin(), s.end(), s.begin(), ::tolower);

    if (s.find("nan") == 0 || s.find("inf") != std::string::npos) {
        *special = true;
        if (s[0] == '+')
            s.erase(s.begin());
        if (s.find("inff") != std::string::npos || s.find("nanf") != std::string::npos)
            s.pop_back();
        if (s.length() != (3 + (s[0] == '-')))
            throw std::invalid_argument("");
        val = -1;
    } else if (s.find("+nan") != std::string::npos || s.find("-nan") != std::string::npos) {
        throw std::invalid_argument("");
    } else {
        val = strtod(s.c_str(), &end);
        if (*end == 'f')
            end++;
        if (end == s.c_str() || *end != '\0')
            throw std::invalid_argument("");
    }
    return val;
}

void parse_all(std::string str) {
    double v;
    bool special = false;

    if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
        v = static_cast<double>(str[0]);
    else
        v = to_double(str, &special);

    std::cout << "char: ";
    if (special || v < CHAR_MIN || v > CHAR_MAX)
        std::cout << "impossible" << std::endl;
    else if (std::isprint(v))
        std::cout << "'" << static_cast<char>(v) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;

    std::cout << "int: ";
    if (special || v < INT_MIN || v > INT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(v) << std::endl;

    std::cout << "float: ";
    std::cout << std::fixed << std::setprecision(1);
    if (special)
        std::cout << str;
    else
        std::cout << static_cast<float>(v);
    std::cout << "f" << std::endl;

    std::cout << "double: ";
    std::cout << std::fixed << std::setprecision(1);
    if (special)
        std::cout << str;
    else
        std::cout << static_cast<double>(v);
    std::cout << std::endl;
}

int main(int argc, char **argv) {
    if (argc != 2)
        return EXIT_FAILURE;
    try {
        parse_all(argv[1]);
    } catch (std::exception &e) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}
