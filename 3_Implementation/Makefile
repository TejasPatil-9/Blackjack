ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  #EXEC = out
   endif
endif

PROJ_NAME = quizgame
TEST_PROJ_NAME = $(PROJ_NAME)

BUILD_DIR = Build

SRC = main.c src/editscore.c src/resetscore.c src/help.c src/showrecord.c
INC = inc/fun.h -Iunity
#PROJECT_OUTPUT = ./a.exe

#all: $(SRC) $(INC)
#gcc $(SRC) -O $(PROJECT_OUTPUT)

#run:$(PROJ_NAME)
#./$(PROJECT_OUTPUT)

TEST_SRC = test/test_quiz_game.c unity/unity.c

#INC = -Iunity

all: $(SRC) $(BUILD_DIR)
	gcc $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

testing: $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*) *.gcda *.gcno *.gcov