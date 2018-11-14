---
title: _configthreadlocale
ms.date: 11/04/2016
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
helpviewer_keywords:
- configthreadlocale function
- locales, per-thread
- _configthreadlocale function
- per-thread locale
- thread locale
ms.assetid: 10e4050e-b587-4f30-80bc-6c76b35fc770
ms.openlocfilehash: 99e10a0330ba4880ea181e9fe3d56f3fb6bd6493
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51326043"
---
# <a name="configthreadlocale"></a>_configthreadlocale

Configura le opzioni delle impostazioni locali per thread.

## <a name="syntax"></a>Sintassi

```C
int _configthreadlocale( int per_thread_locale_type );
```

### <a name="parameters"></a>Parametri

*per_thread_locale_type*<br/>
Opzione da impostare. Una delle opzioni elencate nella tabella seguente.

## <a name="return-value"></a>Valore restituito

Lo stato delle impostazioni locali per thread precedente (**_DISABLE_PER_THREAD_LOCALE** oppure **_ENABLE_PER_THREAD_LOCALE**), oppure -1 in caso di errore.

## <a name="remarks"></a>Note

Il **_configurethreadlocale** funzione viene utilizzata per controllare l'uso delle impostazioni locali specifiche per thread. Usare uno di questi *per_thread_locale_type* opzioni da specificare o per determinare lo stato delle impostazioni locali per thread:

| Opzione | Descrizione |
|-|-|
| **_ENABLE_PER_THREAD_LOCALE** | Fare in modo che il thread corrente usi impostazioni locali specifiche per thread. Le chiamate successive a **setlocale** in questo thread influiscono su solo le impostazioni locali del thread. |
| **_DISABLE_PER_THREAD_LOCALE** | Fare in modo che il thread corrente usi le impostazioni locali globali. Le chiamate successive a **setlocale** in questo thread influiscono su altri thread che usano le impostazioni locali globali. |
| **0** | Recupera l'impostazione corrente per questo particolare thread. |

Queste funzioni influiscono sul comportamento dei **setlocale**, **tsetlocale**, **wsetlocale**, e **setmbcp**. Quando le impostazioni locali per thread sono disabilitato, qualsiasi chiamata successiva al **setlocale** oppure **wsetlocale** modifica le impostazioni locali di tutti i thread che usano le impostazioni locali globali. Quando abilitata, le impostazioni locali per thread **setlocale** oppure **wsetlocale** influisce solo sulle impostazioni locali del thread corrente.

Se si usa **_configurethreadlocale** per abilitare le impostazioni locali per thread, si consiglia di chiamare **setlocale** oppure **wsetlocale** per impostare le impostazioni locali preferite in tale thread immediatamente dopo.

Se *per_thread_locale_type* non è uno dei valori elencati nella tabella, questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** al **EINVAL** e restituisce -1.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_configthreadlocale**|\<locale.h>|

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

[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[_beginthread, _beginthreadex](beginthread-beginthreadex.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Multithreading e impostazioni locali](../../parallel/multithreading-and-locales.md)<br/>
