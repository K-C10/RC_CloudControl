
WebcamTest.exe:
	g++ ./src/WebcamTester/WebcamTest.cpp -o WebcamTest.exe `pkg-config --cflags --libs opencv4`

run: WebcamTest.exe
	./WebcamTest.exe

clean:
	rm ./*.exe