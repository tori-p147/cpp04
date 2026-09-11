#include <Brain.hpp>

Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
	int i = 0;
	ideas = new std::string[100];
	while(i < 100)
	{
		ideas[i] = "new idea";
		i++;
	}
}

Brain::Brain(const Brain &copy)
{
	ideas = copy.ideas;
}

Brain &Brain::operator=(const Brain &copy)
{
    ideas = copy.ideas;
    return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
	delete[] ideas;
	ideas = nullptr;
	std::cout << ideas << " ideas is null" << std::endl;
}