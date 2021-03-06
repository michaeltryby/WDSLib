#include "ELVA.h"


CPUcycle::CPUcycle(){

}

CPUcycle::~CPUcycle(){

}

void CPUcycle::DispCPUtime(ostream& stream)
{
    for (map<string,long double>::const_iterator it=timespend.begin();it!=timespend.end();++it){
        stream<<"timespend["<<it->first<<"] = "<<it->second<<endl;
        //printf("timespend[%s]=%lf\n",(it->first).c_str(),it->second);
    }

}

void CPUcycle::SampleCPUCycle(string functionName, string position)
{
//-------------------------------------------------------------------------
//                               
//
//  Date:    10/09/2014
//  Author:  Mengning Qiu
//  Input:   
//  Output:  
//  Purpose: 
//  calls:   
//  called from: 
//-------------------------------------------------------------------------s
    long double time_usec;
	#if defined(__linux__) ||defined(__MACH__)
		struct timeval time;
		gettimeofday(&time,NULL);
		time_usec=time.tv_sec*1000000+time.tv_usec;
	#elif defined(_WIN32) || defined(__CYGWIN__)
		LARGE_INTEGER frequency,current;    
        QueryPerformanceFrequency(&frequency);
		QueryPerformanceCounter(&current);
		time_usec=static_cast<double>(current.QuadPart)/frequency.QuadPart*1000;
	#endif
	if(position=="start")
		Time_start[functionName]=time_usec;
	else if (position=="end"){
		Time_end[functionName]=time_usec;
		if ( Time_start.count(functionName)>0 )
			timespend[functionName]=Time_end[functionName]-Time_start[functionName]+timespend[functionName];
		else{
			cout<<"The start of functionName"<<functionName<<" is not sampled"<<endl;
			return;
		}

	}else{
		printf("Incorrect position key\n");
    	return;
    }
}
















