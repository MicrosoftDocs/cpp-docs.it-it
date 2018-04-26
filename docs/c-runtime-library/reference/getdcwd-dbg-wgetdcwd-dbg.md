---
title: _getdcwd_dbg, _wgetdcwd_dbg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _getdcwd_dbg
- _wgetdcwd_dbg
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
apitype: DLLExport
f1_keywords:
- _getdcwd_dbg
- getdcwd_dbg
- _wgetdcwd_dbg
- wgetdcwd_dbg
dev_langs:
- C++
helpviewer_keywords:
- working directory
- _getdcwd_dbg function
- wgetdcwd_dbg function
- current working directory
- getdcwd_dbg function
- _wgetdcwd_dbg function
- directories [C++], current working
ms.assetid: 266bf6f0-0417-497f-963d-2e0f306d9385
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6b9709a5dad5bd83dc34c7e2aff7cc888b7b3451
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="getdcwddbg-wgetdcwddbg"></a>_getdcwd_dbg, _wgetdcwd_dbg

Versioni di debug delle funzioni [_getdcwd, _wgetdcwd](getdcwd-wgetdcwd.md) (disponibili solo durante il debug).

## <a name="syntax"></a>Sintassi

```C
char *_getdcwd_dbg(
   int drive,
   char *buffer,
   int maxlen,
   int blockType,
   const char *filename,
   int linenumber
);
wchar_t *_wgetdcwd_dbg(
   int drive,
   wchar_t *buffer,
   int maxlen,
   int blockType,
   const char *filename,
   int linenumber
);
```

### <a name="parameters"></a>Parametri

*Unità*<br/>
Nome dell'unità disco.

*buffer*<br/>
Posizione di archiviazione per il percorso.

*maxlen*<br/>
Lunghezza massima del percorso in caratteri: **char** per **getdcwd_dbg** e **wchar_t** per **wgetdcwd_dbg**.

*blockType*<br/>
Tipo del blocco di memoria richiesto: **CLIENT_BLOCK** oppure **NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o **NULL**.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o **NULL**.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore a *buffer*. Un **NULL** valore restituito indica un errore, e **errno** viene impostato su **ENOMEM**, indicando che non vi è memoria sufficiente per allocare *maxlen* byte (quando un **NULL** viene fornito come argomento *buffer*), o a **ERANGE**, che indica che il percorso è più lungo di *maxlen*  caratteri. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

## <a name="remarks"></a>Note

Il **getdcwd_dbg** e **wgetdcwd_dbg** funzioni sono identici a quelli **getdcwd** e **wgetdcwd** ad eccezione del fatto che, quando **Debug** è definito, queste funzioni usano la versione di debug **malloc** e **malloc_dbg** per allocare memoria se **NULL** viene passato come le *buffer* parametro. Per altre informazioni, vedere [_malloc_dbg](malloc-dbg.md).

Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito. In alternativa, è possibile definire il **CRTDBG_MAP_ALLOC** flag. Quando si **CRTDBG_MAP_ALLOC** è definito, le chiamate a **getdcwd** e **wgetdcwd** vengono mappate nuovamente a **getdcwd_dbg** e **_ wgetdcwd_dbg**, rispettivamente, con il *blockType* impostata su **NORMAL_BLOCK**. Quindi, non è necessario chiamare queste funzioni in modo esplicito a meno che non si vogliano contrassegnare blocchi di memoria heap come **CLIENT_BLOCK**. Per altre informazioni, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tgetdcwd_dbg**|**_getdcwd_dbg**|**_getdcwd_dbg**|**_wgetdcwd_dbg**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_getdcwd_dbg**|\<crtdbg.h>|
|**_wgetdcwd_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_getdcwd, _wgetdcwd](getdcwd-wgetdcwd.md)<br/>
[Controllo delle directory](../../c-runtime-library/directory-control.md)<br/>
[Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions)<br/>
