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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: 5bdb5ff5c8309e03a49f9518f65a45d5757e9bfa
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81347628"
---
# <a name="exit-_exit-_exit"></a>exit, _Exit, _exit

Termina il processo di chiamata. La funzione **di uscita** termina dopo la pulizia; **_exit** e **_Exit** terminarlo immediatamente.

> [!NOTE]
> Non usare questo metodo per arrestare un'app UWP (Universal Windows Platform), tranne negli scenari di test o debug. Le modalità a livello di codice o dell'interfaccia utente per chiudere un'app di Store non sono consentite in base ai criteri di [Microsoft Store.](/legal/windows/agreements/store-policies) Per ulteriori informazioni, vedere Ciclo di [vita dell'app UWP](/windows/uwp/launch-resume/app-lifecycle). Per altre informazioni sulle app di Windows 10, vedere [Guide pratiche per le app di Windows 10](https://developer.microsoft.com/windows/apps).

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

## <a name="remarks"></a>Osservazioni

Le funzioni **exit**, **_Exit** e **_exit** terminano il processo chiamante. La funzione **exit** chiama i distruttori per gli oggetti locali di thread, quindi chiama, in ordine LIFO (last-in-first-out), le funzioni registrate da **atexit** e **_onexit**, quindi svuota tutti i buffer di file prima di terminare il processo. Le funzioni **_Exit** e **_exit** terminano il processo senza distruggere oggetti locali del thread o elaborare funzioni **atexit** o **_onexit** e senza svuotare i buffer del flusso.

Anche se le chiamate **exit**, **_Exit** e **_exit** non restituiscono un valore, il valore in *stato* viene reso disponibile all'ambiente host o al processo chiamante in attesa, se presente, dopo la chiusura del processo. In genere, il chiamante imposta il valore di *stato su* 0 per indicare un'uscita normale o su un altro valore per indicare un errore. Il valore di *stato* è disponibile per il comando batch del sistema operativo **ERRORLEVEL** ed è rappresentato da una delle due costanti **seguenti: EXIT_SUCCESS**, che rappresenta un valore pari a 0 o **EXIT_FAILURE**, che rappresenta un valore pari a 1.

Le funzioni **exit**, **_Exit**, **_exit**, **quick_exit** **, _cexit**e **_c_exit** si comportano come indicato di seguito.

|Funzione|Descrizione|
|--------------|-----------------|
|**Uscita**|Esegue le procedure complete di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**_Exit**|Esegue le procedure minime di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**_exit**|Esegue le procedure minime di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**quick_exit**|Esegue le procedure rapide di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|
|**_cexit**|Esegue le procedure complete di terminazione della libreria C e torna al chiamante. Non termina il processo.|
|**_c_exit**|Esegue le procedure minime di terminazione della libreria C e torna al chiamante. Non termina il processo.|

Quando si chiama la funzione **exit**, **_Exit** o **_exit** , i distruttori per tutti gli oggetti temporanei o automatici esistenti al momento della chiamata non vengono chiamati. Un oggetto automatico è un oggetto locale non statico definito in una funzione. Un oggetto temporaneo è un oggetto creato dal compilatore, ad esempio un valore restituito da una chiamata di funzione. Per eliminare definitivamente un oggetto automatico prima di chiamare **exit**, **_Exit**o **_exit**, chiamare in modo esplicito il distruttore per l'oggetto, come illustrato di seguito:

```cpp
void last_fn() {}
    struct SomeClass {} myInstance{};
    // ...
    myInstance.~SomeClass(); // explicit destructor call
    exit(0);
}
```

Non utilizzare **DLL_PROCESS_ATTACH** per chiamare **la chiusura** da **DllMain**. Per uscire dalla funzione **DLLMain,** restituire **FALSE** da **DLL_PROCESS_ATTACH**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**uscire**, **_Exit**, **_exit**|\<process.h> o \<stdlib.h>|

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
[Interrompere](abort.md)<br/>
[atexit](atexit.md)<br/>
[_cexit, _c_exit](cexit-c-exit.md)<br/>
[Funzioni _exec _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[quick_exit](quick-exit1.md)<br/>
[Funzioni _spawn e _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
