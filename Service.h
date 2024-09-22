#ifndef SERVICE_H
#define SERVICE_H

#include <string>
#include <vector>
class Client;
class Smartphone
{
	friend class Client;
private:
	std::string manufacturer;
	std::string model;
	double cpuFreq;
	unsigned cpuCount;
	unsigned ramSize;
	std::string ramType;
	unsigned memSize;
	std::string osType;
	int applicationCount;
	int usedMem;
	std::string imei;

public:
	Smartphone(std::string manufacturer, std::string model, double cpuFreq, unsigned cpuCount,
		unsigned ramSize, std::string ramType, unsigned memSize, std::string osType,
		unsigned applicationCount, unsigned usedMem, std::string imei);
};

class Client {
private:
	std::vector<Smartphone*> phones;
public:
	Client();
	Client(std::vector<Smartphone*> phones);

	std::vector<Smartphone*>* phoneList();

	std::string getManufacturer(const Smartphone* phone);
	std::string getModel(const Smartphone* phone);
	float getCpuFreq(const Smartphone* phone);
	int getCpuCount(const Smartphone* phone);
	int getRamSize(const Smartphone* phone);
	std::string getRamType(const Smartphone* phone);
	int getMemSize(const Smartphone* phone);
	void setOsType(Smartphone* phone, std::string osType);
	std::string getOsType(const Smartphone* phone);
	int getApplicationCount(const Smartphone* phone);
	int getUsedMem(const Smartphone* phone);
	void setApplicationCountAndUsedMem(Smartphone* phone, int applicationCount, int usedMem);
	int getAverageApplicationCount(const Smartphone* phone, int applicationSize);
	void hardReset(Smartphone* phone);
	std::string getImei(const Smartphone* phone);
};

#endif