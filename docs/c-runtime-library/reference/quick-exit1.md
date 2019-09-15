---
title: quick_exit1
ms.date: 11/04/2016
api_name:
- quick_exit
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
- quick_exit
- process/quick_exit
- stdlib/quick_exit
helpviewer_keywords:
- quick_exit function
ms.assetid: ecfbdae6-01c4-45fa-aaeb-b368e1de2a9c
ms.openlocfilehash: 86246ed7a32dcd2f12b38aa4148570fc5fb3b7a6
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70949679"
---
# <a name="quick_exit"></a>quick_exit

Causa la normale chiusura del programma.

## <a name="syntax"></a>Sintassi

```C
__declspec(noreturn) void quick_exit(
    int status
);
```

### <a name="parameters"></a>Parametri

*status*<br/>
Codice di stato da restituire all'ambiente host.

## <a name="return-value"></a>Valore restituito

La funzione **quick_exit** non può tornare al chiamante.

## <a name="remarks"></a>Note

La funzione **quick_exit** causa la normale chiusura del programma. Non chiama funzioni registrate da **atexit**, **_onexit** o gestori di segnale registrati dalla funzione **Signal** . Il comportamento non è definito se **quick_exit** viene chiamato più di una volta o se viene chiamata anche la funzione **Exit** .

La funzione **quick_exit** chiama, in ordine LIFO (Last-in, First-out), le funzioni registrate da **at_quick_exit**, tranne quelle già chiamate quando la funzione è stata registrata.  Il comportamento non è definito se viene eseguita una chiamata a [longjmp](longjmp.md) durante una chiamata a una funzione registrata che interrompe la chiamata alla funzione.

Dopo aver chiamato le funzioni registrate, **quick_exit** richiama **_Exit** usando il valore *dello stato* per restituire il controllo all'ambiente host.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**quick_exit**|\<process.h> o \<stdlib.h>|

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
