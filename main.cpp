#include <iostream>
#include "FrameFactory.h"
using namespace std;

int main() {
    Frame* dashdeFrame = FrameFactory::createFrame("dashed");
    Frame* dottedFrame = FrameFactory::createFrame("dotted");
    Frame* solidFrame = FrameFactory::createFrame("solid");
    Frame* wavyFrame = FrameFactory::createFrame("wavy");

    std::cout << "dashedFrame->print(): " << endl;
    dashdeFrame->print();

    std::cout << "dottedFrame->print(): " << endl;
    dottedFrame->print();

    std::cout << "solidFrame->print(): " << endl;
    solidFrame->print();

    std::cout << "wavyFrame->print(): " << endl;
    wavyFrame->print();

    delete dashdeFrame;
    delete dottedFrame;
    delete solidFrame;
    delete wavyFrame;

	cin.get();

    return 0;
}
