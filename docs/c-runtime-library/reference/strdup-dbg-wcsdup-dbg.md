---
title: _strdup_dbg, _wcsdup_dbg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _strdup_dbg
- _wcsdup_dbg
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
- _wcsdup_dbg
- strdup_dbg
- _strdup_dbg
- wcsdup_dbg
dev_langs:
- C++
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
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: aaea554a4663ff0f4a8853b2ad3ed147af99668b
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="strdupdbg-wcsdupdbg"></a>_strdup_dbg, _wcsdup_dbg

Versioni di [StrDup e wcsdup](strdup-wcsdup-mbsdup.md) che usano la versione di debug **malloc**.

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
Tipo del blocco di memoria richiesto: **CLIENT_BLOCK** oppure **NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o NULL.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o NULL.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al percorso di archiviazione per la stringa copiata oppure **NULL** se l'archiviazione non può essere allocata.

## <a name="remarks"></a>Note

Il **strdup_dbg** e **wcsdup_dbg** funzioni sono identici a quelli **StrDup** e **wcsdup** ad eccezione del fatto che, quando **_ Eseguire il DEBUG** è definito, queste funzioni usano la versione di debug **malloc**, **malloc_dbg**per allocare memoria per la stringa duplicata. Per informazioni sulle funzionalità di debug di **malloc_dbg**, vedere [malloc_dbg](malloc-dbg.md).

Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito. In alternativa, è possibile definire il flag **CRTDBG_MAP_ALLOC**. Quando si **CRTDBG_MAP_ALLOC** è definito, le chiamate a **StrDup** e **wcsdup** vengono mappate nuovamente a **strdup_dbg** e **_ wcsdup_dbg**, rispettivamente, con il *blockType* impostata su **NORMAL_BLOCK**. Quindi, non è necessario chiamare queste funzioni in modo esplicito a meno che non si vogliano contrassegnare blocchi di memoria heap come **CLIENT_BLOCK**. Per altre informazioni sui tipi di blocco, vedere [Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details) (Tipi di blocchi sull'heap di debug).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsdup_dbg**|**_strdup_dbg**|**_mbsdup**|**_wcsdup_dbg**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strdup_dbg**, **wcsdup_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni di debug delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_strdup, _wcsdup, _mbsdup](strdup-wcsdup-mbsdup.md)<br/>
[Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions)<br/>
