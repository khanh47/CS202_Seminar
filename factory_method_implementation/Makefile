CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic
TARGET := main.exe

SRCS := \
	main.cpp \
	Logistics/Logistics.cpp \
	Logistics/RoadLogistics/RoadLogistics.cpp \
	Logistics/MaritimeLogistics/MaritimeLogistics.cpp \
	Transport/Truck/Truck.cpp \
	Transport/Ship/Ship.cpp

OBJS := $(SRCS:.cpp=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(TARGET)
