#include "Debug/HcalCompareChains/interface/LinearizedTP.h"

LinearizedTP::LinearizedTP(const HcalUpgradeTriggerPrimitiveDigi& d) :
   ieta(d.id().ieta()),
   iphi(d.id().iphi())
{
}

/* ClassImp(LinearizedTP); */