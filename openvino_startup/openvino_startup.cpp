// OpenVINO_Basic.cpp : Defines the entry point for the application.
//

#include "openvino_startup.h"

#include <inference_engine.hpp>

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	cout << InferenceEngine::GetInferenceEngineVersion() << endl;

	int a;

	cin >> a;

	return 0;
}
