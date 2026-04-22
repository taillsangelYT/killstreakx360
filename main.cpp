/*
This code is currently barely empty, not released.
You could either wait for Cosmos Public Plugin to release.
Thanks!
*/
#include <xtl.h>

void ShowNotification(const char* message)
{
    wchar_t wMessage[256];
    mbstowcs(wMessage, message, strlen(message) + 1);

    XNotifyQueueUI(
        XNOTIFYUI_TYPE_PREFERRED_REVIEW,  
        XUSER_INDEX_ANY,                  
        XNOTIFYUI_PRIORITY_DEFAULT,       
        wMessage,                          
        NULL                               
    );
}


ShowNotification("Killstreak plugin loading.");
