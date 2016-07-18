


makeprog1: prog1.cpp
	g++ -o builddir/prog1.out -g -Wall prog1.cpp

makeprog2: prog2.cpp
	g++ -o builddir/prog2.out -g -Wall prog2.cpp

clean:
	rm -rf builddir/*

.PHONY: list
list:
	@$(MAKE) -pRrq -f $(lastword $(MAKEFILE_LIST)) : 2>/dev/null \
	| awk -v RS= -F: '/^# File/,/^# Finished Make data base/ {if ($$1 !~ "^[#.]") {print $$1}}' \
	| sort | egrep -v -e '^[^[:alnum:]]' -e '^$@$$'