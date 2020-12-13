---
description: 'Altre informazioni su: _aligned_offset_malloc_dbg'
title: _aligned_offset_malloc_dbg
ms.date: 11/04/2016
api_name:
- _aligned_offset_malloc_dbg
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
- _aligned_offset_malloc_dbg
- aligned_offset_malloc_dbg
helpviewer_keywords:
- _aligned_offset_malloc_dbg function
- aligned_offset_malloc_dbg function
ms.assetid: 6c242307-c59e-4d63-aae5-d8cbec8e021c
ms.openlocfilehash: 1d8ae12e62ec1ea335a8bca554e07a0b64a3c3a5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336555"
---
# <a name="_aligned_offset_malloc_dbg"></a>_aligned_offset_malloc_dbg

Alloca la memoria in un limite di allineamento specificato (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void * _aligned_offset_malloc_dbg(
   size_t size,
   size_t alignment,
   size_t offset,
   const char *filename,
   int linenumber
);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Dimensione dell'allocazione di memoria richiesta.

*allineamento*<br/>
Valore di allineamento, che deve essere una potenza intera di 2.

*offset*<br/>
Offset nell'allocazione di memoria per imporre l'allineamento.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o **null**.

*LineNumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o **null**.

## <a name="return-value"></a>Valore restituito

Puntatore al blocco di memoria allocato o **null** se l'operazione non è riuscita.

## <a name="remarks"></a>Commenti

**_aligned_offset_malloc_dbg** è una versione di debug della funzione [_aligned_offset_malloc](aligned-offset-malloc.md) . Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **_aligned_offset_malloc_dbg** viene ridotta a una chiamata a **_aligned_offset_malloc**. Sia **_aligned_offset_malloc** che **_aligned_offset_malloc_dbg** allocano un blocco di memoria nell'heap di base, ma **_aligned_offset_malloc_dbg** offre diverse funzionalità di debug: buffer su entrambi i lati della parte utente del blocco in cui verificare la presenza di perdite e informazioni sul *nome del file* / *lineNumber* per determinare l'origine delle richieste di allocazione. Il rilevamento di tipi di allocazione specifici con un parametro di tipo blocco non è una funzionalità di debug supportata per le allocazioni allineate. Le allocazioni allineate verranno visualizzate come tipo di blocco _NORMAL_BLOCK.

**_aligned_offset_malloc_dbg** alloca il blocco di memoria con una quantità di spazio leggermente superiore alla *dimensione* richiesta. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. Quando il blocco è allocato, la porzione utente del blocco viene riempita con il valore 0xCD e ciascuno dei buffer di sovrascrittura viene riempito con 0xFD.

**_aligned_offset_malloc_dbg** è utile nelle situazioni in cui è necessario l'allineamento su un elemento annidato; ad esempio, se l'allineamento era necessario in una classe annidata.

**_aligned_offset_malloc_dbg** si basa su **malloc**; per altre informazioni, vedere [malloc](malloc.md).

Questa funzione imposta **errno** su **ENOMEM** se l'allocazione di memoria non riesce o se la dimensione richiesta è maggiore di **_HEAP_MAXREQ**. Per ulteriori informazioni su **errno**, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Inoltre, **_aligned_offset_malloc** convalida i relativi parametri. Se l' *allineamento* non è una potenza di 2 o se l' *offset* è maggiore o uguale a *size* e diverso da zero, questa funzione richiama il gestore di parametri non validi, come descritto in convalida dei [parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce **null** e imposta **errno** su **EINVAL**.

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_aligned_offset_malloc_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedi anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
