NAME=bureaucrat
SRCS=Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyCreationForm.cpp PresidentialPardonForm.cpp Intern.cpp main.cpp
OBJS=$(SRCS:.cpp=.o)
CXX=c++
CXXFLAGS=-Wall -Werror -Wextra -std=c++98

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o  $@

clean:
	rm -rf $(OBJS)

fclean:clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re