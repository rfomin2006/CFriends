#include <iostream>
#include "Rectangle.h"
#include "BankSystem.h"
#include "Vector.h"
#include "Service.h"

int main() {
	Smartphone phone1("Samsa", "A10", 6.66, 8, 6400, "DDR9", 64000, "Droid", 12, 2400, "1234567890");
	Smartphone phone2("Pear", "XXL16PROMAX", 8.4, 12, 25600, "DDR27", 512000, "JLOCb", 2, 12000, "0987654321");
	Client client;
	client.phoneList()->push_back(&phone1);
	client.phoneList()->push_back(&phone2);
	for (const auto& phone : *client.phoneList()) {
		std::cout << client.getManufacturer(phone) << " " << client.getModel(phone)
			<< "\nCPU freq: " << client.getCpuFreq(phone) << " count: "
			<< client.getCpuCount(phone) << "\nRAM size: " << client.getRamSize(phone)
			<< " type: " << client.getRamType(phone) << "\nMemory: " << client.getMemSize(phone)
			<< "\nOS: " << client.getOsType(phone) << "\nApplications:\n\t" << "count: "
			<< client.getApplicationCount(phone) << "\n\tUsed memory: " << client.getUsedMem(phone)
			<< "\nIMEI: " << client.getImei(phone) << "\n";
		std::cout << std::endl;
	}
	std::cout << "Phone 1 app count: " << client.getApplicationCount(&phone1) << std::endl;
	std::cout << "Phone 2 app count: " << client.getApplicationCount(&phone2) << std::endl;
	std::cout << "Phone 1 IMEI: " << client.getImei(&phone1) << std::endl;
	std::cout << "Phone 2 OS type: " << client.getOsType(&phone2) << std::endl;
	client.setOsType(&phone2, "Droid");
	std::cout << "Phone 2 new OS type: " << client.getOsType(&phone2) << std::endl;
	std::cout << "Phone 1 app count: " << client.getApplicationCount(&phone1) << " their size: " << client.getUsedMem(&phone1) << std::endl;
	client.hardReset(&phone1);
	std::cout << "Phone 1 app count after hard reset: " << client.getApplicationCount(&phone1) << " their size: " << client.getUsedMem(&phone1) << std::endl;
	return 0;
}