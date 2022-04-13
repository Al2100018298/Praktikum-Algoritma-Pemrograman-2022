#include <iostream>
#include <fstream>
#include "input.h"
#include "proses.h"
#include "output.h"

int main(){
	Input input;
	input.cetak();
	input.toFile();

	Proses proses;
	proses.getData();
	proses.toFile();

	Output output;
	output.getData();
	output.cetak();
	return 0;
}
