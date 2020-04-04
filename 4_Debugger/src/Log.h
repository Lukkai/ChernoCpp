#pragma once  //zabezpiecza przed multiplikowaniem headerow w jednym pliku, zeby sie nie nakladaly

/* to samo robi
#ifndef _LOG_H
#define _LOG_H

void ...
void ...
struct ...

#endif

gdybym powtorzyl ten sam kawalek ifndef, to za drugim razem to zabezpieczenie ifndef wyciszyloby mi ten kawalek kodu w srodku ifndef.
to samo robi teraz #pragma once, jest to nowe rozwiniecie w cpp ktore jest przydatne i je warto stosowac
*/
void Log(const char* message);
void InitLog();
