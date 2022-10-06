COMP = g++ -Wall -D DEBUG


all:	Test1


Test1:	Test1.cpp Modele.o
		$(COMP) Test1.cpp  Modele.o -o Test1

Modele.o:	Modele.cpp Modele.h
			$(COMP) Modele.cpp -c