---
description: 'Altre informazioni su: _aligned_offset_recalloc_dbg'
title: _aligned_offset_recalloc_dbg
ms.date: 11/04/2016
api_name:
- _aligned_offset_recalloc_dbg
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
- aligned_offset_recalloc_dbg
- _aligned_offset_recalloc_dbg
helpviewer_keywords:
- aligned_offset_recalloc_dbg function
- _aligned_offset_recalloc_dbg function
ms.assetid: 7ab719c3-77e0-4d2e-934f-01529d062fbf
ms.openlocfilehash: 35857ef25a01170343f8d35b2c3532db573cc688
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97312514"
---
# <a name="_aligned_offset_recalloc_dbg"></a>_aligned_offset_recalloc_dbg

Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](aligned-malloc.md) o [_aligned_offset_malloc](aligned-offset-malloc.md) e inizializza la memoria su 0 (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void * _aligned_offset_recalloc_dbg(
   void *memblock,
   size_t num,
   size_t size,
   size_t alignment,
   size_t offset,
   const char *filename,
   int linenumber
);
```

### <a name="parameters"></a>Parametri

*memblock*<br/>
Puntatore al blocco di memoria corrente.

*number*<br/>
Numero di elementi.

*size*<br/>
Lunghezza in byte di ogni elemento.

*allineamento*<br/>
Valore di allineamento, che deve essere una potenza intera di 2.

*offset*<br/>
Offset nell'allocazione di memoria per imporre l'allineamento.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione realloc o **null**.

*LineNumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione realloc o **null**.

## <a name="return-value"></a>Valore restituito

**_aligned_offset_recalloc_dbg** restituisce un puntatore void al blocco di memoria riallocato (e possibilmente spostato). Il valore restituito è **null** se la dimensione è zero e l'argomento del buffer non è **null** o se la memoria disponibile non è sufficiente per espandere il blocco alla dimensione specificata. Nel primo caso il blocco originale viene liberato. Nel secondo caso il blocco originale resta invariato. Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da void, usare un cast del tipo sul valore restituito.

## <a name="remarks"></a>Commenti

**_aligned_offset_realloc_dbg** è una versione di debug della funzione [_aligned_offset_recalloc](aligned-offset-recalloc.md) . Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **_aligned_offset_recalloc_dbg** viene ridotta a una chiamata a **_aligned_offset_recalloc**. Sia **_aligned_offset_recalloc** che **_aligned_offset_recalloc_dbg** riallocano un blocco di memoria nell'heap di base, ma **_aligned_offset_recalloc_dbg** supporta diverse funzionalità di debug: buffer su entrambi i lati della parte utente del blocco per cui verificare la presenza di perdite e informazioni sul *nome file* / *lineNumber* per determinare l'origine delle richieste di allocazione. Il rilevamento di tipi di allocazione specifici con un parametro di tipo blocco non è una funzionalità di debug supportata per le allocazioni allineate. Le allocazioni allineate verranno visualizzate come tipo di blocco _NORMAL_BLOCK.

**_aligned_offset_realloc_dbg** rialloca il blocco di memoria specificato con una quantità di spazio leggermente superiore a quella richiesta dal *newSize*. *newSize* potrebbe essere maggiore o minore delle dimensioni del blocco di memoria allocato in origine. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. La riallocazione potrebbe comportare lo spostamento del blocco di memoria originale in un'altra posizione nell'heap nonché la modifica della dimensione del blocco di memoria. Se il blocco di memoria viene spostato, i contenuti del blocco originale verranno sovrascritti.

Questa funzione imposta **errno** su **ENOMEM** se l'allocazione di memoria non riesce o se la dimensione richiesta (dimensioni del *numero*  *  ) è maggiore di **_HEAP_MAXREQ**. Per ulteriori informazioni su **errno**, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Inoltre, **_aligned_offset_recalloc_dbg** convalida i relativi parametri. Se l' *allineamento* non è una potenza di 2 o se l' *offset* è maggiore o uguale alla dimensione richiesta e diverso da zero, questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce **null** e imposta **errno** su **EINVAL**.

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_aligned_offset_recalloc_dbg**|\<malloc.h>|

## <a name="see-also"></a>Vedi anche

[Allineamento dati](../../c-runtime-library/data-alignment.md)<br/>
