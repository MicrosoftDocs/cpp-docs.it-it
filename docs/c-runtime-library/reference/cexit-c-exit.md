---
description: 'Altre informazioni su: _cexit, _c_exit'
title: _cexit, _c_exit
ms.date: 4/2/2020
api_name:
- _c_exit
- _cexit
- _o__cexit
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
ms.openlocfilehash: e901e7d7e37c8702efaae8b3b70e98a400f48ef1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275100"
---
# <a name="_cexit-_c_exit"></a>_cexit, _c_exit

Esegue operazioni di pulizia e restituisce senza terminare il processo.

## <a name="syntax"></a>Sintassi

```C
void _cexit( void );
void _c_exit( void );
```

## <a name="remarks"></a>Osservazioni

La funzione **_cexit** chiama, in ordine LIFO (Last-in, First-out), le funzioni registrate da **atexit** e **_onexit**. Quindi **_cexit** Scarica tutti i buffer di i/O e chiude tutti i flussi aperti prima della restituzione. **_c_exit** è uguale a **_exit** ma ritorna al processo chiamante senza elaborare **atexit** o **_onexit** o scaricare buffer di flusso. Il comportamento di **Exit**, **_exit**, **_cexit** e **_c_exit** è illustrato nella tabella seguente.

|Funzione|Comportamento|
|--------------|--------------|
|**exit**|Esegue le procedure complete di terminazione della libreria C, termina il processo ed esce con il codice di stato specificato.|
|**_exit**|Esegue le procedure rapide di terminazione della libreria C, termina il processo ed esce con il codice di stato specificato.|
|**_cexit**|Esegue le procedure complete di terminazione della libreria C e restituisce al chiamante, ma non termina il processo.|
|**_c_exit**|Esegue le procedure rapide di terminazione della libreria C e restituisce al chiamante, ma non termina il processo.|

Quando si chiamano le funzioni **_cexit** o **_c_exit** , i distruttori per gli oggetti temporanei o automatici presenti al momento della chiamata non vengono chiamati. Un oggetto automatico è un oggetto definito in una funzione in cui l'oggetto non è dichiarato come statico. Un oggetto temporaneo è un oggetto creato dal compilatore. Per eliminare un oggetto automatico prima di chiamare **_cexit** o **_c_exit**, chiamare in modo esplicito il distruttore per l'oggetto, come indicato di seguito:

```cpp
myObject.myClass::~myClass( );
```

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_cexit**|\<process.h>|
|**_c_exit**|\<process.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[interruzione](abort.md)<br/>
[atexit](atexit.md)<br/>
[_exec, funzioni _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[_spawn, funzioni _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
