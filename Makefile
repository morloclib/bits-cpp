test:
	morloc make test.loc
	./test-bits-cpp test

clean:
	rm -rf test-bits-cpp test-bits-cpp.manifest pool*
