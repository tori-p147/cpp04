#include <Brain.hpp>

Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
	int i = 0;
	while(i < 100)
	{
		ideas[i] = "new idea";
		i++;
	}
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor" << std::endl;
	int i = 0;
	while(i < 100)
	{
		ideas[i] = copy.ideas[i];
		i++;
	}
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Brain assign operator" << std::endl;
	if (this == &copy)
		return *this;
    int i = 0;
	while(i < 100)
	{
		ideas[i] = copy.ideas[i];
		i++;
	}
    return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}