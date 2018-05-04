---
title: quick_exit1 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
apiname:
- quick_exit
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
- quick_exit
- process/quick_exit
- stdlib/quick_exit
dev_langs:
- C++
helpviewer_keywords:
- quick_exit function
ms.assetid: ecfbdae6-01c4-45fa-aaeb-b368e1de2a9c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: de3eb88093db0eea470a0c1d775516574c466ddd
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="quickexit"></a>quick_exit

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

Il **quick_exit** funzione non può restituire al chiamante.

## <a name="remarks"></a>Note

Il **quick_exit** funzione causa la chiusura del programma normale. Chiama le funzioni registrate da **atexit**, **OnExit** o segnalare i gestori registrati per il **segnale** (funzione). Comportamento sarà indefinito se **quick_exit** viene chiamato più di una volta o se il **uscire** viene anche chiamata di funzione.

Il **quick_exit** chiamate di funzioni, last-in, First-Out (LIFO) ordine, le funzioni registrate da **at_quick_exit**, ad eccezione di quelle già chiamate durante la registrazione della funzione.  Il comportamento non è definito se viene eseguita una chiamata a [longjmp](longjmp.md) durante una chiamata a una funzione registrata che interrompe la chiamata alla funzione.

Dopo aver chiamate le funzioni registrate, **quick_exit** richiama **Exit** tramite il *stato* valore per restituire il controllo all'ambiente host.

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
