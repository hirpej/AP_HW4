CXX = g++
CXXFLAGS = -std=c++2a -Wall -I h -I /usr/local/include/gtest/ -c
LXXFLAGS = -std=c++2a -Ih -pthread
OBJECTS = ./triangle.o ./square.o ./rectangle.o ./prism.o ./pyramid.o ./main.o ./aphw4_unittest.o
GTEST = /usr/local/lib/libgtest.a
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS) $(GTEST)
./triangle.o: ./triangle.cpp
	$(CXX) $(CXXFLAGS) ./triangle.cpp -o ./triangle.o
./square.o: ./square.cpp
	$(CXX) $(CXXFLAGS) ./square.cpp -o ./square.o
./rectangle.o: ./rectangle.cpp
	$(CXX) $(CXXFLAGS) ./rectangle.cpp -o ./rectangle.o
./prism.o: ./prism.cpp
	$(CXX) $(CXXFLAGS) ./prism.cpp -o ./prism.o
./pyramid.o: ./pyramid.cpp
	$(CXX) $(CXXFLAGS) ./pyramid.cpp -o ./pyramid.o
./aphw4_unittest.o: ./aphw4_unittest.cpp
	$(CXX) $(CXXFLAGS) ./aphw4_unittest.cpp -o ./aphw4_unittest.o
./main.o: ./main.cpp
	$(CXX) $(CXXFLAGS) ./main.cpp -o ./main.o
clean:
	rm -fv $(TARGET) $(OBJECTS)
