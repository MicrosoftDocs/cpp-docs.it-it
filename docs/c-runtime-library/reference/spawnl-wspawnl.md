---
title: _spawnl, _wspawnl
ms.date: 11/04/2016
apiname:
- _wspawnl
- _spawnl
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
- api-ms-win-crt-process-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- spawnl
- wspawnl
- _wspawnl
- _spawnl
helpviewer_keywords:
- spawnl function
- processes, creating
- _spawnl function
- processes, executing new
- _wspawnl function
- wspawnl function
- process creation
ms.assetid: dd4584c9-7173-4fc5-b93a-6e7d3c2316d7
ms.openlocfilehash: 4dbc8fab611d98f7f87529196b0e10e85196faa9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50518079"
---
# <a name="spawnl-wspawnl"></a>_spawnl, _wspawnl

Crea ed esegue un nuovo processo.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
intptr_t _spawnl(
   int mode,
   const char *cmdname,
   const char *arg0,
   const char *arg1,
   ... const char *argn,
   NULL
);
intptr_t _wspawnl(
   int mode,
   const wchar_t *cmdname,
   const wchar_t *arg0,
   const wchar_t *arg1,
   ... const wchar_t *argn,
   NULL
);
```

### <a name="parameters"></a>Parametri

*mode*<br/>
Modalità di esecuzione del processo chiamante.

*CmdName*<br/>
Percorso del file da eseguire.

*arg0*, *arg1*,... *argn*<br/>
Elenco dei puntatori agli argomenti. Il *arg0* argomento è in genere un puntatore a *cmdname*. Gli argomenti *arg1* attraverso *argn* sono puntatori alle stringhe di caratteri che costituiscono il nuovo elenco di argomenti. Seguendo *argn*, deve essere presente un **NULL** puntatore per contrassegnare la fine dell'elenco di argomenti.

## <a name="return-value"></a>Valore restituito

Il valore restituito da un oggetto sincrono **spawnl** oppure **wspawnl** (**P_WAIT** specificata per *modalità*) è lo stato di uscita del nuovo processo. Il valore restituito da un'asincrona **spawnl** oppure **wspawnl** (**P_NOWAIT** oppure **P_NOWAITO** specificato per *modalità* ) è l'handle del processo. Lo stato di uscita è 0 se il processo è terminato normalmente. È possibile impostare lo stato di uscita su un valore diverso da zero se il processo generato chiama specificatamente la **uscire** routine con un argomento diverso da zero. Se il nuovo processo non ha impostato in modo esplicito uno stato di uscita positivo, uno stato di uscita positivo indica l'uscita anomala con interruzione. Valore restituito di -1 indica un errore (non viene avviato il nuovo processo). In questo caso **errno** è impostato su uno dei valori seguenti.

|||
|-|-|
**E2BIG**|L'elenco di argomenti supera i 1024 byte.
**EINVAL**|*modalità* argomento non è valido.
**ENOENT**|Il file o il percorso non è stato trovato.
**ENOEXEC**|Il file specificato non è eseguibile o il formato del file eseguibile non è valido.
**ENOMEM**|Memoria insufficiente per eseguire il nuovo processo.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Queste funzioni convalidano i relativi parametri. Se uno dei due *cmdname* oppure *arg0* è una stringa vuota o un puntatore null, il gestore di parametri non validi viene richiamato, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** al **EINVAL**e restituiscono -1. Nessun nuovo processo viene generato.

## <a name="remarks"></a>Note

Ognuna di queste funzioni crea ed esegue un nuovo processo, passando ogni argomento della riga di comando come parametro separato.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_spawnl**|\<process.h>|
|**_wspawnl**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio in [Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md).

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[abort](abort.md)<br/>
[atexit](atexit.md)<br/>
[Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_flushall](flushall.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
