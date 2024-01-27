CXX = g++
CXXFLAGS = -Wall -Werror -Wconversion
NAME = supermercado.exe

all:
	$(CXX) -o $(NAME) *.cpp $(CXXFLAGS)

noFlags:
	$(CXX) -o $(NAME) *.cpp

clean:
	rm -f *.o

cleanAll:
	rm -f $(NAME) *.o