RAYLIB_FLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
main:
	cc -g -o game main.c BirdManager.c Jump.c GravitySimulation.c Window.c $(RAYLIB_FLAGS)
	./game
clean:
	rm game