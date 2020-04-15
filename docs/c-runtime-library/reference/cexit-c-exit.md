---
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: 9eb856efca054423465aa7d30092edaf83a65eeb
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81333537"
---
# <a name="_cexit-_c_exit"></a>_cexit, _c_exit

Esegue operazioni di pulizia e restituisce senza terminare il processo.

## <a name="syntax"></a>Sintassi

```C
void _cexit( void );
void _c_exit( void );
```

## <a name="remarks"></a>Osservazioni

La funzione **_cexit** chiama, in ordine LIFO (Last-In, First-Out), le funzioni registrate da **atexit** e **_onexit**. Il **_cexit** svuota quindi tutti i buffer di I/O e chiude tutti i flussi aperti prima della restituzione. **_c_exit** è uguale a **_exit** ma ritorna al processo chiamante senza elaborare **atexit** o **_onexit** o svuotare i buffer di flusso. Nella tabella seguente viene illustrato il comportamento di **exit**, **_exit**, **_cexit**e **_c_exit** .

|Funzione|Comportamento|
|--------------|--------------|
|**Uscita**|Esegue le procedure complete di terminazione della libreria C, termina il processo ed esce con il codice di stato specificato.|
|**_exit**|Esegue le procedure rapide di terminazione della libreria C, termina il processo ed esce con il codice di stato specificato.|
|**_cexit**|Esegue le procedure complete di terminazione della libreria C e restituisce al chiamante, ma non termina il processo.|
|**_c_exit**|Esegue le procedure rapide di terminazione della libreria C e restituisce al chiamante, ma non termina il processo.|

Quando si chiamano le funzioni **_cexit** o **_c_exit,** i distruttori per tutti gli oggetti temporanei o automatici esistenti al momento della chiamata non vengono chiamati. Un oggetto automatico è un oggetto definito in una funzione in cui l'oggetto non è dichiarato come statico. Un oggetto temporaneo è un oggetto creato dal compilatore. Per eliminare un oggetto automatico prima di chiamare **_cexit** o **_c_exit**, chiamare in modo esplicito il distruttore per l'oggetto, come indicato di seguito:

```cpp
myObject.myClass::~myClass( );
```

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_cexit**|\<process.h>|
|**_c_exit**|\<process.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md) (Controllo processo e ambiente)<br/>
[Interrompere](abort.md)<br/>
[atexit](atexit.md)<br/>
[Funzioni _exec _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[Funzioni _spawn e _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
