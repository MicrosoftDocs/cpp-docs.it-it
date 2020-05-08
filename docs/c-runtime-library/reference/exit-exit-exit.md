---
title: exit, _Exit, _exit
ms.date: 4/2/2020
api_name:
- _exit
- exit
- _o__exit
- _o_exit
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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: a1c0eeaa6d66e91b913ce7940d37409fc4f6ac29
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82909673"
---
# <a name="exit-_exit-_exit"></a>exit, _Exit, _exit

Termina il processo di chiamata. La funzione **Exit** la termina dopo la pulizia; **_exit** e **_Exit** terminare immediatamente l'it.

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

*Stato*<br/>
Codice di stato di uscita.

## <a name="remarks"></a>Osservazioni

Le funzioni **Exit**, **_Exit** e **_exit** terminano il processo chiamante. La funzione **Exit** chiama i distruttori per gli oggetti locali del thread, quindi chiama, in ordine LIFO (Last in First out), le funzioni registrate da **atexit** e **_onexit**e quindi Scarica tutti i buffer di file prima di terminare il processo. Le funzioni **_Exit** e **_exit** terminano il processo senza eliminare gli oggetti locali del thread o elaborare funzioni **atexit** o **_onexit** e senza scaricare i buffer di flusso.

Sebbene le chiamate di **uscita**, **_Exit** e **_exit** non restituiscano un valore, il valore in *status* viene reso disponibile all'ambiente host o al processo di chiamata in attesa, se presente, dopo la chiusura del processo. In genere, il chiamante imposta il valore di *stato* su 0 per indicare un'uscita normale o un altro valore per indicare un errore. Il valore di *stato* è disponibile per il comando batch del sistema operativo **errorlevel** ed è rappresentato da una delle due costanti: **EXIT_SUCCESS**, che rappresenta il valore 0, o **EXIT_FAILURE**, che rappresenta il valore 1.

Le funzioni **Exit**, **_Exit**, **_exit**, **quick_exit**, **_cexit**e **_c_exit** si comportano come segue.

|Funzione|Descrizione|
|--------------|-----------------|
|**exit**|Esegue le procedure complete di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**_Exit**|Esegue le procedure minime di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**_exit**|Esegue le procedure minime di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**quick_exit**|Esegue le procedure rapide di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**_cexit**|Esegue le procedure complete di terminazione della libreria C e torna al chiamante. Non termina il processo.|
|**_c_exit**|Esegue le procedure minime di terminazione della libreria C e torna al chiamante. Non termina il processo.|

Quando si chiama la funzione **Exit**, **_Exit** o **_exit** , i distruttori per gli oggetti temporanei o automatici presenti al momento della chiamata non vengono chiamati. Un oggetto automatico è un oggetto locale non statico definito in una funzione. Un oggetto temporaneo è un oggetto creato dal compilatore, ad esempio un valore restituito da una chiamata di funzione. Per eliminare definitivamente un oggetto automatico prima di chiamare **Exit**, **_Exit**o **_exit**, chiamare in modo esplicito il distruttore per l'oggetto, come illustrato di seguito:

```cpp
void last_fn() {}
    struct SomeClass {} myInstance{};
    // ...
    myInstance.~SomeClass(); // explicit destructor call
    exit(0);
}
```

Non utilizzare **DLL_PROCESS_ATTACH** per chiamare **Exit** da **DllMain**. Per uscire dalla funzione **DllMain** , restituire **false** da **DLL_PROCESS_ATTACH**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione obbligatoria|
|--------------|---------------------|
|**Exit**, **_Exit**, **_exit**|\<process.h> o \<stdlib.h>|

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

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md) (Controllo processo e ambiente)<br/>
[interruzione](abort.md)<br/>
[atexit](atexit.md)<br/>
[_cexit, _c_exit](cexit-c-exit.md)<br/>
[_exec, funzioni _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[quick_exit](quick-exit1.md)<br/>
[_spawn, funzioni _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
