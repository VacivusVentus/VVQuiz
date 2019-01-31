#include <stdio.h>
#include <CL/cl.hpp>
#include <iostream>
#include <lodepng.h>

const char *code = R"(
  kernel void VVProg(global char *buffimg, uint width, uint height, global char *outinf) {
  }
)";

using namespace std;

void SepFile()
{
	std::vector<cl::Platform>all_gpu_platf;
	cl::Platform::get(&all_gpu_platf);
	if (all_gpu_platf.empty()) return;
	std::vector<cl::Device> all_dev_gpu;
	for (auto i = 0; i < all_gpu_platf.size(); i++)
	{
		std::vector<cl::Device>gpus;
		all_gpu_platf[i].getDevices(CL_DEVICE_TYPE_GPU, &gpus);
		for (auto j = 0; j < gpus.size(); j++)
		{
			all_dev_gpu.push_back(gpus[j]);
			auto name = gpus[j].getInfo<CL_DEVICE_NAME>();
			cout << "Device: " << name << endl;
		}
	}
	cl::Context context(all_dev_gpu);
	cl::Program::Sources source(1, std::make_pair(code, strlen(code) + 1));
	cl::Program program(context, source);
	auto hr = program.build(all_dev_gpu);
	if (hr)
	{
		cout << "Figa'n'kee" << endl;
		return;
	}
	cl::Kernel kernel(program, "VVProg");

	cl::Buffer buffinp;
	cl::CommandQueue quene(context, all_dev_gpu[0]);
	std::vector<unsigned char>ch;
	lodepng::load_file(ch, "FILE.txt");
}

int main (int argc, char *argv[])
{
	SepFile();
	if (argc < 2)
	{
		printf("--h for help");
		return 0;
	}
    return 0;    
}