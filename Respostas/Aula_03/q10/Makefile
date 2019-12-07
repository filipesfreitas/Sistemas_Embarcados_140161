# directories
TARGET 		:= arg
SOURCE_DIR 	:= ./src
OBJ_DIR 	:= obj
INCLUDE_DIR := include 
BIN_DIR 	:= bin

CC:=gcc -c

SOURCE_EXT	:= cpp
SOURCES		:= $(shell find $(SOURCE_DIR) -type f -name *.$(SOURCE_EXT))
OBJECTS		:= $(patsubs $(SOURCE_DIR)/%,$(OBJ_DIR)/%,$(SOURCES:.$(SOURCE_EXT)=.o))

LIB			:= -lm
INC 		:= -I $(INCLUDE_DIR)
RM 			:= rm -rf

$(TARGET): $(OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CC) -o $@ $^ $(BIN_DIR)/$(TARGET) $(LIB)

$(OBJ_DIR)/%.o: $(SOURCE_DIR)/%.$(SOURCE_EXT)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<
run: $(TARGET)
	./$(BIN_DIR/$(TARGET)
clean:
	$(RM) -r $(OBJ_DIR) $(BIN_DIR)
.PHONY: clean