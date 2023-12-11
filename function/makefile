count:demoFunc.o caculateFunc.o
	gcc demoFunc.o caculateFunc.o -o count

demoFunc.o:demoFunc.c
	gcc -c demoFunc.c -o demoFunc.o

caculateFunc.o:caculateFunc.c
	gcc -c caculateFunc.c -o caculateFunc.o  

clean:
	@rm -rf *.o count