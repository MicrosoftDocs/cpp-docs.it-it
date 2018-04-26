---
title: _execvpe, _wexecvpe | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _execvpe
- _wexecvpe
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
- wexecvpe
- execvpe
- _wexecvpe
- _execvpe
dev_langs:
- C++
helpviewer_keywords:
- wexecvpe function
- execvpe function
- _wexecvpe function
- _execvpe function
ms.assetid: c0c3c986-d9c0-4814-a96c-10f0b3092766
caps.latest.revision: 23
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 808f991fdf3ef8c8739eb148120922e95ec8f35a
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="execvpe-wexecvpe"></a>_execvpe, _wexecvpe

Carica ed esegue nuovi processi figlio.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
intptr_t _execvpe(
   const char *cmdname,
   const char *const *argv,
   const char *const *envp
);
intptr_t _wexecvpe(
   const wchar_t *cmdname,
   const wchar_t *const *argv,
   const wchar_t *const *envp
);
```

### <a name="parameters"></a>Parametri

*CmdName*<br/>
Percorso del file da eseguire.

*argv*<br/>
Matrice di puntatori ai parametri.

*envp*<br/>
Matrice di puntatori alle impostazioni d'ambiente.

## <a name="return-value"></a>Valore restituito

Se l'operazione riesce, le funzioni non ritornano al processo chiamante. Valore restituito di -1 indica un errore, nel qual caso il **errno** (variabile globale) è impostata.

|**errno** valore|Descrizione|
|-------------------|-----------------|
|**E2BIG**|Lo spazio necessario per gli argomenti e le impostazioni di ambiente supera 32 KB.|
|**EACCES**|Il file specificato dispone di una violazione di blocco o di condivisione.|
|**EMFILE**|Sono aperti troppi file. (Il file specificato deve essere aperto per determinare se sia eseguibile).|
|**ENOENT**|Il file o il percorso non è stato trovato.|
|**ENOEXEC**|Il file specificato non è eseguibile o il formato del file eseguibile non è valido.|
|**ENOMEM**|Memoria insufficiente per eseguire il nuovo processo; la memoria disponibile è stata danneggiata; o esiste un blocco non valido che indica che il processo chiamante non è stato allocato correttamente.|

Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Ognuna di queste funzioni carica ed esegue un nuovo processo, passando una matrice di puntatori agli argomenti della riga di comando e una matrice di puntatori alle impostazioni di ambiente. Queste funzioni usano la **percorso** variabile di ambiente per individuare il file da eseguire.

Il **execvpe** funzioni convalidano i propri parametri. Se il *cmdname* è un puntatore null, o se *argv* è un puntatore null, un puntatore a una matrice vuota o un puntatore a una matrice che contiene una stringa vuota come primo argomento, queste funzioni richiamano il non è valido gestore di parametri, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** alla **EINVAL** e restituiscono -1. Nessun processo viene avviato.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|Intestazione facoltativa|
|--------------|---------------------|---------------------|
|**_execvpe**|\<process.h>|\<errno.h>|
|**_wexecvpe**|\<process.h> o \<wchar.h>|\<errno.h>|

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
