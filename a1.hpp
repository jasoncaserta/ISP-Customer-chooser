
bool neighborhoodIsViable(const int& numCust,
                          const int& maxBandwidth,
                          const int& maintenanceCost,
                          const int* const reqBand,
                          const int* const reqPrice,
                          bool* const chosenCust) {
    int bandwidthUsed = 0;
    int moneycharged = 0;
    double highestratio = 0;
    //how do we optimize? we only add the most profitable first maybe create
    // an array with the diffrences between reqBand and reqPrice

    double* ratioArray = new double[numCust];
    for(int i = 0; i < numCust; ++i) {
        ratioArray[i] = (double) reqBand[i] / (double) reqPrice[i];
        if(ratioArray[i]>highestratio){
            highestratio = ratioArray[i];
        }
    }
    for(int j = 0; j < numCust; ++j) {
        if (ratioArray[j] < highestratio && bandwidthUsed + reqBand[j] <= maxBandwidth) {
            chosenCust[j] = true;
            bandwidthUsed += reqBand[j];
            moneycharged += reqPrice[j];
        }
    }
    if(moneycharged >= maintenanceCost){
        return true;
    }
    return false;


}



// Bonus function.
/*
bool neighborhoodIsViableMaxProfit(const int& numCust,
                          const int& maxBandwidth,
                          const int& maintenanceCost,
                          const int* const reqBand,
                          const int* const reqPrice,
                          bool* const chosenCust) {
   return false;
}
*/


// Bonus function.
/*
bool neighborhoodIsViablePartialBand(const int& numCust,
                          const int& maxBandwidth,
                          const int& maintenanceCost,
                          const int* const reqBand,
                          const int* const reqPrice,
                          double* const chosenCust) {
   return false;
}
*/