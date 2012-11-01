
all: doc

doc:
	cd doc/design && make
	cd doc/use-cases && make

.PHONY: doc
