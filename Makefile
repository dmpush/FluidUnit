TARGET=fluid
all:
	g++ main.cpp -o $(TARGET)
clean:
	rm -f $(TARGET)
