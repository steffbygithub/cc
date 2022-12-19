//steuerung.cpp Hauptdatdei fuer die Ampelsteuerung
#include <iostream>
#include "Ampel.h"

using namespace Ampel;
int main() {
	bool bquit = false;
	int phaseNow = vPhasen[A1RT_A2RT_2].iphase;
	char period = static_cast<char>(eAction(TAG));
	do {
		period = UserAction();
 		showState(static_cast<ePhase>(phaseNow));
		if (period == TAG) {
			phaseNow = switchAmpeln(static_cast<ePhase>(phaseNow));
		}
		else if (period == NACHT) {
		   		phaseNow = switchAmpeln(static_cast<ePhase>(BLINK));
			}
			else if (period == AUS) bquit = true;
	} while (!bquit);
}
