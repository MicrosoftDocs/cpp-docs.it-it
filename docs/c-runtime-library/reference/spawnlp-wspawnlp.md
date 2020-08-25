---
title: _spawnlp, _wspawnlp
ms.date: 11/04/2016
api_name:
- _wspawnlp
- _spawnlp
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
- api-ms-win-crt-process-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _wspawnlp
- wspawnlp
- _spawnlp
helpviewer_keywords:
- wspawnlp function
- _spawnlp function
- processes, creating
- processes, executing new
- _wspawnlp function
- process creation
- spawnlp function
ms.assetid: 74fc6e7a-4f24-4103-9387-7177875875e6
ms.openlocfilehash: 68ad011af1a53452c0f3cfda02bdf80582a8431b
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88845952"
---
# <a name="_spawnlp-_wspawnlp"></a>_spawnlp, _wspawnlp

Crea ed esegue un nuovo processo.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
intptr_t _spawnlp(
   int mode,
   const char *cmdname,
   const char *arg0,
   const char *arg1,
   ... const char *argn,
   NULL
);
intptr_t _wspawnlp(
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

*cmdname*<br/>
Percorso del file da eseguire.

*arg0*, *arg1*,... *argN*<br/>
Elenco dei puntatori agli argomenti. L'argomento *arg0* è in genere un puntatore a *CmdName*. Gli argomenti *arg1* tramite *argN* sono puntatori alle stringhe di caratteri che costituiscono il nuovo elenco di argomenti. Dopo *argN*, deve essere presente un puntatore **null** per contrassegnare la fine dell'elenco di argomenti.

## <a name="return-value"></a>Valore restituito

Il valore restituito da un **_spawnlp** sincrono o da un **_wspawnlp** (**_P_WAIT** specificato per la *modalità*) è lo stato di uscita del nuovo processo. Il valore restituito da un **_spawnlp** asincrono o da un **_wspawnlp** (**_P_NOWAIT** o **_P_NOWAITO** specificato per la *modalità*) è l'handle del processo. Lo stato di uscita è 0 se il processo è terminato normalmente. È possibile impostare lo stato di uscita su un valore diverso da zero se il processo generato chiama in modo specifico la routine di **uscita** con un argomento diverso da zero. Se il nuovo processo non ha impostato in modo esplicito uno stato di uscita positivo, uno stato di uscita positivo indica l'uscita anomala con interruzione. Un valore restituito-1 indica un errore (il nuovo processo non è stato avviato). In questo caso **errno** viene impostato su uno dei valori seguenti.

| Valore | Descrizione |
|-|-|
| **E2BIG** | L'elenco di argomenti supera i 1024 byte. |
| **EINVAL** | argomento *mode* non valido. |
| **ENOENT** | Il file o il percorso non è stato trovato. |
| **ENOEXEC** | Il file specificato non è eseguibile o il formato del file eseguibile non è valido. |
| **ENOMEM** | Memoria insufficiente per eseguire il nuovo processo. |

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Ognuna di queste funzioni crea ed esegue un nuovo processo, passando ogni argomento della riga di comando come parametro separato e usando la variabile di ambiente **path** per trovare il file da eseguire.

Queste funzioni convalidano i relativi parametri. Se *CmdName* o *arg0* è una stringa vuota o un puntatore null, queste funzioni generano un'eccezione di parametro non valido, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL**e restituiscono-1. Nessun nuovo processo viene generato.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_spawnlp**|\<process.h>|
|**_wspawnlp**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio in [_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md).

## <a name="see-also"></a>Vedere anche

[Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[_spawn, funzioni _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[interruzione](abort.md)<br/>
[atexit](atexit.md)<br/>
[_exec, funzioni _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_flushall](flushall.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
