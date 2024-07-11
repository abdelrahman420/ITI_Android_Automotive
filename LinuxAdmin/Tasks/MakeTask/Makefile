CC = gcc
INCS = -I include
SRC_DIR = src
BIN_DIR = bin
BUILD_DIR = build

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%.o,$(SRCS))

Target = $(BUILD_DIR)/app
all = $(Target)

$(Target) : $(OBJS)
	$(CC) -o $@ $^

$(BIN_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(BIN_DIR)
	$(CC) $(INCS) -c $< -o $@

clean:
	rm -f $(BIN_DIR)/*.o $(TARGET)

print:
	@$(foreach src, $(SRCS), echo $(src);)
	@$(foreach obj, $(OBJS), echo $(obj);)

.PHONY: all clean print
