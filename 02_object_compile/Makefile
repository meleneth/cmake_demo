# Compiler and flags
CXX      := g++
CXXFLAGS := -Wall -Wextra -O2 -MMD -MP

# Sources, objects, deps
SRCS := main.cpp secondary.cpp
OBJS := $(SRCS:.cpp=.o)
DEPS := $(OBJS:.o=.d)

# Target
TARGET := some_program

# Default rule
all: $(TARGET)

# Link
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@

# Compile (suffix rule)
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Auto-include generated dependency files
-include $(DEPS)

# Clean
.PHONY: clean
clean:
	rm -f $(OBJS) $(DEPS) $(TARGET)
