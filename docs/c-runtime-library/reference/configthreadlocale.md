---
title: _configthreadlocale | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _configthreadlocale
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-locale-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _configthreadlocale
- configthreadlocale
dev_langs:
- C++
helpviewer_keywords:
- configthreadlocale function
- locales, per-thread
- _configthreadlocale function
- per-thread locale
- thread locale
ms.assetid: 10e4050e-b587-4f30-80bc-6c76b35fc770
caps.latest.revision: 24
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 1fca01932efb2f80d4aebf94db8900cee5d79805
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="configthreadlocale"></a>_configthreadlocale
Configura le opzioni delle impostazioni locali per thread.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _configthreadlocale(  
   int type  
);  
```  
  
### <a name="parameters"></a>Parametri  
 `type`  
 Opzione da impostare. Una delle opzioni elencate nella tabella seguente.  
  
## <a name="return-value"></a>Valore restituito  
 Lo stato delle impostazioni locali per thread precedente (`_DISABLE_PER_THREAD_LOCALE` o `_ENABLE_PER_THREAD_LOCALE`), oppure -1 in caso di errore.  
  
## <a name="remarks"></a>Note  
 La funzione `_configurethreadlocale` viene usata per controllare l'uso delle impostazioni locali specifiche per thread. Usare una di queste opzioni per specificare o per determinare lo stato delle impostazioni locali dei singoli thread:  
  
 `_ENABLE_PER_THREAD_LOCALE`  
 Fare in modo che il thread corrente usi impostazioni locali specifiche per thread. Le chiamate successive a `setlocale` in questo thread influiscono solo sulle impostazioni locali del thread.  
  
 `_DISABLE_PER_THREAD_LOCALE`  
 Fare in modo che il thread corrente usi le impostazioni locali globali. Le chiamate successive a `setlocale` in questo thread influiscono su altri thread che usano le impostazioni locali globali.  
  
 `0`  
 Recupera l'impostazione corrente per questo particolare thread.  
  
 Tali funzioni influiscono sul comportamento di `setlocale`, `_tsetlocale`, e `_wsetlocale`. Quando le impostazioni locali per thread sono disabilitato, qualsiasi successiva chiamata a `setlocale` o `_wsetlocale` modifica le impostazioni locali di tutti i thread che utilizzano le impostazioni locali globali. Quando le impostazioni locali per thread sono abilitate, `setlocale` o `_wsetlocale` influiscono solo sulle impostazioni locali del thread corrente.  
  
 Se si utilizza `_configurethreadlocale` per abilitare le impostazioni locali per thread, è consigliabile chiamare `setlocale` o `_wsetlocale` per impostare le impostazioni locali preferite in tale thread subito dopo.  
  
 Se `type` non è uno dei valori elencati nella tabella, questa funzione chiama il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce -1.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_configthreadlocale`|\<locale.h>|  
  
## <a name="example"></a>Esempio  
  
```cpp  
// crt_configthreadlocale.cpp  
//   
// This program demonstrates the use of _configthreadlocale when  
// using two independent threads.  
//  
// Compile by using: cl /EHsc /W4 crt_configthreadlocale.cpp 
  
#include <locale.h>  
#include <mbctype.h>  
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
unsigned __stdcall SecondThreadFunc( void* /*pArguments*/ )  
{  
    unsigned char str[BUFF_SIZE];  
  
    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);  

    // Set the thread code page  
    _setmbcp(_MB_CP_ANSI);  
  
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
  
    // Enable per-thread locale causes all subsequent locale   
    // setting changes in this thread to only affect this thread.  
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
  
```Output  
The thread locale is now set to English_United States.1252.  
The time in English locale is: 'Wednesday, May 12, 2004'  
  
The thread locale is now set to German_Germany.1252.  
The time in German locale is: 'Mittwoch, 12. Mai 2004'  
```  
  
## <a name="see-also"></a>Vedere anche  
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [_beginthread, _beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md)   
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Multithreading and Locales](../../parallel/multithreading-and-locales.md) (Multithreading e impostazioni locali)  

