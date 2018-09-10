---
title: exit, _Exit, _exit | Microsoft Docs
ms.custom: ''
ms.date: 1/02/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _exit
- exit
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- Exit
- _exit
- process/exit
- process/_Exit
- stdlib/exit
- stdlib/_Exit
dev_langs:
- C++
helpviewer_keywords:
- exit function
- _exit function
- processes, terminating
- function calls, terminating
- process termination, calling
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d26cc39039b95b8c12e429d333918e83628b2619
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44110604"
---
# <a name="exit-exit-exit"></a>exit, _Exit, _exit

Termina il processo di chiamata. Il **uscire** funzione termina dopo la pulizia. **Exit** e **Exit** terminano immediatamente.

> [!NOTE]
> Non utilizzare questo metodo per arrestare un'app Universal Windows Platform (UWP), ad eccezione di test o gli scenari di debug. Modalità dell'interfaccia utente o a livello di codice per chiudere un'app di Store non sono consentiti in base al [i criteri di Microsoft Store](/legal/windows/agreements/store-policies). Per altre informazioni, vedere [ciclo di vita App UWP](/windows/uwp/launch-resume/app-lifecycle). Per altre informazioni sulle app di Windows 10, vedere [Guide pratiche per le app di Windows 10](https://developer.microsoft.com/en-us/windows/apps).

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

Il **uscire**, **Exit** e **Exit** funzioni terminano il processo chiama. Il **uscire** funzione chiama i distruttori per gli oggetti thread-local, quindi chiama, in ordine di last-in-first-out (LIFO), le funzioni registrate da **atexit** e **OnExit**e infine Scarica tutti i buffer di file prima di terminare il processo. Il **Exit** e **Exit** funzioni di terminano il processo senza eliminare gli oggetti locali del thread o l'elaborazione **atexit** o **OnExit**funzioni e senza scaricare i buffer del flusso.

Anche se il **uscire**, **Exit** e **Exit** chiamate non restituiscono un valore, il valore nella *stato* viene resa disponibile per l'ambiente host o in attesa del processo chiamante, se presente, dopo il processo viene chiuso. In genere, il chiamante imposta il *stato* valore su 0 per indicare una chiusura normale, o un altro valore per indicare un errore. Il *lo stato* valore è disponibile per il comando batch del sistema operativo **ERRORLEVEL** ed è rappresentato da uno dei due costanti: **EXIT_SUCCESS**, che rappresenta un valore pari a 0, o **EXIT_FAILURE**, che rappresenta un valore pari a 1.

Il **uscire**, **Exit**, **Exit**, **quick_exit**, **cexit**, e **c_exit** funzioni si comportano come indicato di seguito.

|Funzione|Descrizione|
|--------------|-----------------|
|**exit**|Esegue le procedure complete di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**_Exit**|Esegue le procedure minime di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**_exit**|Esegue le procedure minime di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**quick_exit**|Esegue le procedure rapide di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**_cexit**|Esegue le procedure complete di terminazione della libreria C e torna al chiamante. Non termina il processo.|
|**_c_exit**|Esegue le procedure minime di terminazione della libreria C e torna al chiamante. Non termina il processo.|

Quando si chiama il **uscire**, **Exit** oppure **Exit** funzione, i distruttori per gli oggetti temporanei o automatici presenti al momento della chiamata non vengono chiamati. Un oggetto automatico è un oggetto locale non statico definito in una funzione. Un oggetto temporaneo è un oggetto che viene creato dal compilatore, ad esempio un valore restituito da una chiamata di funzione. Per eliminare un oggetto automatico prima di chiamare **uscire**, **Exit**, o **Exit**, in modo esplicito chiamare il distruttore dell'oggetto, come illustrato di seguito:

```cpp
void last_fn() {}
    struct SomeClass {} myInstance{};
    // ...
    myInstance.~SomeClass(); // explicit destructor call
    exit(0);
}
```

Non utilizzare **DLL_PROCESS_ATTACH** chiamare **uscire** dalla **DllMain**. Per chiudere la **DLLMain** funzione, restituire **FALSE** da **DLL_PROCESS_ATTACH**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**uscire**, **Exit**, **Exit**|\<process.h> o \<stdlib.h>|

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
