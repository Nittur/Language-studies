# Define the compiler to use
CXX = g++

# Define the name of the target executable
TARGET = run

# Define the source file
SRC = virtual_use.cpp

# Default rule to build the executable
# This rule specifies that the target 'virtual' depends on the source file 'virtual.cpp'.
# If 'virtual.cpp' changes, this rule will be triggered to rebuild 'virtual'.
$(TARGET): $(SRC)
	$(CXX) -o $(TARGET) $(SRC)

# Clean rule to remove the generated executable in windows (change to rm -f for linux)
# This rule is used to clean up the directory by removing the 'virtual' executable.
clean:
	del $(TARGET).exe