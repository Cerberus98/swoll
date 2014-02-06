CC=g++
INCLUDE=-I./include -I./scoundrel_include
CFLAGS=-lsfml-window -lsfml-system -lsfml-graphics -lsfml-audio -wALL -ljson -Qunused-arguments
# -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.8.sdk/usr/include/python2.7
SOURCE_DIR=src
OBJ_DIR=obj
SOURCES=$(wildcard $(SOURCE_DIR)/*.cpp)
OBJS=$(SOURCES:$(SOURCE_DIR)/%.cpp=$(OBJ_DIR)/%.o)
EXECUTABLE=swoll

all: $(EXECUTABLE)

obj:
	mkdir -p $(OBJ_DIR)

$(OBJS): $(OBJ_DIR)/%.o : $(SOURCE_DIR)/%.cpp | obj
	$(CC) $(INCLUDE) -c $< -o $@

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXECUTABLE) -L./scoundrel_lib -lscoundrel

.PHONY: clean

clean:
	-rm $(OBJ_DIR)/*.o
	-rm $(EXECUTABLE)
