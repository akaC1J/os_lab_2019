#include <unistd.h>

int main( int argc, char **argv ) {
	int pid = fork();

	if ( pid == 0 ) {
		execvp( "./find_MIN_MAX", argv);
		return 0;
	}
	return 0;
}