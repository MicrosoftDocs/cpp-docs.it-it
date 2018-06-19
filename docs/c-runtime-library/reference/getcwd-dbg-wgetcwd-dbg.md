---
title: _getcwd_dbg, _wgetcwd_dbg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _wgetcwd_dbg
- _getcwd_dbg
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
- api-ms-win-crt-environment-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _getcwd_dbg
- _wgetcwd_dbg
- getcwd_dbg
- wgetcwd_dbg
dev_langs:
- C++
helpviewer_keywords:
- wgetcwd_dbg function
- working directory
- _getcwd_dbg function
- getcwd_dbg function
- current working directory
- _wgetcwd_dbg function
- directories [C++], current working
ms.assetid: 8d5d151f-d844-4aa6-a28c-1c11a22dc00d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2b4124b5825f27ec26afdb40f0ccc9e4de4ed087
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32401555"
---
# <a name="getcwddbg-wgetcwddbg"></a>_getcwd_dbg, _wgetcwd_dbg

Versioni di debug delle funzioni [_getcwd, _wgetcwd](getcwd-wgetcwd.md) (disponibili solo durante il debug).

## <a name="syntax"></a>Sintassi

```C
char *_getcwd_dbg(
   char *buffer,
   int maxlen,
   int blockType,
   const char *filename,
   int linenumber
);
wchar_t *_wgetcwd_dbg(
   wchar_t *buffer,
   int maxlen,
   int blockType,
   const char *filename,
   int linenumber
);
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Posizione di archiviazione per il percorso.

*maxlen*<br/>
Lunghezza massima del percorso in caratteri: **char** per **getcwd_dbg** e **wchar_t** per **wgetcwd_dbg**.

*blockType*<br/>
Tipo del blocco di memoria richiesto: **CLIENT_BLOCK** oppure **NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o **NULL**.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o **NULL**.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore a *buffer*. Un **NULL** valore restituito indica un errore, e **errno** viene impostato su **ENOMEM**, indicando che non vi è memoria sufficiente per allocare *maxlen* byte (quando un **NULL** viene fornito come argomento *buffer*), o a **ERANGE**, che indica che il percorso è più lungo di *maxlen*  caratteri.

Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

## <a name="remarks"></a>Note

Il **getcwd_dbg** e **wgetcwd_dbg** funzioni sono identici a quelli **getcwd** e **wgetcwd** ad eccezione del fatto che, quando **_ Eseguire il DEBUG** è definito, queste funzioni usano la versione di debug **malloc** e **malloc_dbg** per allocare memoria se **NULL** viene passato come il primo parametro. Per altre informazioni, vedere [_malloc_dbg](malloc-dbg.md).

Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito. In alternativa, è possibile definire il **CRTDBG_MAP_ALLOC** flag. Quando si **CRTDBG_MAP_ALLOC** è definito, le chiamate a **getcwd** e **wgetcwd** vengono mappate nuovamente a **getcwd_dbg** e **_ wgetcwd_dbg**, rispettivamente, con il *blockType* impostata su **NORMAL_BLOCK**. Quindi, non è necessario chiamare queste funzioni in modo esplicito a meno che non si vogliano contrassegnare blocchi di memoria heap come **CLIENT_BLOCK**. Per altre informazioni, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details).

## <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tgetcwd_dbg**|**_getcwd_dbg**|**_getcwd_dbg**|**_wgetcwd_dbg**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_getcwd_dbg**|\<crtdbg.h>|
|**_wgetcwd_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_getcwd, _wgetcwd](getcwd-wgetcwd.md)<br/>
[Controllo delle directory](../../c-runtime-library/directory-control.md)<br/>
[Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions)<br/>
