#pragma once
class Tier {
public:
	virtual ~Tier(); // virtueller Destruktor
	virtual void move() = 0; // rein virtuelle Methode
 };
