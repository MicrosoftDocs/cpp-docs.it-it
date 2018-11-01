---
title: _cexit, _c_exit
ms.date: 11/04/2016
apiname:
- _c_exit
- _cexit
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
- _cexit
- c_exit
- _c_exit
- cexit
helpviewer_keywords:
- cleanup operations during processes
- cexit function
- _c_exit function
- _cexit function
- c_exit function
ms.assetid: f3072045-9924-4b1a-9fef-b0dcd6d12663
ms.openlocfilehash: a075e8a8e965a195765b86ffa21fed0915dbf5ab
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50495134"
---
# <a name="cexit-cexit"></a>_cexit, _c_exit

Esegue operazioni di pulizia e restituisce senza terminare il processo.

## <a name="syntax"></a>Sintassi

```C
void _cexit( void );
void _c_exit( void );
```

## <a name="remarks"></a>Note

Il **cexit** chiamate a funzioni, in last-in, First-Out (LIFO) ordine, le funzioni registrate da **atexit** e **OnExit**. Quindi **cexit** Scarica tutti i buffer dei / o e chiude tutti i flussi aperti prima della restituzione. **c_exit** equivale a **Exit** ma restituisce al processo chiamante senza elaborazione **atexit** oppure **OnExit** o scaricare i buffer di flusso. Il comportamento delle **uscire**, **Exit**, **cexit**, e **c_exit** è illustrato nella tabella seguente.

|Funzione|Comportamento|
|--------------|--------------|
|**exit**|Esegue le procedure complete di terminazione della libreria C, termina il processo ed esce con il codice di stato specificato.|
|**_exit**|Esegue le procedure rapide di terminazione della libreria C, termina il processo ed esce con il codice di stato specificato.|
|**_cexit**|Esegue le procedure complete di terminazione della libreria C e restituisce al chiamante, ma non termina il processo.|
|**_c_exit**|Esegue le procedure rapide di terminazione della libreria C e restituisce al chiamante, ma non termina il processo.|

Quando si chiama il **cexit** oppure **c_exit** funzioni, i distruttori per gli oggetti temporanei o automatici presenti al momento della chiamata non vengono chiamati. Un oggetto automatico è un oggetto definito in una funzione in cui l'oggetto non è dichiarato come statico. Un oggetto temporaneo è un oggetto creato dal compilatore. Per eliminare un oggetto automatico prima di chiamare **cexit** oppure **c_exit**, in modo esplicito chiama il distruttore dell'oggetto, come indicato di seguito:

```cpp
myObject.myClass::~myClass( );
```

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_cexit**|\<process.h>|
|**_c_exit**|\<process.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[abort](abort.md)<br/>
[atexit](atexit.md)<br/>
[Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
