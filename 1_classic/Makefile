CFLAGS   += -O2  -s  -Wall
GCC       =  gcc





# list of tests for build
TESTS  = unit_tests_in_c



SOURCES  = unit_tests_in_c.c



.PHONY: all
all: clean  $(TESTS)



.PHONY: clean
clean:
	-@rm  *.o
	-@rm  *.*~
	-@rm  $(TESTS)





.PHONY: $(TESTS)
$(TESTS):
	$(GCC)  $(SOURCES) -o $@  $(CFLAGS)
	@echo "  ---- Compiled $@ ----"
	@echo ""



.PHONY: debug
debug: CFLAGS  += -DDEBUG
debug: all



.PHONY: help
help:
	@echo "make [command]"
	@echo "command is:"
	@echo "   clean   -  remove all binary files"
	@echo "   all     -  clean and build all tests"
	@echo "   debug   -  build in debug mode (#define DEBUG 1)"
	@echo "   help    -  This help"

