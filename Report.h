#pragma once
#include"Donate.h"
class Report
{
private:
	int report_id;
	char report_type[100];
	char report_date[20];



public:
	Report();
	Report(int rid, char rtype[100], char rdate[20]);
	void AddReportDetails();
	void DisplayReportDetails();
	void GenerateDonateReport(Donate*Donate1,Donate*Donate2);
	~Report();

};

