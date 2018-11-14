---
title: _spawnvp, _wspawnvp
ms.date: 11/04/2016
apiname:
- _wspawnvp
- _spawnvp
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
- _wspawnvp
- _spawnvp
- wspawnvp
helpviewer_keywords:
- wspawnvp function
- processes, creating
- _wspawnvp function
- processes, executing new
- spawnvp function
- process creation
- _spawnvp function
ms.assetid: 8d8774ec-6ad4-4680-a5aa-440cde1e0249
ms.openlocfilehash: b697eabd7a45eedbf9c892acee570a9e8b818d1b
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51330723"
---
# <a name="spawnvp-wspawnvp"></a>_spawnvp, _wspawnvp

Crea un processo e lo esegue.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
intptr_t _spawnvp(
   int mode,
   const char *cmdname,
   const char *const *argv
);
intptr_t _wspawnvp(
   int mode,
   const wchar_t *cmdname,
   const wchar_t *const *argv
);
```

### <a name="parameters"></a>Parametri

*mode*<br/>
Modalità di esecuzione per la chiamata al processo.

*CmdName*<br/>
Percorso del file da eseguire.

*argv*<br/>
Matrice di puntatori agli argomenti. L'argomento *argv*[0] è in genere un puntatore a un percorso in modalità reale o al nome del programma in modalità protetta, e *argv*[1] tramite *argv*[**n**] sono puntatori alle stringhe di caratteri che costituiscono il nuovo elenco di argomenti. L'argomento *argv*[**n** + 1] deve essere un **NULL** puntatore per contrassegnare la fine dell'elenco di argomenti.

## <a name="return-value"></a>Valore restituito

Il valore restituito da un oggetto sincrono **spawnvp** oppure **wspawnvp** (**P_WAIT** specificata per *modalità*) è lo stato di uscita del nuovo processo . Il valore restituito da asincrono **spawnvp** oppure **wspawnvp** (**P_NOWAIT** oppure **P_NOWAITO** specificato per  *modalità*) è l'handle del processo. Lo stato di uscita è 0 se il processo è terminato normalmente. È possibile impostare lo stato di uscita su un valore diverso da zero se il processo generato Usa specificatamente un argomento diverso da zero per chiamare il **uscire** routine. Se il nuovo processo non ha impostato in modo esplicito uno stato di uscita positivo, uno stato di uscita positivo indica l'uscita anomala con interruzione. Valore restituito di -1 indica un errore (non viene avviato il nuovo processo). In questo caso **errno** è impostato su uno dei valori seguenti:

|||
|-|-|
| **E2BIG** | L'elenco di argomenti supera i 1024 byte. |
| **EINVAL** | *modalità* argomento non è valido. |
| **ENOENT** | Il file o il percorso non è stato trovato. |
| **ENOEXEC** | Il file specificato non è eseguibile o il formato del file eseguibile non è valido. |
| **ENOMEM** | Memoria insufficiente per eseguire il nuovo processo. |

Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Ognuna di queste funzioni crea un nuovo processo viene eseguito e passa una matrice di puntatori agli argomenti della riga di comando e Usa il **percorso** variabile di ambiente per individuare il file da eseguire.

Queste funzioni convalidano i relativi parametri. Se uno dei due *cmdname* oppure *argv* è un puntatore null, o se *argv* punta a un puntatore null oppure *argv*[0] è una stringa vuota, non valido viene richiamato il gestore di parametro, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** al **EINVAL**e restituiscono -1. Nessun nuovo processo viene generato.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_spawnvp**|\<stdio.h> o \<process.h>|
|**_wspawnvp**|\<stdio.h> o \<wchar.h>|

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
