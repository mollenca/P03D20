SHELL = /bin/sh

CC=gcc
CFLAGS=-c -Wall -Wextra
# -Werror

OUT=../build/

########### BASIC ###################################################################################
EX_FILE1=Graph
TARGET1=$(OUT)$(EX_FILE1)

########### BASIC ###################################################################################
all: graph 

.PHONY: graph
graph: $(TARGET1)

$(TARGET1): $(OUT)graph.o $(OUT)graph_io.o $(OUT)polish.o $(OUT)calculate.o
	@echo "Linking …"
	$(CC) $^ -o $@

$(OUT)graph.o: graph.c
#	clang-format -n $<
#	cppcheck --enable=all --suppress=missingIncludeSystem $<
	$(CC) $(CFLAGS) -DQUEST_1 $< -o $@

$(OUT)graph_io.o: graph_io.c
#	clang-format -n $<
#	cppcheck --enable=all --suppress=missingIncludeSystem $<
	$(CC) $(CFLAGS) -DQUEST_1 $< -o $@

$(OUT)polish.o: polish.c
#	clang-format -n $<
#	cppcheck --enable=all --suppress=missingIncludeSystem $<
	$(CC) $(CFLAGS) -DQUEST_1 $< -o $@

$(OUT)calculate.o: calculate.c
#	clang-format -n $<
#	cppcheck --enable=all --suppress=missingIncludeSystem $<
	$(CC) $(CFLAGS) -DQUEST_1 $< -o $@


#####################################################################################################

.PHONY: clean
clean:
	@echo Cleaning... 
	@rm -rf $(OUT)*.o $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4) $(TARGET5) $(TARGET6) $(TARGET7) $(TARGET8)

.PHONY: rebuild
rebuild:	clean all
