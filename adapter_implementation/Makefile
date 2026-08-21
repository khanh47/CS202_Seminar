CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic
TARGET := main.exe

SRCS := \
	main.cpp \
	JSONAnalyticsLibrary.cpp \
	XMLToJsonAnalyticsAdapter.cpp \
	StockAppUI.cpp

OBJS := $(SRCS:.cpp=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(TARGET)
