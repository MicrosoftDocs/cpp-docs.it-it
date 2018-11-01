---
title: _spawnv, _wspawnv
ms.date: 11/04/2016
apiname:
- _wspawnv
- _spawnv
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
- wspawnv
- _spawnv
- _wspawnv
helpviewer_keywords:
- wspawnv function
- processes, creating
- _spawnv function
- processes, executing new
- process creation
- _wspawnv function
- spawnv function
ms.assetid: 72360ef4-dfa9-44c1-88c1-b3ecb660aa7d
ms.openlocfilehash: 4f6e24135a040e0b081016041192d2ae196d1037
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50576749"
---
# <a name="spawnv-wspawnv"></a>_spawnv, _wspawnv

Crea ed esegue un nuovo processo.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
intptr_t _spawnv(
   int mode,
   const char *cmdname,
   const char *const *argv
);
intptr_t _wspawnv(
   int mode,
   const wchar_t *cmdname,
   const wchar_t *const *argv
);
```

### <a name="parameters"></a>Parametri

*mode*<br/>
Modalità di esecuzione del processo chiamante.

*CmdName*<br/>
Percorso del file da eseguire.

*argv*<br/>
Matrice di puntatori agli argomenti. L'argomento *argv*[0] è in genere un puntatore a un percorso in modalità reale o al nome del programma in modalità protetta, e *argv*[1] tramite *argv*[**n**] sono puntatori alle stringhe di caratteri che costituiscono il nuovo elenco di argomenti. L'argomento *argv*[**n** + 1] deve essere un **NULL** puntatore per contrassegnare la fine dell'elenco di argomenti.

## <a name="return-value"></a>Valore restituito

Il valore restituito da un oggetto sincrono **spawnv** oppure **wspawnv** (**P_WAIT** specificata per *modalità*) è lo stato di uscita del nuovo processo. Il valore restituito da un'asincrona **spawnv** oppure **wspawnv** (**P_NOWAIT** oppure **P_NOWAITO** specificato per *modalità* ) è l'handle del processo. Lo stato di uscita è 0 se il processo è terminato normalmente. È possibile impostare lo stato di uscita su un valore diverso da zero se il processo generato chiama specificatamente la **uscire** routine con un argomento diverso da zero. Se il nuovo processo non ha impostato in modo esplicito uno stato di uscita positivo, uno stato di uscita positivo indica l'uscita anomala con interruzione. Valore restituito di -1 indica un errore (non viene avviato il nuovo processo). In questo caso **errno** è impostato su uno dei valori seguenti.

|||
|-|-|
**E2BIG**|L'elenco di argomenti supera i 1024 byte.
**EINVAL**|*modalità* argomento non è valido.
**ENOENT**|Il file o il percorso non è stato trovato.
**ENOEXEC**|Il file specificato non è eseguibile o il formato del file eseguibile non è valido.
**ENOMEM**|Memoria insufficiente per eseguire il nuovo processo.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Ognuna di queste funzioni crea ed esegue un nuovo processo, passando una matrice di puntatori agli argomenti della riga di comando.

Queste funzioni convalidano i relativi parametri. Se uno dei due *cmdname* oppure *argv* è un puntatore null, o se *argv* punta a un puntatore null oppure *argv*[0] è una stringa vuota, non valido viene richiamato il gestore di parametro, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** al **EINVAL**e restituiscono -1. Nessun nuovo processo viene generato.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_spawnv**|\<stdio.h> o \<process.h>|
|**_wspawnv**|\<stdio.h> o \<wchar.h>|

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
