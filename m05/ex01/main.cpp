#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat chafik = Bureaucrat("Chafik", 149);
        Bureaucrat arthur = Bureaucrat("Arthur", 50);
        Form e42 = Form("bouteille sur la table autorisée", 50, 50);

        std::cout << chafik << std::endl;
        std::cout << chafik << std::endl;
        std::cout << e42 << std::endl;

        chafik.signForm(e42);
        arthur.signForm(e42);
        std::cout << e42 << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
