---
title: _tempnam_dbg, _wtempnam_dbg
ms.date: 11/04/2016
api_name:
- _wtempnam_dbg
- _tempnam_dbg
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
- wtempnam_dbg
- tempnam_dbg
- _tempnam_dbg
- _wtempnam_dbg
helpviewer_keywords:
- file names [C++], creating temporary
- tempnam_dbg function
- temporary files, creating
- file names [C++], temporary
- wtempnam_dbg function
- _tempnam_dbg function
- _wtempnam_dbg function
ms.assetid: e3760bb4-bb01-4808-b689-2c45af56a170
ms.openlocfilehash: 73642730995ac5c0b47519fac64b30400d47767c
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70946242"
---
# <a name="_tempnam_dbg-_wtempnam_dbg"></a>_tempnam_dbg, _wtempnam_dbg

Versioni di funzioni di [_tempnam, _wtempnam, tmpnam, _wtmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md) che usano la versione di debug di **malloc**, **differenze**.

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
Stringa che verrà pre-sospesa ai nomi restituiti da **_tempnam**.

*blockType*<br/>
Tipo di blocco di memoria richiesto: **_CLIENT_BLOCK** o **_NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o **null**.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o **null**.

## <a name="return-value"></a>Valore restituito

Ogni funzione restituisce un puntatore al nome generato o **null** se si verifica un errore. L'errore può verificarsi se è stato specificato un nome di directory non valido nella variabile di ambiente TMP e nel parametro *dir* .

> [!NOTE]
> **gratuito** è necessario chiamare (o **free_dbg**) per i puntatori allocati da **_tempnam_dbg** e **_wtempnam_dbg**.

## <a name="remarks"></a>Note

Le funzioni **_tempnam_dbg** e **_wtempnam_dbg** sono identiche a **_tempnam** e **_wtempnam** , ad eccezione del fatto che, quando viene definito _ **debug** , queste funzioni usano la versione di debug di **malloc** e **differenze**per allocare memoria se viene passato **null** come primo parametro. Per altre informazioni, vedere [_malloc_dbg](malloc-dbg.md).

Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito. In alternativa, è possibile definire il flag **_CRTDBG_MAP_ALLOC**. Quando **_CRTDBG_MAP_ALLOC** è definito, le chiamate a **_tempnam** e **_wtempnam** vengono rimappate rispettivamente a **_tempnam_dbg** e **_wtempnam_dbg**, con *blockType* impostato su **_NORMAL_BLOCK**. Pertanto, non è necessario chiamare queste funzioni in modo esplicito a meno che non si desideri contrassegnare i blocchi dell'heap come **_CLIENT_BLOCK**. Per altre informazioni, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_ttempnam_dbg**|**_tempnam_dbg**|**_tempnam_dbg**|**_wtempnam_dbg**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_tempnam_dbg**, **_wtempnam_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_tempnam, _wtempnam, tmpnam, _wtmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md)<br/>
[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions)<br/>
