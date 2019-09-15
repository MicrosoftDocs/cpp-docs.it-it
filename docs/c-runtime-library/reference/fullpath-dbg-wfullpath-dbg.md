---
title: _fullpath_dbg, _wfullpath_dbg
ms.date: 11/04/2016
api_name:
- _wfullpath_dbg
- _fullpath_dbg
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
- wfullpath_dbg
- _wfullpath_dbg
- _fullpath_dbg
- fullpath_dbg
helpviewer_keywords:
- _fullpath_dbg function
- relative file paths
- absolute paths
- fullpath_dbg function
- _wfullpath_dbg function
- wfullpath_dbg function
ms.assetid: 81f72f85-07da-4f5c-866a-598e0fb03f6b
ms.openlocfilehash: 9271e26bcf4a78ff8d2e4fcf108f1e483c22c1d7
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70956304"
---
# <a name="_fullpath_dbg-_wfullpath_dbg"></a>_fullpath_dbg, _wfullpath_dbg

Versioni di [_fullpath, _wfullpath](fullpath-wfullpath.md) che usano la versione di debug di **malloc** per allocare memoria.

## <a name="syntax"></a>Sintassi

```C
char *_fullpath_dbg(
   char *absPath,
   const char *relPath,
   size_t maxLength,
   int blockType,
   const char *filename,
   int linenumber
);
wchar_t *_wfullpath_dbg(
   wchar_t *absPath,
   const wchar_t *relPath,
   size_t maxLength,
   int blockType,
   const char *filename,
   int linenumber
);
```

### <a name="parameters"></a>Parametri

*absPath*<br/>
Puntatore a un buffer contenente il nome del percorso assoluto o completo o **null**.

*relPath*<br/>
Nome del percorso relativo.

*maxLength*<br/>
Lunghezza massima del buffer del nome del percorso assoluto (*absPath*). Questa lunghezza è in byte per **_fullpath** , ma in caratteri wide (**wchar_t**) per **_wfullpath**.

*blockType*<br/>
Tipo di blocco di memoria richiesto: **_CLIENT_BLOCK** o **_NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o **null**.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o **null**.

## <a name="return-value"></a>Valore restituito

Ogni funzione restituisce un puntatore a un buffer contenente il nome del percorso assoluto (*absPath*). Se si verifica un errore (ad esempio, se il valore passato in *RelPath* include una lettera di unità non valida o non trovata oppure se la lunghezza del nome del percorso assoluto creato (*absPath*) è maggiore di *MaxLength*) la funzione restituisce  **Valore NULL**.

## <a name="remarks"></a>Note

Le funzioni **_fullpath_dbg** e **_wfullpath_dbg** sono identiche a **_fullpath** e **_wfullpath** , ad eccezione del fatto che, quando viene definito _ **debug** , queste funzioni usano la versione di debug di **malloc**, **differenze**, per allocare memoria se viene passato **null** come primo parametro. Per informazioni sulle funzionalità di debug di **differenze**, vedere [differenze](malloc-dbg.md).

Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito. È invece possibile definire il flag **_CRTDBG_MAP_ALLOC** . Quando **_CRTDBG_MAP_ALLOC** è definito, le chiamate a **_fullpath** e **_wfullpath** vengono rimappate rispettivamente a **_fullpath_dbg** e **_wfullpath_dbg**, con *blockType* impostato su **_NORMAL_BLOCK**. Pertanto, non è necessario chiamare queste funzioni in modo esplicito a meno che non si desideri contrassegnare i blocchi dell'heap come **_CLIENT_BLOCK**. Per altre informazioni, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tfullpath_dbg**|**_fullpath_dbg**|**_fullpath_dbg**|**_wfullpath_dbg**|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_fullpath_dbg**|\<crtdbg.h>|
|**_wfullpath_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_fullpath, _wfullpath](fullpath-wfullpath.md)<br/>
[Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions)<br/>
