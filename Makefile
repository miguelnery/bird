RAYLIB_FLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
main:
	cc -g -o bunda main.c ArrowKeys.c GravitySimulation.c Window.c $(RAYLIB_FLAGS)
clean:
	rm bunda