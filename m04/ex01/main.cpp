#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Dog *dog = new Dog();

	dog->getBrain().setIdea(0, "Where's the meal?");
	
	Dog *copydog = new Dog(*dog);

	dog->getBrain().setIdea(1, "I am the center of the world");
	copydog->getBrain().setIdea(1, "Am I real?");

	std::cout << maketext("Original", COLOR_GREEN, "") << ": " << dog->getBrain().getIdea(0) << std::endl;
	std::cout << maketext("Copy", COLOR_RED, "") << ": "  << copydog->getBrain().getIdea(0) << std::endl;

	std::cout << maketext("Original", COLOR_GREEN, "") << ": "  << dog->getBrain().getIdea(1) << std::endl;
	std::cout << maketext("Copy", COLOR_RED, "") << ": "  << copydog->getBrain().getIdea(1) << std::endl;

	delete copydog;
	delete dog;

	std::cout << "--------------------" << std::endl;

	int amtOfEachAnimal = 2;
	Animal	*animals[amtOfEachAnimal * 2];
	for (int i = 0; i < amtOfEachAnimal; i++)
		animals[i] = new Dog();
	for (int i = 0; i < amtOfEachAnimal; i++)
		animals[i + amtOfEachAnimal] = new Cat();

	for (int i = 0; i < amtOfEachAnimal * 2; i++)
		delete animals[i];
}
