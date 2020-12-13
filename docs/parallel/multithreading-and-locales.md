---
description: 'Altre informazioni su: multithreading e impostazioni locali'
title: Multithreading e impostazioni locali
ms.date: 11/04/2016
helpviewer_keywords:
- locales [C++], multithreading
- multithreading [C++], locales
- threading [C++], locales
- per-thread locale
ms.assetid: d6fb159a-eaca-4130-a51a-f95d62f71485
ms.openlocfilehash: 246eb6c9be7046a77770de701d15754579b66055
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97149981"
---
# <a name="multithreading-and-locales"></a>Multithreading e impostazioni locali

La libreria di runtime C e la libreria standard C++ forniscono supporto per la modifica delle impostazioni locali del programma. In questo argomento vengono illustrati i problemi che si verificano quando si utilizza la funzionalità delle impostazioni locali di entrambe le librerie in un'applicazione multithread.

## <a name="remarks"></a>Commenti

Con la libreria di runtime C, è possibile creare applicazioni multithread usando le `_beginthread` funzioni e `_beginthreadex` . In questo argomento vengono illustrate solo le applicazioni multithreading create utilizzando queste funzioni. Per ulteriori informazioni, vedere [_beginthread, _beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md).

Per modificare le impostazioni locali utilizzando la libreria di runtime C, utilizzare la funzione [setlocale](../preprocessor/setlocale.md) . Nelle versioni precedenti di Visual C++ questa funzione modificherebbe sempre le impostazioni locali nell'intera applicazione. È ora disponibile il supporto per l'impostazione delle impostazioni locali in base ai singoli thread. Questa operazione viene eseguita utilizzando la funzione [_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md) . Per specificare che [setlocale](../preprocessor/setlocale.md) deve modificare solo le impostazioni locali nel thread corrente, chiamare `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)` in tale thread. Viceversa, `_configthreadlocale(_DISABLE_PER_THREAD_LOCALE)` se si chiama, il thread utilizzerà le impostazioni locali globali e qualsiasi chiamata a setlocale in [](../preprocessor/setlocale.md) tale thread modificherà le impostazioni locali in tutti i thread che non hanno attivato in modo esplicito le impostazioni locali per thread.

Per modificare le impostazioni locali utilizzando la libreria di runtime C++, utilizzare la [classe delle impostazioni locali](../standard-library/locale-class.md). Chiamando il metodo [locale:: Global](../standard-library/locale-class.md#global) , si modificano le impostazioni locali in ogni thread che non ha attivato in modo esplicito le impostazioni locali per thread. Per modificare le impostazioni locali in un singolo thread o parte di un'applicazione, è sufficiente creare un'istanza di un `locale` oggetto in tale thread o porzione di codice.

> [!NOTE]
> Calling [locale:: Global](../standard-library/locale-class.md#global) modifica le impostazioni locali per la libreria standard C++ e la libreria di runtime C. Tuttavia, la chiamata di [setlocale](../preprocessor/setlocale.md) modifica solo le impostazioni locali della libreria di runtime C. la libreria standard C++ non è interessata.

Negli esempi seguenti viene [illustrato l'utilizzo della funzione setlocale](../preprocessor/setlocale.md) , della classe delle [impostazioni locali](../standard-library/locale-class.md)e della funzione [_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md) per modificare le impostazioni locali di un'applicazione in diversi scenari.

## <a name="example-change-locale-with-per-thread-locale-enabled"></a>Esempio: modificare le impostazioni locali con le impostazioni locali per thread abilitate

In questo esempio, il thread principale genera due thread figlio. Il primo thread, thread A, Abilita le impostazioni locali per thread chiamando `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)` . Il secondo thread, il thread B, e il thread principale, non abilitano le impostazioni locali per thread. Il thread A continua quindi a modificare le impostazioni locali usando la funzione [setlocale](../preprocessor/setlocale.md) della libreria di runtime C.

Poiché le impostazioni locali per thread A sono abilitate, solo le funzioni della libreria di runtime C nel thread A iniziano a usare le impostazioni locali "francesi". Le funzioni della libreria di runtime C nel thread B e nel thread principale continuano a usare le impostazioni locali "C". Inoltre [, poiché setlocale non](../preprocessor/setlocale.md) influisce sulle impostazioni locali della libreria standard c++, tutti gli oggetti della libreria standard c++ continuano a usare le impostazioni locali "C".

```cpp
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

```Output
[Thread A] Per-thread locale is enabled.
[Thread A] CRT locale is set to "French_France.1252"
[Thread A] locale::global is set to "C"

[Thread B] Per-thread locale is NOT enabled.
[Thread B] CRT locale is set to "C"
[Thread B] locale::global is set to "C"

[Thread main] Per-thread locale is NOT enabled.
[Thread main] CRT locale is set to "C"
[Thread main] locale::global is set to "C"
```

## <a name="example-change-global-locale-with-per-thread-locale-enabled"></a>Esempio: modificare le impostazioni locali globali con le impostazioni locali per thread abilitate

In questo esempio, il thread principale genera due thread figlio. Il primo thread, thread A, Abilita le impostazioni locali per thread chiamando `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)` . Il secondo thread, il thread B, e il thread principale, non abilitano le impostazioni locali per thread. Il thread A continua quindi a modificare le impostazioni locali usando il metodo [locale:: Global](../standard-library/locale-class.md#global) della libreria standard C++.

Poiché le impostazioni locali per thread A sono abilitate, solo le funzioni della libreria di runtime C nel thread A iniziano a usare le impostazioni locali "francesi". Le funzioni della libreria di runtime C nel thread B e nel thread principale continuano a usare le impostazioni locali "C". Tuttavia, poiché il metodo [locale:: Global](../standard-library/locale-class.md#global) modifica le impostazioni locali "globalmente", tutti gli oggetti della libreria standard C++ in tutti i thread iniziano a usare le impostazioni locali "francesi".

```cpp
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

```Output
[Thread A] Per-thread locale is enabled.
[Thread A] CRT locale is set to "French_France.1252"
[Thread A] locale::global is set to "French_France.1252"

[Thread B] Per-thread locale is NOT enabled.
[Thread B] CRT locale is set to "C"
[Thread B] locale::global is set to "French_France.1252"

[Thread main] Per-thread locale is NOT enabled.
[Thread main] CRT locale is set to "C"
[Thread main] locale::global is set to "French_France.1252"
```

## <a name="example-change-locale-without-per-thread-locale-enabled"></a>Esempio: modificare le impostazioni locali senza impostazioni locali per thread abilitate

In questo esempio, il thread principale genera due thread figlio. Il primo thread, thread A, Abilita le impostazioni locali per thread chiamando `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)` . Il secondo thread, il thread B, e il thread principale, non abilitano le impostazioni locali per thread. Il thread B continua quindi a modificare le impostazioni locali usando la funzione [setlocale](../preprocessor/setlocale.md) della libreria di runtime C.

Poiché per il thread B non sono abilitate le impostazioni locali per thread, le funzioni della libreria di runtime C nel thread B e nel thread principale iniziano a usare le impostazioni locali "francesi". Le funzioni della libreria di runtime C nel thread A continuano a usare le impostazioni locali "C" perché per il thread A sono abilitate le impostazioni locali per thread. Inoltre [, poiché setlocale non](../preprocessor/setlocale.md) influisce sulle impostazioni locali della libreria standard c++, tutti gli oggetti della libreria standard c++ continuano a usare le impostazioni locali "C".

```cpp
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

```Output
[Thread B] Per-thread locale is NOT enabled.
[Thread B] CRT locale is set to "French_France.1252"
[Thread B] locale::global is set to "C"

[Thread A] Per-thread locale is enabled.
[Thread A] CRT locale is set to "C"
[Thread A] locale::global is set to "C"

[Thread main] Per-thread locale is NOT enabled.
[Thread main] CRT locale is set to "French_France.1252"
[Thread main] locale::global is set to "C"
```

## <a name="example-change-global-locale-without-per-thread-locale-enabled"></a>Esempio: modificare le impostazioni locali globali senza impostazioni locali per thread abilitate

In questo esempio, il thread principale genera due thread figlio. Il primo thread, thread A, Abilita le impostazioni locali per thread chiamando `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)` . Il secondo thread, il thread B, e il thread principale, non abilitano le impostazioni locali per thread. Il thread B continua quindi a modificare le impostazioni locali usando il metodo [locale:: Global](../standard-library/locale-class.md#global) della libreria standard C++.

Poiché per il thread B non sono abilitate le impostazioni locali per thread, le funzioni della libreria di runtime C nel thread B e nel thread principale iniziano a usare le impostazioni locali "francesi". Le funzioni della libreria di runtime C nel thread A continuano a usare le impostazioni locali "C" perché per il thread A sono abilitate le impostazioni locali per thread. Tuttavia, poiché il metodo [locale:: Global](../standard-library/locale-class.md#global) modifica le impostazioni locali "globalmente", tutti gli oggetti della libreria standard C++ in tutti i thread iniziano a usare le impostazioni locali "francesi".

```cpp
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

```Output
[Thread B] Per-thread locale is NOT enabled.
[Thread B] CRT locale is set to "French_France.1252"
[Thread B] locale::global is set to "French_France.1252"

[Thread A] Per-thread locale is enabled.
[Thread A] CRT locale is set to "C"
[Thread A] locale::global is set to "French_France.1252"

[Thread main] Per-thread locale is NOT enabled.
[Thread main] CRT locale is set to "French_France.1252"
[Thread main] locale::global is set to "French_France.1252"
```

## <a name="see-also"></a>Vedi anche

[Supporto del multithreading per il codice precedente (Visual C++)](multithreading-support-for-older-code-visual-cpp.md)<br/>
[_beginthread, _beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md)<br/>
[_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md)<br/>
[setlocale](../preprocessor/setlocale.md)<br/>
[Internazionalizzazione](../c-runtime-library/internationalization.md)<br/>
[Impostazioni locali](../c-runtime-library/locale.md)<br/>
[\<clocale>](../standard-library/clocale.md)<br/>
[\<locale>](../standard-library/locale.md)<br/>
[Classe delle impostazioni locali](../standard-library/locale-class.md)
