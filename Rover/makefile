run: WebcamTest.exe
	./WebcamTest.exe

WebcamTest.exe: WebcamTest.o
	g++ ./WebcamTest.o -o ./WebcamTest.exe

WebcamTest.o: 
	g++ ./src/WebcamTester/WebcamTest.cpp -o WebcamTest.o `pkg-config --cflags --libs opencv4`

#g++ main.cpp -o output_executable `pkg-config --cflags --libs opencv4`

# g++ main.cpp -o MyExecutable -I/usr/local/include/opencv4 -L/usr/local/lib -lopencv_core -lopencv_highgui ...
# (add all necessary libraries with -l flags)
