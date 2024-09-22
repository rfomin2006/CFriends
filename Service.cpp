#include "Service.h"

Smartphone::Smartphone(std::string manufacturer, std::string model, double cpuFreq, unsigned cpuCount,
	unsigned ramSize, std::string ramType, unsigned memSize, std::string osType, unsigned applicationCount,
	unsigned usedMem, std::string imei)
{
	if (
		(applicationCount == 0 && applicationCount != usedMem) ||
		(usedMem == 0 && usedMem != applicationCount)
		) throw "Used memory can be zero only if applications count is zero!";
	this->manufacturer = manufacturer;
	this->model = model;
	this->cpuFreq = cpuFreq;
	this->cpuCount = cpuCount;
	this->ramSize = ramSize;
	this->ramType = ramType;
	this->memSize = memSize;
	this->osType = osType;
	this->applicationCount = applicationCount;
	this->usedMem = usedMem;
	this->imei = imei;
}

Client::Client()
{
	this->phones = std::vector<Smartphone*>();
}

Client::Client(std::vector<Smartphone*> phones)
{
	this->phones = phones;
}

std::vector<Smartphone*>* Client::phoneList()
{
	return &this->phones;
}

std::string Client::getManufacturer(const Smartphone* phone)
{
	return phone->manufacturer;
}

std::string Client::getModel(const Smartphone* phone)
{
	return phone->model;
}

float Client::getCpuFreq(const Smartphone* phone)
{
	return phone->cpuFreq;
}

int Client::getCpuCount(const Smartphone* phone)
{
	return phone->cpuCount;
}

int Client::getRamSize(const Smartphone* phone)
{
	return phone->ramSize;
}

std::string Client::getRamType(const Smartphone* phone)
{
	return phone->ramType;
}

int Client::getMemSize(const Smartphone* phone)
{
	return phone->memSize;
}

void Client::setOsType(Smartphone* phone, std::string osType)
{
	phone->osType = osType;
}

std::string Client::getOsType(const Smartphone* phone)
{
	return phone->osType;
}

int Client::getApplicationCount(const Smartphone* phone)
{
	return phone->applicationCount;
}

int Client::getUsedMem(const Smartphone* phone)
{
	return phone->usedMem;
}

void Client::setApplicationCountAndUsedMem(Smartphone* phone, int applicationCount, int usedMem)
{
	if (
		(applicationCount == 0 && applicationCount != usedMem) ||
		(usedMem == 0 && usedMem != applicationCount)
		) throw "Used memory can be zero only if applications count is zero!";
	phone->applicationCount = applicationCount;
	phone->usedMem = usedMem;
}

int Client::getAverageApplicationCount(const Smartphone* phone, int applicationSize)
{
	return (phone->memSize - phone->usedMem) / applicationSize;
}

void Client::hardReset(Smartphone* phone)
{
	phone->applicationCount = 0;
	phone->usedMem = 0;
}

std::string Client::getImei(const Smartphone* phone)
{
	return phone->imei;
}
