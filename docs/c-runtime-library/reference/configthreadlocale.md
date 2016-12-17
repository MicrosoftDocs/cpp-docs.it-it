---
title: "_configthreadlocale | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_configthreadlocale"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-locale-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_configthreadlocale"
  - "configthreadlocale"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_configthreadlocale (funzione)"
  - "configthreadlocale (funzione)"
  - "impostazioni locali, per thread"
  - "impostazione locale per thread"
  - "impostazioni locali del thread"
ms.assetid: 10e4050e-b587-4f30-80bc-6c76b35fc770
caps.latest.revision: 24
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _configthreadlocale
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Configurare le opzioni per thread locali.  
  
## Sintassi  
  
```  
int _configthreadlocale(  
   int type  
);  
```  
  
#### Parametri  
 `type`  
 Opzione da impostare.  Una delle opzioni elencate nella seguente tabella.  
  
## Valore restituito  
 Lo stato di thread locale precedente \(`_DISABLE_PER_THREAD_LOCALE` o `_ENABLE_PER_THREAD_LOCALE`\), o \-1 in caso di errore.  
  
## Note  
 La funzione `_configurethreadlocale` è utilizzata per controllare l'utilizzo di thread specifici locali.  Utilizzare una di queste opzioni per specificare o per determinare lo stato delle impostazioni locali per thread:  
  
 `_ENABLE_PER_THREAD_LOCALE`  
 Fare in modo che il thread corrente utilizzi un thread specifico locale.  Le chiamate successive a `setlocale` in questo thread influiscono solamente sulle impostazioni locali del thread.  
  
 `_DISABLE_PER_THREAD_LOCALE`  
 Fare in modo che il thread corrente utilizzi le impostazioni locali globali.  Le chiamate successive a `setlocale` in questo thread influiscono su altri thread che utilizzano le impostazioni locali globali.  
  
 `0`  
 Recupera l'impostazione corrente per il thread specifico.  
  
 Queste funzioni influiscono sul comportamento di `setlocale`, `_tsetlocale`, `_wsetlocale`, `_beginthread`, e `_beginthreadex`.  Se un altro metodo viene utilizzato per creare i thread, le impostazioni locali non hanno alcun effetto sui thread.  
  
 Quando le impostazioni locali dei thread sono disabilitati, qualsiasi chiamata successiva a `setlocale` o a `_wsetlocale` modifica delle impostazioni locali di tutti thread.  Quando le impostazioni locali di thread sono abilitate, solo `setlocale` o `_wsetlocale` influiscono sulle impostazioni locali del thread corrente.  
  
 Se si utilizza `_configurethreadlocale` per attivare le impostazioni locali per thread, è consigliabile chiamare `setlocale` o `_wsetlocale` per impostare le impostazioni locali preferite in quel thread subito dopo.  
  
 Se `type` non è uno dei valori riportati nella tabella, questa funzione invoca il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` a `EINVAL` e restituisce \-1.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_configthreadlocale`|\<locale.h\>|  
  
## Esempio  
  
```  
// crt_configthreadlocale.cpp  
//   
// This program demonstrates the use of _configthreadlocale when  
// using is two independent threads.  
//  
  
#include <locale.h>  
#include <process.h>  
#include <windows.h>  
#include <stdio.h>  
#include <time.h>  
  
#define BUFF_SIZE 100  
  
// Retrieve the date and time in the current  
// locale's format.  
int get_time(unsigned char* str)  
{  
    __time64_t  ltime;  
    struct tm   thetime;  
  
    // Retieve the time  
    _time64(&ltime);  
    _gmtime64_s(&thetime, &ltime);  
  
    // Format the current time structure into a string  
    // using %#x is the long date representation,  
    // appropriate to the current locale  
    if (!strftime((char *)str, BUFF_SIZE, "%#x",   
                  (const struct tm*)&thetime))  
    {  
        printf("strftime failed!\n");  
        return -1;  
    }  
    return 0;  
}  
  
// This thread sets its locale to German  
// and prints the time.  
unsigned __stdcall SecondThreadFunc( void* pArguments )  
{  
    unsigned char str[BUFF_SIZE];  
  
    // Set the thread code page  
    _setmbcp(_MB_CP_ANSI)  
  
    // Set the thread locale  
    printf("The thread locale is now set to %s.\n",  
           setlocale(LC_ALL, "German"));  
  
    // Retrieve the time string from the helper function  
    if (get_time(str) == 0)  
    {  
        printf("The time in German locale is: '%s'\n", str);  
    }  
  
    _endthreadex( 0 );  
    return 0;  
}   
  
// The main thread spawns a second thread (above) and then  
// sets the locale to English and prints the time.  
int main()  
{   
    HANDLE          hThread;  
    unsigned        threadID;  
    unsigned char   str[BUFF_SIZE];  
  
    // Configure per-thread locale to cause all subsequently created   
    // threads to have their own locale.  
    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);  
  
    // Retrieve the time string from the helper function  
    printf("The thread locale is now set to %s.\n",  
           setlocale(LC_ALL, "English"));  
  
    // Create the second thread.  
    hThread = (HANDLE)_beginthreadex( NULL, 0, &SecondThreadFunc,  
                                      NULL, 0, &threadID );  
  
    if (get_time(str) == 0)  
    {  
        // Retrieve the time string from the helper function  
        printf("The time in English locale is: '%s'\n\n", str);  
    }  
  
    // Wait for the created thread to finish.  
    WaitForSingleObject( hThread, INFINITE );  
  
    // Destroy the thread object.  
    CloseHandle( hThread );  
}  
```  
  
  **Le impostazioni locali del thread sono impostate su English\_United States.1252.**  
**Data e ora nelle impostazioni locali inglesi: "Mercoledì 12 maggio 2004"**  
**Le impostazioni locali del thread sono ora impostate su German\_Germany.1252.**  
**Il tempo nelle impostazioni locali per la lingua tedesca è: 'Mittwoch, 12.  Mai 2004'**    
## Equivalente .NET Framework  
 Non applicabile. Tuttavia, vedere [Utilizzo della proprietà CurrentCulture](http://msdn.microsoft.com/it-it/3156042d-6082-4205-90b4-c917ae6a3ba6).  
  
## Vedere anche  
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [\_beginthread, \_beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Multithreading e impostazioni locali](../../parallel/multithreading-and-locales.md)