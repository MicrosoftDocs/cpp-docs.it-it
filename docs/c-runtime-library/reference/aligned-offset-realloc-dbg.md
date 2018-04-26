---
title: _aligned_offset_realloc_dbg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _aligned_offset_realloc_dbg
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
- aligned_offset_realloc_dbg
- _aligned_offset_realloc_dbg
dev_langs:
- C++
helpviewer_keywords:
- aligned_offset_realloc_dbg function
- _aligned_offset_realloc_dbg function
ms.assetid: 64e30a12-887e-453b-aea8-aed793fca9d8
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 40d4215a7f9dbd4037305a2498d869211fa14165
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="alignedoffsetreallocdbg"></a>_aligned_offset_realloc_dbg

Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](aligned-malloc.md) o [_aligned_offset_malloc](aligned-offset-malloc.md) (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void * _aligned_offset_realloc_dbg(
   void *memblock,
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

*size*<br/>
Dimensione dell'allocazione di memoria.

*Allineamento*<br/>
Valore di allineamento, che deve essere una potenza intera di 2.

*offset*<br/>
Offset nell'allocazione di memoria per imporre l'allineamento.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto la **aligned_offset_realloc** operazione o NULL.

*linenumber*<br/>
Numero di riga nel file di origine in cui il **aligned_offset_realloc** operazione è stata richiesta o NULL.

## <a name="return-value"></a>Valore restituito

**aligned_offset_realloc_dbg** restituisce un puntatore void al blocco di memoria riallocato (e possibilmente spostato). Il valore restituito sarà **NULL** se la dimensione è pari a zero e l'argomento relativo al buffer non è **NULL**, o se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata. Nel primo caso il blocco originale viene liberato. Nel secondo caso il blocco originale resta invariato. Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da void, usare un cast del tipo sul valore restituito.

## <a name="remarks"></a>Note

**aligned_offset_realloc_dbg** è una versione di debug di [aligned_offset_realloc](aligned-offset-realloc.md) (funzione). Quando si [debug](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **aligned_offset_realloc_dbg** viene ridotta a una chiamata a **aligned_offset_realloc**. Entrambi **aligned_offset_realloc** e **aligned_offset_realloc_dbg** riallocano un blocco di memoria nell'heap di base, ma **aligned_offset_realloc_dbg** supporta diverse funzionalità di debug: buffer presenti a entrambi i lati della porzione utente del blocco in cui verificare la presenza di perdite, un parametro di tipo blocco per registrare i tipi specifici di allocazioni e *filename*/*linenumber*  informazioni per determinare l'origine delle richieste di allocazione.

Ad esempio [aligned_offset_malloc](aligned-offset-malloc.md), **aligned_offset_realloc_dbg** consente l'allineamento in corrispondenza di un offset all'interno della struttura di una struttura.

**realloc_dbg** rialloca il blocco di memoria specificato con una quantità di spazio a quella richiesta *newSize*. *newSize* potrebbe essere maggiore o minore della dimensione del blocco di memoria allocato in origine. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. La riallocazione potrebbe comportare lo spostamento del blocco di memoria originale in un'altra posizione nell'heap nonché la modifica della dimensione del blocco di memoria. Se il blocco di memoria viene spostato, i contenuti del blocco originale verranno sovrascritti.

La funzione imposta **errno** alla **ENOMEM** se l'allocazione di memoria non riesce o se la dimensione richiesta è maggiore **heap_maxreq**. Per ulteriori informazioni **errno**, vedere [errno, doserrno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Inoltre, **aligned_offset_realloc_dbg** convalida i propri parametri. Se *allineamento* non è una potenza di 2 o se *offset* è maggiore o uguale a *dimensioni* e diverso da zero, questa funzione richiama il gestore di parametri non validi, come descritto in [ Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce **NULL** e imposta **errno** al **EINVAL**.

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_aligned_offset_realloc_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
