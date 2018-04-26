---
title: _cexit, _c_exit | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- cleanup operations during processes
- cexit function
- _c_exit function
- _cexit function
- c_exit function
ms.assetid: f3072045-9924-4b1a-9fef-b0dcd6d12663
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3b4310ac5c0bac6853da23f7f491a757a7014ebe
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="cexit-cexit"></a>_cexit, _c_exit

Esegue operazioni di pulizia e restituisce senza terminare il processo.

## <a name="syntax"></a>Sintassi

```C
void _cexit( void );
void _c_exit( void );
```

## <a name="remarks"></a>Note

Il **cexit** chiamate di funzioni, last-in, First-Out (LIFO) ordine, le funzioni registrate da **atexit** e **OnExit**. Quindi **cexit** Scarica tutti i buffer dei / o e chiude tutti i flussi aperti prima della restituzione. **c_exit** corrisponde al **Exit** ma restituisce al processo chiamante senza elaborazione **atexit** oppure **OnExit** o scaricare i buffer di flusso. Il comportamento delle **uscire**, **Exit**, **cexit**, e **c_exit** illustrato nella tabella seguente.

|Funzione|Comportamento|
|--------------|--------------|
|**exit**|Esegue le procedure complete di terminazione della libreria C, termina il processo ed esce con il codice di stato specificato.|
|**_exit**|Esegue le procedure rapide di terminazione della libreria C, termina il processo ed esce con il codice di stato specificato.|
|**_cexit**|Esegue le procedure complete di terminazione della libreria C e restituisce al chiamante, ma non termina il processo.|
|**_c_exit**|Esegue le procedure rapide di terminazione della libreria C e restituisce al chiamante, ma non termina il processo.|

Quando si chiama il **cexit** oppure **c_exit** funzioni, i distruttori per gli oggetti temporanei o automatici presenti al momento della chiamata non vengono chiamati. Un oggetto automatico è un oggetto definito in una funzione in cui l'oggetto non è dichiarato come statico. Un oggetto temporaneo è un oggetto creato dal compilatore. Per eliminare un oggetto automatico prima di chiamare **cexit** oppure **c_exit**, in modo esplicito chiama il distruttore per l'oggetto, come indicato di seguito:

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
