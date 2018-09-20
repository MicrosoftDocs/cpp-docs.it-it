---
title: Il multithreading e impostazioni locali | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- locales [C++], multithreading
- multithreading [C++], locales
- threading [C++], locales
- per-thread locale
ms.assetid: d6fb159a-eaca-4130-a51a-f95d62f71485
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d728bb8696a71eb733f15c236e42dc1859c5f135
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46428785"
---
# <a name="multithreading-and-locales"></a>Multithreading e impostazioni locali

Sia la libreria di Runtime C e la libreria Standard C++ forniscono supporto per modificare le impostazioni locali del programma. In questo argomento vengono illustrati i problemi che si verificano quando si usa la funzionalità delle impostazioni locali di entrambe le raccolte in un'applicazione multithreading.

## <a name="remarks"></a>Note

Con la libreria di Runtime C, è possibile creare applicazioni con multithreading usando il `_beginthread` e `_beginthreadex` funzioni. Questo argomento descrive solo applicazioni multithreading create utilizzando le funzioni. Per altre informazioni, vedere [beginthread, beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md).

Per modificare le impostazioni locali usando la libreria di Runtime C, usare il [setlocale](../preprocessor/setlocale.md) (funzione). Nelle versioni precedenti di Visual C++, questa funzione consente di modificare le impostazioni locali dell'intera applicazione. È ora supportato per l'impostazione le impostazioni locali in un singolo thread. Questa operazione viene eseguita usando il [configthreadlocale](../c-runtime-library/reference/configthreadlocale.md) (funzione). Per specificare che [setlocale](../preprocessor/setlocale.md) devono essere modificati solo le impostazioni locali del thread corrente, chiamata `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)` in tale thread. Al contrario, la chiamata `_configthreadlocale(_DISABLE_PER_THREAD_LOCALE)` causerà thread verranno utilizzate le impostazioni locali globali e qualsiasi chiamata a [setlocale](../preprocessor/setlocale.md) in quanto thread modificherà le impostazioni locali in tutti i thread che non sono esplicitamente abilitate le impostazioni locali per thread.

Per modificare le impostazioni locali mediante la libreria di Runtime di C++, usare il [classe locale](../standard-library/locale-class.md). Chiamando il [Global](../standard-library/locale-class.md#global) (metodo), modificare le impostazioni locali in tutti i thread che non è abilitata in modo esplicito le impostazioni locali per thread. Per modificare le impostazioni locali in un singolo thread o parte di un'applicazione, è sufficiente creare un'istanza di un `locale` oggetto nel thread o parte del codice.

> [!NOTE]
> La chiamata [Global](../standard-library/locale-class.md#global) modifica le impostazioni locali per la libreria Standard C++ e la libreria di Runtime C. Tuttavia, se si richiamano [setlocale](../preprocessor/setlocale.md) cambia solo le impostazioni locali per la libreria di Runtime C; la libreria Standard C++ non è interessato.

Gli esempi seguenti illustrano come usare il [setlocale](../preprocessor/setlocale.md) funzione, il [classe locale](../standard-library/locale-class.md)e il [configthreadlocale](../c-runtime-library/reference/configthreadlocale.md) funzione per modificare le impostazioni locali di un'applicazione in numerosi scenari diversi.

## <a name="example"></a>Esempio

In questo esempio, il thread principale genera due thread figlio. Nel primo thread, A, abilita le impostazioni locali per thread chiamando `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)`. Il secondo thread, Thread B, nonché il thread principale, non abilita le impostazioni locali per thread. Nel thread per modificare le impostazioni locali utilizzando il [setlocale](../preprocessor/setlocale.md) funzione della libreria di Runtime C.

Poiché il Thread è abilitata, impostazioni locali per thread solo le funzioni di libreria di Runtime C durante l'avvio di Thread A utilizzando le impostazioni locali "francese". Le funzioni della libreria di Runtime C nel Thread B e nel thread principale continuano a usare le impostazioni locali "C". Inoltre, dato [setlocale](../preprocessor/setlocale.md) interferenze con le impostazioni locali della libreria Standard C++, tutti i della libreria Standard C++ gli oggetti continuano a usare le impostazioni locali "C".

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

## <a name="example"></a>Esempio

In questo esempio, il thread principale genera due thread figlio. Nel primo thread, A, abilita le impostazioni locali per thread chiamando `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)`. Il secondo thread, Thread B, nonché il thread principale, non abilita le impostazioni locali per thread. Nel thread per modificare le impostazioni locali utilizzando il [Global](../standard-library/locale-class.md#global) metodo della libreria Standard C++.

Poiché il Thread è abilitata, impostazioni locali per thread solo le funzioni di libreria di Runtime C durante l'avvio di Thread A utilizzando le impostazioni locali "francese". Le funzioni della libreria di Runtime C nel Thread B e nel thread principale continuano a usare le impostazioni locali "C". Tuttavia, poiché il [Global](../standard-library/locale-class.md#global) metodo modifica le impostazioni locali "globale", tutti gli oggetti di libreria Standard C++ in tutti i thread inizia a usare le impostazioni locali "francese".

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

## <a name="example"></a>Esempio

In questo esempio, il thread principale genera due thread figlio. Nel primo thread, A, abilita le impostazioni locali per thread chiamando `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)`. Il secondo thread, Thread B, nonché il thread principale, non abilita le impostazioni locali per thread. Thread B quindi vengono modificate le impostazioni locali mediante la [setlocale](../preprocessor/setlocale.md) funzione della libreria di Runtime C.

Poiché il Thread B non sono abilitate le impostazioni locali per thread, le funzioni della libreria di Runtime C nel Thread B e nel thread principale iniziano a usare le impostazioni locali "francese". Le funzioni della libreria di Runtime C nel Thread a continueranno a usare le impostazioni locali "C", perché i Thread sono abilitate le impostazioni locali per thread. Inoltre, dato [setlocale](../preprocessor/setlocale.md) interferenze con le impostazioni locali della libreria Standard C++, tutti i della libreria Standard C++ gli oggetti continuano a usare le impostazioni locali "C".

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

## <a name="example"></a>Esempio

In questo esempio, il thread principale genera due thread figlio. Nel primo thread, A, abilita le impostazioni locali per thread chiamando `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)`. Il secondo thread, Thread B, nonché il thread principale, non abilita le impostazioni locali per thread. Thread B quindi vengono modificate le impostazioni locali mediante la [Global](../standard-library/locale-class.md#global) metodo della libreria Standard C++.

Poiché il Thread B non sono abilitate le impostazioni locali per thread, le funzioni della libreria di Runtime C nel Thread B e nel thread principale iniziano a usare le impostazioni locali "francese". Le funzioni della libreria di Runtime C nel Thread a continueranno a usare le impostazioni locali "C", perché i Thread sono abilitate le impostazioni locali per thread. Tuttavia, poiché il [Global](../standard-library/locale-class.md#global) metodo modifica le impostazioni locali "globale", tutti gli oggetti di libreria Standard C++ in tutti i thread inizia a usare le impostazioni locali "francese".

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

## <a name="see-also"></a>Vedere anche

[Supporto del multithreading per il codice precedente (Visual C++)](multithreading-support-for-older-code-visual-cpp.md)<br/>
[_beginthread, _beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md)<br/>
[_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md)<br/>
[setlocale](../preprocessor/setlocale.md)<br/>
[Internazionalizzazione](../c-runtime-library/internationalization.md)<br/>
[Impostazioni locali](../c-runtime-library/locale.md)<br/>
[\<clocale >](../standard-library/clocale.md)<br/>
[\<locale>](../standard-library/locale.md)<br/>
[Classe locale](../standard-library/locale-class.md)