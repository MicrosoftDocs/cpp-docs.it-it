---
description: 'Altre informazioni su: _strdup_dbg, _wcsdup_dbg'
title: _strdup_dbg, _wcsdup_dbg
ms.date: 11/04/2016
api_name:
- _strdup_dbg
- _wcsdup_dbg
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
- _wcsdup_dbg
- strdup_dbg
- _strdup_dbg
- wcsdup_dbg
helpviewer_keywords:
- _wcsdup_dbg function
- stdup_dbg function
- copying strings
- duplicating strings
- strings [C++], copying
- strings [C++], duplicating
- _strdup_dbg function
- wcsdup_dbg function
ms.assetid: 681db70c-d124-43ab-b83e-5eeea9035097
ms.openlocfilehash: c7001d7948f733977213267fdabd9faee4ddffd4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322478"
---
# <a name="_strdup_dbg-_wcsdup_dbg"></a>_strdup_dbg, _wcsdup_dbg

Versioni di [_strdup e _wcsdup](strdup-wcsdup-mbsdup.md) che usano la versione di debug di **malloc**.

## <a name="syntax"></a>Sintassi

```C
char *_strdup_dbg(
   const char *strSource,
   int blockType,
   const char *filename,
   int linenumber
);
wchar_t *_wcsdup_dbg(
   const wchar_t *strSource,
   int blockType,
   const char *filename,
   int linenumber
);
```

### <a name="parameters"></a>Parametri

*strSource*<br/>
Stringa di origine con terminazione null.

*blockType*<br/>
Tipo di blocco di memoria richiesto: **_CLIENT_BLOCK** o **_NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o **null**.

*LineNumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o **null**.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al percorso di archiviazione per la stringa copiata o **null** se non è possibile allocare l'archiviazione.

## <a name="remarks"></a>Commenti

Le funzioni **_strdup_dbg** e **_wcsdup_dbg** sono identiche a **_strdup** e **_wcsdup** ad eccezione del fatto che, quando viene definito **_DEBUG** , queste funzioni usano la versione di debug di **malloc**, **_malloc_dbg**, per allocare memoria per la stringa duplicata. Per informazioni sulle funzionalità di debug di **_malloc_dbg**, vedere [_malloc_dbg](malloc-dbg.md).

Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito. In alternativa, è possibile definire il flag **_CRTDBG_MAP_ALLOC**. Quando **_CRTDBG_MAP_ALLOC** viene definito, le chiamate a **_strdup** e **_wcsdup** vengono rimappate rispettivamente a **_strdup_dbg** e **_wcsdup_dbg**, con *blockType* impostato su **_NORMAL_BLOCK**. Pertanto, non è necessario chiamare queste funzioni in modo esplicito a meno che non si desideri contrassegnare i blocchi heap come **_CLIENT_BLOCK**. Per altre informazioni sui tipi di blocco, vedere [Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details) (Tipi di blocchi sull'heap di debug).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsdup_dbg**|**_strdup_dbg**|**_mbsdup**|**_wcsdup_dbg**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_strdup_dbg**, **_wcsdup_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni di debug delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedi anche

[Manipolazione di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_strdup, _wcsdup, _mbsdup](strdup-wcsdup-mbsdup.md)<br/>
[Versioni di debug delle funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions)<br/>
