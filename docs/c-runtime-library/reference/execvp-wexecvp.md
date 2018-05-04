---
title: _execvp, _wexecvp | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _execvp
- _wexecvp
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
- _execvp
- wexecvp
- _wexecvp
dev_langs:
- C++
helpviewer_keywords:
- _execvp function
- _wexecvp function
- wexecvp function
- execvp function
ms.assetid: a4db15df-b204-4987-be7c-de84c3414380
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8c47154bd999b421c2170118236a899dcc4e2860
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="execvp-wexecvp"></a>_execvp, _wexecvp

Carica ed esegue nuovi processi figlio.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
intptr_t _execvp(
   const char *cmdname,
   const char *const *argv
);
intptr_t _wexecvp(
   const wchar_t *cmdname,
   const wchar_t *const *argv
);
```

### <a name="parameters"></a>Parametri

*CmdName*<br/>
Percorso del file da eseguire.

*argv*<br/>
Matrice di puntatori ai parametri.

## <a name="return-value"></a>Valore restituito

Se l'operazione riesce, le funzioni non ritornano al processo chiamante. Valore restituito di -1 indica un errore, nel qual caso il **errno** (variabile globale) è impostata.

|**errno** valore|Descrizione|
|-------------------|-----------------|
|**E2BIG**|Lo spazio necessario per gli argomenti e le impostazioni di ambiente supera 32 KB.|
|**EACCES**|Il file specificato dispone di una violazione di blocco o di condivisione.|
|**EINVAL**|Parametro non valido.|
|**EMFILE**|Troppi file aperti (il file specificato deve essere aperto per determinare se sia eseguibile).|
|**ENOENT**|File o percorso non trovato.|
|**ENOEXEC**|Il file specificato non è eseguibile o il formato del file eseguibile non è valido.|
|**ENOMEM**|Memoria insufficiente per eseguire il nuovo processo; la memoria disponibile è stata danneggiata; o esiste un blocco non valido che indica che il processo chiamante non è stato allocato correttamente.|

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Ognuna di queste funzioni carica ed esegue un nuovo processo, passando una matrice di puntatori agli argomenti della riga di comando e utilizzando il **percorso** variabile di ambiente per individuare il file da eseguire.

Il **execvp** funzioni convalidano i propri parametri. Se il *cmdname* è un puntatore null, o *argv* è un puntatore null, puntatore a una matrice vuota, o se la matrice contiene una stringa vuota come primo argomento, queste funzioni richiamano il gestore di parametri non validi come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** alla **EINVAL** e restituiscono -1. Nessun processo viene avviato.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|Intestazione facoltativa|
|--------------|---------------------|---------------------|
|**_execvp**|\<process.h>|\<errno.h>|
|**_wexecvp**|\<process.h> o \<wchar.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio in [Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md).

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[abort](abort.md)<br/>
[atexit](atexit.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
