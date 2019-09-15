---
title: _getcwd_dbg, _wgetcwd_dbg
ms.date: 11/04/2016
api_name:
- _wgetcwd_dbg
- _getcwd_dbg
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
- api-ms-win-crt-environment-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _getcwd_dbg
- _wgetcwd_dbg
- getcwd_dbg
- wgetcwd_dbg
helpviewer_keywords:
- wgetcwd_dbg function
- working directory
- _getcwd_dbg function
- getcwd_dbg function
- current working directory
- _wgetcwd_dbg function
- directories [C++], current working
ms.assetid: 8d5d151f-d844-4aa6-a28c-1c11a22dc00d
ms.openlocfilehash: 3eb318b9b2faa8716abdd26eafa926c8072b5614
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70955286"
---
# <a name="_getcwd_dbg-_wgetcwd_dbg"></a>_getcwd_dbg, _wgetcwd_dbg

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
Lunghezza massima del percorso in caratteri: **char** per **_getcwd_dbg** e **wchar_t** per **_wgetcwd_dbg**.

*blockType*<br/>
Tipo di blocco di memoria richiesto: **_CLIENT_BLOCK** o **_NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o **null**.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o **null**.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore al *buffer*. Un valore restituito **null** indica un errore e **errno** viene impostato su **ENOMEM**, a indicare che la memoria disponibile non è sufficiente per allocare i byte *maxlen* (quando un argomento **null** viene assegnato come *buffer*) o a **ERANGE** , che indica che il percorso è più lungo di *maxlen* caratteri.

Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

## <a name="remarks"></a>Note

Le funzioni **_getcwd_dbg** e **_wgetcwd_dbg** sono identiche a **_getcwd** e **_wgetcwd** , ad eccezione del fatto che, quando viene definito _ **debug** , queste funzioni usano la versione di debug di **malloc** e **differenze** per allocare memoria se viene passato **null** come primo parametro. Per altre informazioni, vedere [_malloc_dbg](malloc-dbg.md).

Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito. È invece possibile definire il flag **_CRTDBG_MAP_ALLOC** . Quando **_CRTDBG_MAP_ALLOC** è definito, le chiamate a **_getcwd** e **_wgetcwd** vengono rimappate rispettivamente a **_getcwd_dbg** e **_wgetcwd_dbg**, con *blockType* impostato su **_NORMAL_BLOCK**. Pertanto, non è necessario chiamare queste funzioni in modo esplicito a meno che non si desideri contrassegnare i blocchi dell'heap come **_CLIENT_BLOCK**. Per altre informazioni, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details).

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
