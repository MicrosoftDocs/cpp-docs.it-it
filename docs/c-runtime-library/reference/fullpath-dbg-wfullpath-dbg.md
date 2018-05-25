---
title: _fullpath_dbg, _wfullpath_dbg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _wfullpath_dbg
- _fullpath_dbg
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
- wfullpath_dbg
- _wfullpath_dbg
- _fullpath_dbg
- fullpath_dbg
dev_langs:
- C++
helpviewer_keywords:
- _fullpath_dbg function
- relative file paths
- absolute paths
- fullpath_dbg function
- _wfullpath_dbg function
- wfullpath_dbg function
ms.assetid: 81f72f85-07da-4f5c-866a-598e0fb03f6b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d04f3d7b53eca27d38a38b0bce284c17b15cae02
ms.sourcegitcommit: 6e3cf8df676d59119ce88bf5321d063cf479108c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/22/2018
---
# <a name="fullpathdbg-wfullpathdbg"></a>_fullpath_dbg, _wfullpath_dbg

Versioni di [FullPath, wfullpath](fullpath-wfullpath.md) che usano la versione di debug **malloc** ad allocare la memoria.

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
Puntatore a un buffer contenente il nome del percorso assoluto o completo o **NULL**.

*relPath*<br/>
Nome del percorso relativo.

*maxLength*<br/>
Lunghezza massima del buffer di nome di percorso assoluto (*absPath*). Questa lunghezza è espressa in byte per **FullPath** ma in caratteri "wide" (**wchar_t**) per **wfullpath**.

*blockType*<br/>
Tipo del blocco di memoria richiesto: **CLIENT_BLOCK** oppure **NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o **NULL**.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o **NULL**.

## <a name="return-value"></a>Valore restituito

Ogni funzione restituisce un puntatore a un buffer contenente il nome del percorso assoluto (*absPath*). Se si è verificato un errore (ad esempio, se il valore passato in *relPath* include una lettera di unità che non è valido o non viene trovata, o se la lunghezza del nome del percorso assoluto creato (*absPath*) è maggiore di *maxLength*) la funzione restituisce **NULL**.

## <a name="remarks"></a>Note

Il **fullpath_dbg** e **wfullpath_dbg** funzioni sono identici a quelli **FullPath** e **wfullpath** ad eccezione del fatto che, quando **Debug** è definito, queste funzioni usano la versione di debug **malloc**, **malloc_dbg**per allocare memoria se **NULL** viene passato come primo parametro. Per informazioni sulle funzionalità di debug di **malloc_dbg**, vedere [malloc_dbg](malloc-dbg.md).

Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito. In alternativa, è possibile definire il **CRTDBG_MAP_ALLOC** flag. Quando si **CRTDBG_MAP_ALLOC** è definito, le chiamate a **FullPath** e **wfullpath** vengono mappate nuovamente a **fullpath_dbg** e **wfullpath_dbg**, rispettivamente, con il *blockType* impostato su **NORMAL_BLOCK**. Quindi, non è necessario chiamare queste funzioni in modo esplicito a meno che non si vogliano contrassegnare blocchi di memoria heap come **CLIENT_BLOCK**. Per altre informazioni, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details).

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
