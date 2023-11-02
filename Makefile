RAYLIB_FLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
main:
	cc -g -o bunda main.c BirdManager.c Jump.c GravitySimulation.c Window.c $(RAYLIB_FLAGS)
	./bunda
clean:
	rm bunda