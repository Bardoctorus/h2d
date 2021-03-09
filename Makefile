CC=gcc
CFLAGS=-I.


default:
	gcc h2d.c utils.c -I. -o h2d -Wall -W 


clean:
	rm -rf h2d



