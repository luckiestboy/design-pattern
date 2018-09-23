#include "FactoryPattern.h"

void main()
{
    SingleCore* pSingleCore = Factory::CreateSingleCore(COREA);
    pSingleCore->show();
    delete pSingleCore;
}