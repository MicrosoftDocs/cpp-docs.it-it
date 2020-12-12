---
description: 'Altre informazioni su: _execle, _wexecle'
title: _execle, _wexecle
ms.date: 11/04/2016
api_name:
- _execle
- _wexecle
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
- wexecle
- _execle
- _wexecle
helpviewer_keywords:
- wexecle function
- execle function
- _wexecle function
- _execle function
ms.assetid: 75efa9c5-96b7-4e23-acab-06258901f63a
ms.openlocfilehash: 28e05222d0ee91f44f96717056117a67afe5c0b4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97304896"
---
# <a name="_execle-_wexecle"></a>_execle, _wexecle

Carica ed esegue nuovi processi figlio.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
intptr_t _execle(
   const char *cmdname,
   const char *arg0,
   ... const char *argn,
   NULL,
   const char *const *envp
);
intptr_t _wexecle(
   const wchar_t *cmdname,
   const wchar_t *arg0,
   ... const wchar_t *argn,
   NULL,
   const char *const *envp
);
```

### <a name="parameters"></a>Parametri

*cmdname*<br/>
Percorso del file da eseguire.

*arg0*,... *argN*<br/>
Elenco di puntatori ai parametri.

*envp*<br/>
Matrice di puntatori alle impostazioni d'ambiente.

## <a name="return-value"></a>Valore restituito

Se l'operazione riesce, le funzioni non ritornano al processo chiamante. Il valore restituito-1 indica un errore, nel qual caso è impostata la variabile globale **errno** .

|**errno** (valore)|Description|
|-------------------|-----------------|
|**E2BIG**|Lo spazio necessario per gli argomenti e le impostazioni di ambiente supera 32 KB.|
|**EACCES**|Il file specificato dispone di una violazione di blocco o di condivisione.|
|**EINVAL**|Parametro non valido.|
|**EMFILE**|Sono aperti troppi file. (Il file specificato deve essere aperto per determinare se sia eseguibile).|
|**ENOENT**|Il file o il percorso non è stato trovato.|
|**ENOEXEC**|Il file specificato non è eseguibile o il formato del file eseguibile non è valido.|
|**ENOMEM**|Memoria insufficiente per eseguire il nuovo processo; la memoria disponibile è stata danneggiata; o esiste un blocco non valido che indica che il processo chiamante non è stato allocato correttamente.|

Per altre informazioni su questi codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

Ognuna di queste funzioni carica ed esegue un nuovo processo, passa ogni argomento della riga di comando come parametro separato e passa una matrice di puntatori alle impostazioni di ambiente.

Le funzioni **_execle** convalidano i relativi parametri. Se *CmdName* o *arg0* è un puntatore null o una stringa vuota, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono-1. Non viene avviato alcun nuovo processo.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|Intestazione facoltativa|
|--------------|---------------------|---------------------|
|**_execle**|\<process.h>|\<errno.h>|
|**_wexecle**|\<process.h> o \<wchar.h>|\<errno.h>|

Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio in [Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md).

## <a name="see-also"></a>Vedi anche

[Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[_exec, funzioni _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[interruzione](abort.md)<br/>
[atexit](atexit.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[_spawn, funzioni _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
