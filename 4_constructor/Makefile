CFLAGS   += -O2  -s  -Wall
GCC       =  gcc





TESTS    = unit_tests_in_c_32bit \
           unit_tests_in_c_64bit



SOURCES  = unit_tests_in_c.c  \
           unit_tests_in_c2.c





.PHONY: all
all: clean  $(TESTS)



.PHONY: clean
clean:
	-@rm  *.o
	-@rm  *.*~
	-@rm  $(TESTS)



unit_tests_in_c_32bit:
	$(GCC)  $(SOURCES) -o $@  -m32  $(CFLAGS)
	@echo "  ---- Compiled $@ ----"
	@echo ""



unit_tests_in_c_64bit:
	$(GCC)  $(SOURCES) -o $@  -m64  $(CFLAGS)
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

