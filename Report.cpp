#include "Report.h"
#include<string.h>
#include<iostream>
using namespace std;
Report::Report() {

}
Report::Report(int rid, char rtype[100], char rdate[20]) {
	report_id = rid;
	strcpy(report_type, rtype);
	strcpy(report_date, rdate);

}
void Report::AddReportDetails() {

}
void Report::DisplayReportDetails() {

}
void Report::GenerateDonateReport(Donate* Donate1, Donate* Donate2) {
	cout << Donate1.GetDonationAmount() + Donate2.GetDonationAmount() << endl;

}


