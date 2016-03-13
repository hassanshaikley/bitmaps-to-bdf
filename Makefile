CXXFLAGS=-Wall -O3 -I../common -I.

MAGICK_CXXFLAGS=`GraphicsMagick++-config --cppflags --cxxflags`
MAGICK_LDFLAGS=`GraphicsMagick++-config --ldflags --libs`

FFMPEG_LDFLAGS=`pkg-config --cflags --libs  libavcodec libavformat libswscale libavutil`

all : font-gen

font-gen : font-gen.cc $(OBJECTS)

% : %.cc
	$(CXX) $(CXXFLAGS) -o $@ $^

font-gen : font-gen.cc  $(OBJECTS)
	$(CXX) $(CXXFLAGS)  -o $@ $^
clean:
	rm -f font-gen $(OBJECTS)
