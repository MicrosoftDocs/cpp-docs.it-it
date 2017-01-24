---
title: "Multithreading e impostazioni locali | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "impostazioni locali [C++], multithreading"
  - "multithreading [C++], impostazioni locali"
  - "impostazione locale per thread"
  - "threading [C++], impostazioni locali"
ms.assetid: d6fb159a-eaca-4130-a51a-f95d62f71485
caps.latest.revision: 8
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Multithreading e impostazioni locali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sia la libreria di runtime C che la libreria standard di C\+\+ forniscono supporto per la modifica delle impostazioni locali del programma in uso.  In questo argomento vengono illustrati i problemi che possono sorgere durante l'utilizzo della funzionalità relativa alle impostazioni locali di entrambe le librerie in un'applicazione multithreading.  
  
## Note  
 La libreria di runtime C consente di creare applicazioni multithreading utilizzando le funzioni `_beginthread` e `_beginthreadex`.  In questo argomento vengono illustrate solo le applicazioni multithreading create mediante queste funzioni.  Per ulteriori informazioni, vedere [\_beginthread, \_beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md).  
  
 Per modificare le impostazioni locali mediante la libreria di runtime C, utilizzare la funzione [setlocale](../preprocessor/setlocale.md).  Nelle versioni precedenti di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] questa funzione consente di modificare le impostazioni locali dell'intera applicazione.  La nuova versione supporta invece la modifica delle impostazioni locali per thread  mediante la funzione [\_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md).  Per specificare la modifica delle impostazioni locali tramite [setlocale](../preprocessor/setlocale.md) solo nel thread corrente, chiamare `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)` in tale thread.  Se invece si chiama `_configthreadlocale(_DISABLE_PER_THREAD_LOCALE)`, nel thread verranno utilizzate le impostazioni locali globali e tutte le chiamate a [setlocale](../preprocessor/setlocale.md) nel thread comporteranno la modifica delle impostazioni locali in tutti i thread nei quali non siano state esplicitamente abilitate le impostazioni locali per thread.  
  
 Per modificare le impostazioni locali mediante la libreria di runtime C\+\+, utilizzare la funzione [Classe locale](../standard-library/locale-class.md).  Il metodo [locale::global](../Topic/locale::global.md) consente di modificare le impostazioni locali in tutti i thread per i quali non siano state esplicitamente abilitate le impostazioni locali per thread.  Per modificare le impostazioni locali in un solo thread o in una parte di un'applicazione, è sufficiente creare un'istanza di un oggetto `locale` nel thread o nella parte di codice.  
  
> [!NOTE]
>  Il metodo [locale::global](../Topic/locale::global.md) consente di modificare le impostazioni locali per la libreria standard di C\+\+ e per la libreria di runtime C.  Se si chiama [setlocale](../preprocessor/setlocale.md), tuttavia, verranno modificate solo le impostazioni locali per la libreria di runtime C, mentre la libreria standard di C\+\+ non verrà interessata.  
  
 Negli esempi riportati di seguito viene illustrato l'utilizzo delle funzioni [setlocale](../preprocessor/setlocale.md), [Classe locale](../standard-library/locale-class.md) e [\_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md) per modificare le impostazioni locali di un'applicazione in diversi scenari.  
  
## Esempio  
 In questo esempio il thread principale genera due thread figlio.  Nel primo, Thread A, sono abilitate le impostazioni locali per thread mediante la chiamata a `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)`.  Nel secondo thread, Thread B, come per il thread principale, le impostazioni locali per thread non sono abilitate.  Nel Thread A le impostazioni locali vengono modificate mediante la funzione [setlocale](../preprocessor/setlocale.md) della libreria di runtime C.  
  
 Poiché per il Thread A le impostazioni locali sono configurate per thread, solo per le funzioni della libreria di runtime nel Thread A vengono utilizzate le impostazioni locali per il francese.  Le funzioni della libreria di runtime C nel Thread B e nel thread principale continueranno a utilizzare le impostazioni locali "C".  La funzione [setlocale](../preprocessor/setlocale.md) inoltre non influenza le impostazioni locali della libreria standard di C\+\+, pertanto in tutti gli oggetti della libreria standard C\+\+ verranno utilizzate le impostazioni locali "C".  
  
```  
// multithread_locale_1.cpp  
// compile with: /EHsc /MD  
#include <clocale>  
#include <cstdio>  
#include <locale>  
#include <process.h>  
#include <windows.h>  
  
#define NUM_THREADS 2  
using namespace std;  
  
unsigned __stdcall RunThreadA(void *params);  
unsigned __stdcall RunThreadB(void *params);  
  
BOOL localeSet = FALSE;  
HANDLE printMutex = CreateMutex(NULL, FALSE, NULL);  
  
int main()  
{  
    HANDLE threads[NUM_THREADS];  
  
    unsigned aID;  
    threads[0] = (HANDLE)_beginthreadex(  
        NULL, 0, RunThreadA, NULL, 0, &aID);  
  
    unsigned bID;  
    threads[1] = (HANDLE)_beginthreadex(  
        NULL, 0, RunThreadB, NULL, 0, &bID);  
  
    WaitForMultipleObjects(2, threads, TRUE, INFINITE);  
  
    printf_s("[Thread main] Per-thread locale is NOT enabled.\n");  
    printf_s("[Thread main] CRT locale is set to \"%s\"\n",  
        setlocale(LC_ALL, NULL));  
    printf_s("[Thread main] locale::global is set to \"%s\"\n",  
        locale().name().c_str());  
  
    CloseHandle(threads[0]);  
    CloseHandle(threads[1]);  
    CloseHandle(printMutex);  
  
    return 0;  
}  
  
unsigned __stdcall RunThreadA(void *params)  
{  
    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);  
    setlocale(LC_ALL, "french");  
    localeSet = TRUE;  
  
    WaitForSingleObject(printMutex, INFINITE);  
    printf_s("[Thread A] Per-thread locale is enabled.\n");  
    printf_s("[Thread A] CRT locale is set to \"%s\"\n",  
        setlocale(LC_ALL, NULL));  
    printf_s("[Thread A] locale::global is set to \"%s\"\n\n",  
        locale().name().c_str());  
    ReleaseMutex(printMutex);  
  
    return 1;  
}  
  
unsigned __stdcall RunThreadB(void *params)  
{  
    while (!localeSet)  
        Sleep(100);  
  
    WaitForSingleObject(printMutex, INFINITE);  
    printf_s("[Thread B] Per-thread locale is NOT enabled.\n");  
    printf_s("[Thread B] CRT locale is set to \"%s\"\n",  
        setlocale(LC_ALL, NULL));  
    printf_s("[Thread B] locale::global is set to \"%s\"\n\n",  
        locale().name().c_str());  
    ReleaseMutex(printMutex);  
  
    return 1;  
}  
```  
  
  **\[Thread A\] Per\-thread locale is enabled.**  
**\[Thread A\] CRT locale is set to "French\_France.1252"**  
**\[Thread A\] locale::global is set to "C"**  
**\[Thread B\] Per\-thread locale is NOT enabled.**  
**\[Thread B\] CRT locale is set to "C"**  
**\[Thread B\] locale::global is set to "C"**  
**\[Thread main\] Per\-thread locale is NOT enabled.**  
**\[Thread main\] CRT locale is set to "C"**  
**\[Thread main\] locale::global is set to "C"**   
## Esempio  
 In questo esempio il thread principale genera due thread figlio.  Nel primo, Thread A, sono abilitate le impostazioni locali per thread mediante la chiamata a `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)`.  Nel secondo thread, Thread B, come per il thread principale, le impostazioni locali per thread non sono abilitate.  Nel Thread A le impostazioni locali vengono modificate mediante il metodo [locale::global](../Topic/locale::global.md) della libreria standard di C\+\+.  
  
 Poiché per il Thread A le impostazioni locali sono configurate per thread, solo per le funzioni della libreria di runtime nel Thread A vengono utilizzate le impostazioni locali per il francese.  Le funzioni della libreria di runtime C nel Thread B e nel thread principale continueranno a utilizzare le impostazioni locali "C".  Poiché tuttavia il metodo [locale::global](../Topic/locale::global.md) modifica le impostazioni locali globalmente, tutti gli oggetti della libreria standard di C\+\+ in tutti i thread utilizzeranno le impostazioni locali per il francese.  
  
```  
// multithread_locale_2.cpp  
// compile with: /EHsc /MD  
#include <clocale>  
#include <cstdio>  
#include <locale>  
#include <process.h>  
#include <windows.h>  
  
#define NUM_THREADS 2  
using namespace std;  
  
unsigned __stdcall RunThreadA(void *params);  
unsigned __stdcall RunThreadB(void *params);  
  
BOOL localeSet = FALSE;  
HANDLE printMutex = CreateMutex(NULL, FALSE, NULL);  
  
int main()  
{  
    HANDLE threads[NUM_THREADS];  
  
    unsigned aID;  
    threads[0] = (HANDLE)_beginthreadex(  
        NULL, 0, RunThreadA, NULL, 0, &aID);  
  
    unsigned bID;  
    threads[1] = (HANDLE)_beginthreadex(  
        NULL, 0, RunThreadB, NULL, 0, &bID);  
  
    WaitForMultipleObjects(2, threads, TRUE, INFINITE);  
  
    printf_s("[Thread main] Per-thread locale is NOT enabled.\n");  
    printf_s("[Thread main] CRT locale is set to \"%s\"\n",  
        setlocale(LC_ALL, NULL));  
    printf_s("[Thread main] locale::global is set to \"%s\"\n",  
        locale().name().c_str());  
  
    CloseHandle(threads[0]);  
    CloseHandle(threads[1]);  
    CloseHandle(printMutex);  
  
    return 0;  
}  
  
unsigned __stdcall RunThreadA(void *params)  
{  
    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);  
    locale::global(locale("french"));  
    localeSet = TRUE;  
  
    WaitForSingleObject(printMutex, INFINITE);  
    printf_s("[Thread A] Per-thread locale is enabled.\n");  
    printf_s("[Thread A] CRT locale is set to \"%s\"\n",  
        setlocale(LC_ALL, NULL));  
    printf_s("[Thread A] locale::global is set to \"%s\"\n\n",  
        locale().name().c_str());  
    ReleaseMutex(printMutex);  
  
    return 1;  
}  
  
unsigned __stdcall RunThreadB(void *params)  
{  
    while (!localeSet)  
        Sleep(100);  
  
    WaitForSingleObject(printMutex, INFINITE);  
    printf_s("[Thread B] Per-thread locale is NOT enabled.\n");  
    printf_s("[Thread B] CRT locale is set to \"%s\"\n",  
        setlocale(LC_ALL, NULL));  
    printf_s("[Thread B] locale::global is set to \"%s\"\n\n",  
        locale().name().c_str());  
    ReleaseMutex(printMutex);  
  
    return 1;  
}  
```  
  
  **\[Thread A\] Per\-thread locale is enabled.**  
**\[Thread A\] CRT locale is set to "French\_France.1252"**  
**\[Thread A\] locale::global is set to "French\_France.1252"**  
**\[Thread B\] Per\-thread locale is NOT enabled.**  
**\[Thread B\] CRT locale is set to "C"**  
**\[Thread B\] locale::global is set to "French\_France.1252"**  
**\[Thread main\] Per\-thread locale is NOT enabled.**  
**\[Thread main\] CRT locale is set to "C"**  
**\[Thread main\] locale::global is set to "French\_France.1252"**   
## Esempio  
 In questo esempio il thread principale genera due thread figlio.  Nel primo, Thread A, sono abilitate le impostazioni locali per thread mediante la chiamata a `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)`.  Nel secondo thread, Thread B, come per il thread principale, le impostazioni locali per thread non sono abilitate.  Nel Thread B le impostazioni locali vengono modificate mediante la funzione [setlocale](../preprocessor/setlocale.md) della libreria di runtime C.  
  
 Poiché nel Thread B non sono abilitate le impostazioni locali per thread, le funzioni della libreria di runtime C nel Thread B e nel thread principale utilizzeranno le impostazioni locali per il francese.  Le funzioni della libreria di runtime C nel Thread A continueranno a utilizzare le impostazioni locali "C" poiché nel Thread A sono attivate le impostazioni locali per thread.  La funzione [setlocale](../preprocessor/setlocale.md) inoltre non influenza le impostazioni locali della libreria standard di C\+\+, pertanto in tutti gli oggetti della libreria standard C\+\+ verranno utilizzate le impostazioni locali "C".  
  
```  
// multithread_locale_3.cpp  
// compile with: /EHsc /MD  
#include <clocale>  
#include <cstdio>  
#include <locale>  
#include <process.h>  
#include <windows.h>  
  
#define NUM_THREADS 2  
using namespace std;  
  
unsigned __stdcall RunThreadA(void *params);  
unsigned __stdcall RunThreadB(void *params);  
  
BOOL localeSet = FALSE;  
BOOL configThreadLocaleCalled = FALSE;  
HANDLE printMutex = CreateMutex(NULL, FALSE, NULL);  
  
int main()  
{  
    HANDLE threads[NUM_THREADS];  
  
    unsigned aID;  
    threads[0] = (HANDLE)_beginthreadex(  
        NULL, 0, RunThreadA, NULL, 0, &aID);  
  
    unsigned bID;  
    threads[1] = (HANDLE)_beginthreadex(  
        NULL, 0, RunThreadB, NULL, 0, &bID);  
  
    WaitForMultipleObjects(2, threads, TRUE, INFINITE);  
  
    printf_s("[Thread main] Per-thread locale is NOT enabled.\n");  
    printf_s("[Thread main] CRT locale is set to \"%s\"\n",  
        setlocale(LC_ALL, NULL));  
    printf_s("[Thread main] locale::global is set to \"%s\"\n",  
        locale().name().c_str());  
  
    CloseHandle(threads[0]);  
    CloseHandle(threads[1]);  
    CloseHandle(printMutex);  
  
    return 0;  
}  
  
unsigned __stdcall RunThreadA(void *params)  
{  
    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);  
    configThreadLocaleCalled = TRUE;  
    while (!localeSet)  
        Sleep(100);  
  
    WaitForSingleObject(printMutex, INFINITE);  
    printf_s("[Thread A] Per-thread locale is enabled.\n");  
    printf_s("[Thread A] CRT locale is set to \"%s\"\n",  
        setlocale(LC_ALL, NULL));  
    printf_s("[Thread A] locale::global is set to \"%s\"\n\n",  
        locale().name().c_str());  
    ReleaseMutex(printMutex);  
  
    return 1;  
}  
  
unsigned __stdcall RunThreadB(void *params)  
{  
    while (!configThreadLocaleCalled)  
        Sleep(100);  
    setlocale(LC_ALL, "french");  
    localeSet = TRUE;  
  
    WaitForSingleObject(printMutex, INFINITE);  
    printf_s("[Thread B] Per-thread locale is NOT enabled.\n");  
    printf_s("[Thread B] CRT locale is set to \"%s\"\n",  
        setlocale(LC_ALL, NULL));  
    printf_s("[Thread B] locale::global is set to \"%s\"\n\n",  
        locale().name().c_str());  
    ReleaseMutex(printMutex);  
  
    return 1;  
}  
```  
  
  **\[Thread B\] Per\-thread locale is NOT enabled.**  
**\[Thread B\] CRT locale is set to "French\_France.1252"**  
**\[Thread B\] locale::global is set to "C"**  
**\[Thread A\] Per\-thread locale is enabled.**  
**\[Thread A\] CRT locale is set to "C"**  
**\[Thread A\] locale::global is set to "C"**  
**\[Thread main\] Per\-thread locale is NOT enabled.**  
**\[Thread main\] CRT locale is set to "French\_France.1252"**  
**\[Thread main\] locale::global is set to "C"**   
## Esempio  
 In questo esempio il thread principale genera due thread figlio.  Nel primo, Thread A, sono abilitate le impostazioni locali per thread mediante la chiamata a `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)`.  Nel secondo thread, Thread B, come per il thread principale, le impostazioni locali per thread non sono abilitate.  Nel Thread B le impostazioni locali vengono modificate mediante il metodo [locale::global](../Topic/locale::global.md) della libreria standard di C\+\+.  
  
 Poiché nel Thread B non sono abilitate le impostazioni locali per thread, le funzioni della libreria di runtime C nel Thread B e nel thread principale utilizzeranno le impostazioni locali per il francese.  Le funzioni della libreria di runtime C nel Thread A continueranno a utilizzare le impostazioni locali "C" poiché nel Thread A sono attivate le impostazioni locali per thread.  Poiché tuttavia il metodo [locale::global](../Topic/locale::global.md) modifica le impostazioni locali globalmente, tutti gli oggetti della libreria standard di C\+\+ in tutti i thread utilizzeranno le impostazioni locali per il francese.  
  
```  
// multithread_locale_4.cpp  
// compile with: /EHsc /MD  
#include <clocale>  
#include <cstdio>  
#include <locale>  
#include <process.h>  
#include <windows.h>  
  
#define NUM_THREADS 2  
using namespace std;  
  
unsigned __stdcall RunThreadA(void *params);  
unsigned __stdcall RunThreadB(void *params);  
  
BOOL localeSet = FALSE;  
BOOL configThreadLocaleCalled = FALSE;  
HANDLE printMutex = CreateMutex(NULL, FALSE, NULL);  
  
int main()  
{  
    HANDLE threads[NUM_THREADS];  
  
    unsigned aID;  
    threads[0] = (HANDLE)_beginthreadex(  
        NULL, 0, RunThreadA, NULL, 0, &aID);  
  
    unsigned bID;  
    threads[1] = (HANDLE)_beginthreadex(  
        NULL, 0, RunThreadB, NULL, 0, &bID);  
  
    WaitForMultipleObjects(2, threads, TRUE, INFINITE);  
  
    printf_s("[Thread main] Per-thread locale is NOT enabled.\n");  
    printf_s("[Thread main] CRT locale is set to \"%s\"\n",  
        setlocale(LC_ALL, NULL));  
    printf_s("[Thread main] locale::global is set to \"%s\"\n",  
        locale().name().c_str());  
  
    CloseHandle(threads[0]);  
    CloseHandle(threads[1]);  
    CloseHandle(printMutex);  
  
    return 0;  
}  
  
unsigned __stdcall RunThreadA(void *params)  
{  
    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);  
    configThreadLocaleCalled = TRUE;  
    while (!localeSet)  
        Sleep(100);  
  
    WaitForSingleObject(printMutex, INFINITE);  
    printf_s("[Thread A] Per-thread locale is enabled.\n");  
    printf_s("[Thread A] CRT locale is set to \"%s\"\n",  
        setlocale(LC_ALL, NULL));  
    printf_s("[Thread A] locale::global is set to \"%s\"\n\n",  
        locale().name().c_str());  
    ReleaseMutex(printMutex);  
  
    return 1;  
}  
  
unsigned __stdcall RunThreadB(void *params)  
{  
    while (!configThreadLocaleCalled)  
        Sleep(100);  
    locale::global(locale("french"));  
    localeSet = TRUE;  
  
    WaitForSingleObject(printMutex, INFINITE);  
    printf_s("[Thread B] Per-thread locale is NOT enabled.\n");  
    printf_s("[Thread B] CRT locale is set to \"%s\"\n",  
        setlocale(LC_ALL, NULL));  
    printf_s("[Thread B] locale::global is set to \"%s\"\n\n",  
        locale().name().c_str());  
    ReleaseMutex(printMutex);  
  
    return 1;  
}  
```  
  
  **\[Thread B\] Per\-thread locale is NOT enabled.**  
**\[Thread B\] CRT locale is set to "French\_France.1252"**  
**\[Thread B\] locale::global is set to "French\_France.1252"**  
**\[Thread A\] Per\-thread locale is enabled.**  
**\[Thread A\] CRT locale is set to "C"**  
**\[Thread A\] locale::global is set to "French\_France.1252"**  
**\[Thread main\] Per\-thread locale is NOT enabled.**  
**\[Thread main\] CRT locale is set to "French\_France.1252"**  
**\[Thread main\] locale::global is set to "French\_France.1252"**   
## Vedere anche  
 [Supporto del multithreading per il codice precedente \(Visual C\+\+\)](../parallel/multithreading-support-for-older-code-visual-cpp.md)   
 [\_beginthread, \_beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md)   
 [\_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md)   
 [setlocale](../preprocessor/setlocale.md)   
 [Internazionalizzazione](../c-runtime-library/internationalization.md)   
 [Impostazioni locali](../c-runtime-library/locale.md)   
 [\<clocale\>](../standard-library/clocale.md)   
 [\<locale\>](../standard-library/locale.md)   
 [Classe locale](../standard-library/locale-class.md)