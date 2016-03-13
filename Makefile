CXXFLAGS=-Wall -O3 -I../common -I.

MAGICK_CXXFLAGS=`GraphicsMagick++-config --cppflags --cxxflags`
MAGICK_LDFLAGS=`GraphicsMagick++-config --ldflags --libs`

FFMPEG_LDFLAGS=`pkg-config --cflags --libs  libavcodec libavformat libswscale libavutil`

all : font-example


font-example : font-example.cc $(OBJECTS)

send-image : send-image.cc $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(MAGICK_CXXFLAGS) -o $@ $^ $(MAGICK_LDFLAGS)

send-video: send-video.cc $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(FFMPEG_LDFLAGS)

% : %.cc
	$(CXX) $(CXXFLAGS) -o $@ $^

font-example : font-example.cc  $(OBJECTS)
	$(CXX) $(CXXFLAGS)  -o $@ $^
clean:
	rm -f send-image send-video font-example $(OBJECTS)
