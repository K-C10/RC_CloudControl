run: WebcamTest.exe
	./WebcamTest.exe

WebcamTest.exe: WebcamTest.o
	g++ ./WebcamTest.o -o ./WebcamTest.exe

WebcamTest.o: 
	g++ ./src/WebcamTester/WebcamTest.cpp -o WebcamTest.o $(pkg-config --cflags --libs opencv4)