#include "LLGAnalysis.h"
#include <vector>
#include <string>

int main( int argc, char **argv ) {

    LLGAnalysis *analysis = LLGAnalysis::GetInstance( argv[1] );
    cout << "now initing" << endl;
    analysis->Init();
    cout << "starting evt loop" << endl;
    analysis->RunEventLoop();
    cout << "finishing " << endl;
    analysis->FinishRun();
    return 0;
}
