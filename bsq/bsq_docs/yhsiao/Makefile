NAME = bsq
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=./src
IDIR =./include

LIBS=-lm

_DEP = bsq.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEP))

SRC = $(wildcard $(ODIR)/*.c)
OBJS = $(SRC:.c=.o)

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o