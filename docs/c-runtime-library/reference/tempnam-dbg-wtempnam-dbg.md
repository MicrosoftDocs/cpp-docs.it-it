---
title: _tempnam_dbg, _wtempnam_dbg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _wtempnam_dbg
- _tempnam_dbg
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
- wtempnam_dbg
- tempnam_dbg
- _tempnam_dbg
- _wtempnam_dbg
dev_langs:
- C++
helpviewer_keywords:
- file names [C++], creating temporary
- tempnam_dbg function
- temporary files, creating
- file names [C++], temporary
- wtempnam_dbg function
- _tempnam_dbg function
- _wtempnam_dbg function
ms.assetid: e3760bb4-bb01-4808-b689-2c45af56a170
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 28b917ce2f50d9b766fd305f3320664d11e93da2
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="tempnamdbg-wtempnamdbg"></a>_tempnam_dbg, _wtempnam_dbg

Versioni della funzione di [tempnam, wtempnam, tmpnam, wtmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md) che usano la versione di debug **malloc**, **malloc_dbg**.

## <a name="syntax"></a>Sintassi

```C
char *_tempnam_dbg(
   const char *dir,
   const char *prefix,
   int blockType,
   const char *filename,
   int linenumber
);
wchar_t *_wtempnam_dbg(
   const wchar_t *dir,
   const wchar_t *prefix,
   int blockType,
   const char *filename,
   int linenumber
);
```

### <a name="parameters"></a>Parametri

*dir*<br/>
Percorso usato nel nome del file se non è presente alcuna variabile di ambiente TMP o se TMP non è una directory valida.

*prefix*<br/>
La stringa che verrà anteposto ai nomi restituiti da **tempnam**.

*blockType*<br/>
Tipo del blocco di memoria richiesto: **CLIENT_BLOCK** oppure **NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o **NULL**.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o **NULL**.

## <a name="return-value"></a>Valore restituito

Ogni funzione restituisce un puntatore al nome generato o **NULL** se si verifica un errore. Errore può verificarsi se è presente un nome di directory non valida specificato nella variabile di ambiente TMP e nel *dir* parametro.

> [!NOTE]
> **libera** (o **free_dbg**) deve essere chiamato per puntatori allocati da **tempnam_dbg** e **wtempnam_dbg**.

## <a name="remarks"></a>Note

Il **tempnam_dbg** e **wtempnam_dbg** funzioni sono identici a quelli **tempnam** e **wtempnam** ad eccezione del fatto che, quando **Debug** è definito, queste funzioni usano la versione di debug **malloc** e **malloc_dbg**per allocare memoria se **NULL** è passato come primo parametro. Per altre informazioni, vedere [_malloc_dbg](malloc-dbg.md).

Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito. In alternativa, è possibile definire il flag **CRTDBG_MAP_ALLOC**. Quando si **CRTDBG_MAP_ALLOC** è definito, le chiamate a **tempnam** e **wtempnam** vengono mappate nuovamente a **tempnam_dbg** e **_ wtempnam_dbg**, rispettivamente, con il *blockType* impostata su **NORMAL_BLOCK**. Quindi, non è necessario chiamare queste funzioni in modo esplicito a meno che non si vogliano contrassegnare blocchi di memoria heap come **CLIENT_BLOCK**. Per altre informazioni, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_ttempnam_dbg**|**_tempnam_dbg**|**_tempnam_dbg**|**_wtempnam_dbg**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**tempnam_dbg**, **wtempnam_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_tempnam, _wtempnam, tmpnam, _wtmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md)<br/>
[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions)<br/>
