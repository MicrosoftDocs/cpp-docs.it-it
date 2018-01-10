---
title: exit, _Exit, _exit | Microsoft Docs
ms.custom: 
ms.date: 1/02/2018
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
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
dev_langs: C++
helpviewer_keywords:
- exit function
- _exit function
- processes, terminating
- function calls, terminating
- process termination, calling
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: dbb54b756363da2069bbc4bface4e971fcab91e4
ms.sourcegitcommit: a5d8f5b92cb5e984d5d6c9d67fe8a1241f3fe184
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/05/2018
---
# <a name="exit-exit-exit"></a>exit, _Exit, _exit

Termina il processo di chiamata. La funzione `exit` termina dopo la pulizia `_exit` e `_Exit` terminano immediatamente la funzione.

> [!NOTE]
> Non utilizzare questo metodo per arrestare un'app di Windows della piattaforma UWP (Universal), ad eccezione di testing o scenari di debug. Modalità a livello di codice o dell'interfaccia utente per chiudere un'app di Store non sono consentiti in base al [criteri di Microsoft Store](/legal/windows/agreements/store-policies). Per ulteriori informazioni, vedere [ciclo di vita dell'App UWP](/windows/uwp/launch-resume/app-lifecycle). Per altre informazioni sulle app di Windows 10, vedere [Guide pratiche per le app di Windows 10](http://go.microsoft.com/fwlink/p/?linkid=619133).

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

_status_  
Codice di stato di uscita.

## <a name="remarks"></a>Note

Le funzioni `exit`, `_Exit` e `_exit` terminano il processo di chiamata. La funzione `exit` chiama i distruttori per gli oggetti locali del thread, quindi chiama, secondo l'ordine LIFO (Last In First Out), le funzioni registrate da `atexit` e `_onexit`e infine scarica tutti i buffer di file prima di terminare il processo. Le funzioni `_Exit` e `_exit` terminano il processo senza eliminare gli oggetti locali del thread o elaborare la funzione `atexit` o `_onexit` e senza scaricare i buffer di flusso.

Sebbene il `exit`, `_Exit` e `_exit` chiamate non restituiscono un valore, il valore in _stato_ viene reso disponibile per l'ambiente host o un processo di chiamata in attesa, se presente, dopo la chiusura del processo. In genere, il chiamante imposta il _stato_ valore su 0 per indicare una chiusura normale o un altro valore per indicare un errore. Il _stato_ valore è disponibile per il comando batch del sistema operativo `ERRORLEVEL` ed è rappresentato da una delle due costanti: `EXIT_SUCCESS`, che rappresenta un valore pari a 0, o `EXIT_FAILURE`, che rappresenta un valore pari a 1.

Il comportamento delle funzioni `exit`, `_Exit`, `_exit`, `quick_exit`, `_cexit`e `_c_exit` è il seguente.

|Funzione|Descrizione|
|--------------|-----------------|
|`exit`|Esegue le procedure complete di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|`_Exit`|Esegue le procedure minime di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|`_exit`|Esegue le procedure minime di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|`quick_exit`|Esegue le procedure rapide di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|`_cexit`|Esegue le procedure complete di terminazione della libreria C e torna al chiamante. Non termina il processo.|
|`_c_exit`|Esegue le procedure minime di terminazione della libreria C e torna al chiamante. Non termina il processo.|

Quando si chiama la funzione `exit`,  `_Exit` o `_exit` , i distruttori per gli oggetti temporanei o automatici presenti al momento della chiamata non vengono chiamati. Un oggetto automatico è un oggetto locale non statico definito in una funzione. Un oggetto temporaneo è un oggetto che viene creato dal compilatore, ad esempio un valore restituito da una chiamata di funzione. Per eliminare un oggetto automatico prima di chiamare `exit`, `_Exit`, o `_exit`, in modo esplicito chiama il distruttore per l'oggetto, come illustrato di seguito:

```cpp
void last_fn() {}
    struct SomeClass {} myInstance{};
    // ...
    myInstance.~SomeClass(); // explicit destructor call
    exit(0);
}
```

Non usare `DLL_PROCESS_ATTACH` per chiamare `exit` da `DllMain`. Per uscire dall'installazione di `DLLMain` di funzione, restituiti `FALSE` da `DLL_PROCESS_ATTACH`.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|`exit`, `_Exit`, `_exit`|\<process.h> o \<stdlib.h>|

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

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)  
[abort](../../c-runtime-library/reference/abort.md)  
[atexit](../../c-runtime-library/reference/atexit.md)  
[_cexit, _c_exit](../../c-runtime-library/reference/cexit-c-exit.md)  
[Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)  
[_onexit, _onexit_m](../../c-runtime-library/reference/onexit-onexit-m.md)  
[quick_exit](../../c-runtime-library/reference/quick-exit1.md)  
[Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)  
[system, _wsystem](../../c-runtime-library/reference/system-wsystem.md)  
