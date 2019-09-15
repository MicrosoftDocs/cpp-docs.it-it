---
title: _cexit, _c_exit
ms.date: 11/04/2016
api_name:
- _c_exit
- _cexit
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
ms.openlocfilehash: aa25d73bef1d85adfed77ba926e2d381e02e45e8
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70939259"
---
# <a name="_cexit-_c_exit"></a>_cexit, _c_exit

Esegue operazioni di pulizia e restituisce senza terminare il processo.

## <a name="syntax"></a>Sintassi

```C
void _cexit( void );
void _c_exit( void );
```

## <a name="remarks"></a>Note

La funzione **_cexit** chiama, in ordine LIFO (Last-in, First-out), le funzioni registrate da **atexit** e **_onexit**. **_Cexit** Scarica quindi tutti i buffer di i/O e chiude tutti i flussi aperti prima della restituzione. **_c_exit** è uguale a **_exit** , ma restituisce al processo chiamante senza elaborare **atexit** o **_onexit** o scaricare i buffer di flusso. La tabella seguente illustra il comportamento di **Exit**, **_exit**, **_cexit**e **_c_exit** .

|Funzione|Comportamento|
|--------------|--------------|
|**exit**|Esegue le procedure complete di terminazione della libreria C, termina il processo ed esce con il codice di stato specificato.|
|**_exit**|Esegue le procedure rapide di terminazione della libreria C, termina il processo ed esce con il codice di stato specificato.|
|**_cexit**|Esegue le procedure complete di terminazione della libreria C e restituisce al chiamante, ma non termina il processo.|
|**_c_exit**|Esegue le procedure rapide di terminazione della libreria C e restituisce al chiamante, ma non termina il processo.|

Quando si chiamano le funzioni **_cexit** o **_c_exit** , i distruttori per gli oggetti temporanei o automatici presenti al momento della chiamata non vengono chiamati. Un oggetto automatico è un oggetto definito in una funzione in cui l'oggetto non è dichiarato come statico. Un oggetto temporaneo è un oggetto creato dal compilatore. Per eliminare definitivamente un oggetto automatico prima di chiamare **_cexit** o **_c_exit**, chiamare in modo esplicito il distruttore per l'oggetto, come indicato di seguito:

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
