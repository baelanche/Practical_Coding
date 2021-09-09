TARGET = fx_main 


OBJS = fx_main.o fx_test.o fx_s.o
SRCS = fx_main.c fx_test.c fx_s.c
CCFLAGS = -g -pg -Wall
FX = 0
	
ifeq ($(FX),2308)
DMACRO=-DFX_S23_08
else ifeq ($(FX),1615)
DMACRO=-DFX_S16_15
else ifeq ($(FX),3231)
DMACRO=-DFX_S32_31
else ifeq ($(FX),4716)
DMACRO=-DFX_S47_16
else 
DMACRO=-DFX_S23_08
endif

$(TARGET): $(OBJS)
	gcc $(CCFLAGS) -o $@ $(OBJS)

%.o : %.c
	gcc $(CCFLAGS) $(DMACRO) -c $<

clean:
	rm -f *.o $(TARGETS)

depend : 
	gccmakedep -- $(CCFLAGS) -- $(SRCS)




