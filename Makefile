all : font-gen

font-gen : font-gen.cc $(OBJECTS)

% : %.cc
	$(CXX) $(CXXFLAGS) -o $@ $^

font-gen : font-gen.cc  $(OBJECTS)
	$(CXX) $(CXXFLAGS)  -o $@ $^
clean:
	rm -f font-gen $(OBJECTS)
