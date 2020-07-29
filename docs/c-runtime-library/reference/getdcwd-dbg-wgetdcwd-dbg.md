---
title: _getdcwd_dbg, _wgetdcwd_dbg
ms.date: 11/04/2016
api_name:
- _getdcwd_dbg
- _wgetdcwd_dbg
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _getdcwd_dbg
- getdcwd_dbg
- _wgetdcwd_dbg
- wgetdcwd_dbg
helpviewer_keywords:
- working directory
- _getdcwd_dbg function
- wgetdcwd_dbg function
- current working directory
- getdcwd_dbg function
- _wgetdcwd_dbg function
- directories [C++], current working
ms.assetid: 266bf6f0-0417-497f-963d-2e0f306d9385
ms.openlocfilehash: a31617445ccb0640042be41ee4f710e528b9ceb7
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229454"
---
# <a name="_getdcwd_dbg-_wgetdcwd_dbg"></a>_getdcwd_dbg, _wgetdcwd_dbg

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

*unità*<br/>
Nome dell'unità disco.

*buffer*<br/>
Posizione di archiviazione per il percorso.

*maxlen*<br/>
Lunghezza massima del percorso in caratteri: **`char`** per **_getdcwd_dbg** e **`wchar_t`** per **_wgetdcwd_dbg**.

*blockType*<br/>
Tipo richiesto di blocco di memoria: **_CLIENT_BLOCK** o **_NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o **null**.

*LineNumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o **null**.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore al *buffer*. Un valore restituito **null** indica un errore e **errno** viene impostato su **ENOMEM**, a indicare che la memoria disponibile non è sufficiente per allocare i byte *maxlen* (quando un argomento **null** viene specificato come *buffer*) o su **ERANGE**, che indica che il percorso è più lungo di *maxlen* caratteri. Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Le **funzioni _getdcwd_dbg** e **_wgetdcwd_dbg** sono identiche **a _getdcwd** e **_wgetdcwd** ad eccezione del fatto che, quando viene definito **_DEBUG** , queste funzioni usano la versione di debug di **malloc** e **_malloc_dbg** per allocare memoria se viene passato **null** come parametro del *buffer* . Per altre informazioni, vedere [_malloc_dbg](malloc-dbg.md).

Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito. È invece possibile definire il flag di **_CRTDBG_MAP_ALLOC** . Quando **_CRTDBG_MAP_ALLOC** viene definito, le chiamate a **_getdcwd** e **_wgetdcwd** vengono rimappate rispettivamente a **_getdcwd_dbg** e **_wgetdcwd_dbg**, con *blockType* impostato su **_NORMAL_BLOCK**. Pertanto, non è necessario chiamare queste funzioni in modo esplicito a meno che non si desideri contrassegnare i blocchi heap come **_CLIENT_BLOCK**. Per ulteriori informazioni, vedere [tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tgetdcwd_dbg**|**_getdcwd_dbg**|**_getdcwd_dbg**|**_wgetdcwd_dbg**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_getdcwd_dbg**|\<crtdbg.h>|
|**_wgetdcwd_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_getdcwd, _wgetdcwd](getdcwd-wgetdcwd.md)<br/>
[Controllo Directory](../../c-runtime-library/directory-control.md)<br/>
[Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions)<br/>
