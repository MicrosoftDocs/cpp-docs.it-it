---
title: exit, _Exit, _exit
ms.date: 01/02/2018
api_name:
- _exit
- exit
api_location:
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
- api-ms-win-crt-runtime-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- Exit
- _exit
- process/exit
- process/_Exit
- stdlib/exit
- stdlib/_Exit
helpviewer_keywords:
- exit function
- _exit function
- processes, terminating
- function calls, terminating
- process termination, calling
ms.openlocfilehash: fd988ca6339c00b454d673d3bec6f137753ac83a
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70941662"
---
# <a name="exit-_exit-_exit"></a>exit, _Exit, _exit

Termina il processo di chiamata. La funzione **Exit** la termina dopo la pulizia; **_exit** e **_exit** la terminano immediatamente.

> [!NOTE]
> Non usare questo metodo per arrestare un'app piattaforma UWP (Universal Windows Platform) (UWP), tranne che negli scenari di test o di debug. I metodi a livello di codice o dell'interfaccia utente per chiudere un'app dello Store non sono consentiti in base ai [criteri Microsoft Store](/legal/windows/agreements/store-policies). Per altre informazioni, vedere ciclo di vita dell' [app UWP](/windows/uwp/launch-resume/app-lifecycle). Per altre informazioni sulle app di Windows 10, vedere [Guide pratiche per le app di Windows 10](https://developer.microsoft.com/windows/apps).

## <a name="syntax"></a>Sintassi

```C
void exit(
   int const status
);
void _Exit(
   int const status
);
void _exit(
   int const status
);
```

### <a name="parameters"></a>Parametri

*status*<br/>
Codice di stato di uscita.

## <a name="remarks"></a>Note

Le funzioni **Exit**, **_Exit** e **_Exit** terminano il processo chiamante. La funzione **Exit** chiama i distruttori per gli oggetti locali del thread, quindi chiama, in ordine LIFO (Last in First out), le funzioni registrate da **atexit** e **_onexit**e quindi Scarica tutti i buffer di file prima di terminare il processo. Le funzioni **_Exit** e **_Exit** terminano il processo senza eliminare gli oggetti locali del thread o elaborare funzioni **atexit** o **_onexit** e senza scaricare i buffer di flusso.

Anche se le chiamate **Exit**, **_Exit** e **_Exit** non restituiscono un valore, il valore in *status* viene reso disponibile all'ambiente host o al processo di chiamata in attesa, se presente, dopo la chiusura del processo. In genere, il chiamante imposta il valore di *stato* su 0 per indicare un'uscita normale o un altro valore per indicare un errore. Il valore di *stato* è disponibile per il comando batch del sistema operativo **errorlevel** ed è rappresentato da una delle due costanti seguenti: **EXIT_SUCCESS**, che rappresenta il valore 0, o **EXIT_FAILURE**, che rappresenta il valore 1.

Le funzioni **Exit**, **_Exit**, **_Exit**, **quick_exit**, **_cexit**e **_c_exit** hanno un comportamento analogo al seguente.

|Funzione|DESCRIZIONE|
|--------------|-----------------|
|**exit**|Esegue le procedure complete di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**_Exit**|Esegue le procedure minime di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**_exit**|Esegue le procedure minime di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**quick_exit**|Esegue le procedure rapide di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**_cexit**|Esegue le procedure complete di terminazione della libreria C e torna al chiamante. Non termina il processo.|
|**_c_exit**|Esegue le procedure minime di terminazione della libreria C e torna al chiamante. Non termina il processo.|

Quando si chiama la funzione **Exit**, **_Exit** o **_Exit** , i distruttori per gli oggetti temporanei o automatici presenti al momento della chiamata non vengono chiamati. Un oggetto automatico è un oggetto locale non statico definito in una funzione. Un oggetto temporaneo è un oggetto creato dal compilatore, ad esempio un valore restituito da una chiamata di funzione. Per eliminare definitivamente un oggetto automatico prima di chiamare **Exit**, **_Exit**o **_Exit**, chiamare in modo esplicito il distruttore per l'oggetto, come illustrato di seguito:

```cpp
void last_fn() {}
    struct SomeClass {} myInstance{};
    // ...
    myInstance.~SomeClass(); // explicit destructor call
    exit(0);
}
```

Non usare **DLL_PROCESS_ATTACH** per chiamare **Exit** da **DllMain**. Per uscire dalla funzione **DllMain** , restituire **false** da **DLL_PROCESS_ATTACH**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**exit**, **_Exit**, **_exit**|\<process.h> o \<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_exit.c
// This program returns an exit code of 1. The
// error code could be tested in a batch file.

#include <stdlib.h>

int main( void )
{
   exit( 1 );
}
```

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[abort](abort.md)<br/>
[atexit](atexit.md)<br/>
[_cexit, _c_exit](cexit-c-exit.md)<br/>
[Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[quick_exit](quick-exit1.md)<br/>
[Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
