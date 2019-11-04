all: simple

simple: Account.o Transaction.o index.o
	g++ -std=c++11 Account.o Transaction.o index.o -o Simple.out

Account.o: Account.cpp Account.h Transaction.h
	g++ -std=c++11 -c Account.cpp

Transaction.o: Transaction.cpp Transaction.h
	g++ -std=c++11 -c Transaction.cpp

index.o: index.cpp Account.h
	g++ -std=c++11 -c index.cpp
