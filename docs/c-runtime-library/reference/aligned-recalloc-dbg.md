---
title: _aligned_recalloc_dbg
ms.date: 11/04/2016
apiname:
- _aligned_recalloc_dbg
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
- _aligned_recalloc_dbg
- aligned_recalloc_dbg
helpviewer_keywords:
- aligned_recalloc_dbg function
- _aligned_recalloc_dbg function
ms.assetid: 55c3c27e-561c-4d6b-9bf9-1e34cc556e4b
ms.openlocfilehash: 85af821aaa873b6e71341823d47085996f697235
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50664698"
---
# <a name="alignedrecallocdbg"></a>_aligned_recalloc_dbg

Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](aligned-malloc.md) o [_aligned_offset_malloc](aligned-offset-malloc.md) e inizializza la memoria su 0 (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void * _aligned_recalloc_dbg(
   void * memblock,
   size_t num,
   size_t size,
   size_t alignment,
   const char *filename,
   int linenumber
);
```

### <a name="parameters"></a>Parametri

*memblock*<br/>
Puntatore al blocco di memoria corrente.

*Numero*<br/>
Numero di elementi.

*size*<br/>
Dimensione in byte di ogni elemento.

*Allineamento*<br/>
Valore di allineamento, che deve essere una potenza intera di 2.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o **NULL**.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o **NULL**.

## <a name="return-value"></a>Valore restituito

**aligned_recalloc_dbg** restituisce un puntatore void al blocco di memoria riallocato (e possibilmente spostato). Il valore restituito sarà **NULL** se la dimensione è pari a zero e l'argomento del buffer non è **NULL**, o se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata. Nel primo caso il blocco originale viene liberato. Nel secondo caso il blocco originale resta invariato. Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da void, usare un cast del tipo sul valore restituito.

Riallocare memoria modificando l'allineamento di un blocco è un errore.

## <a name="remarks"></a>Note

**aligned_recalloc_dbg** è una versione di debug di [aligned_recalloc](aligned-recalloc.md) (funzione). Quando [debug](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **aligned_recalloc_dbg** viene ridotta a una chiamata a **aligned_recalloc**. Entrambe **aligned_recalloc** e **aligned_recalloc_dbg** riallocano un blocco di memoria nell'heap di base, ma **aligned_recalloc_dbg** alcune variazioni per il debug di diversi funzionalità: buffer presenti a entrambi i lati della porzione utente del blocco da verificare per le perdite, un parametro di tipo blocco per tenere traccia di tipi specifici di allocazioni e *nomefile*/*linenumber* informazioni per determinare l'origine delle richieste di allocazione.

**aligned_recalloc_dbg** rialloca il blocco di memoria specificato con quantità di spazio leggermente superiore alla dimensione richiesta (*numero* * *dimensioni*) che può essere maggiore o minore rispetto a le dimensioni del blocco di memoria allocato in origine. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. La riallocazione potrebbe comportare lo spostamento del blocco di memoria originale in un'altra posizione nell'heap nonché la modifica della dimensione del blocco di memoria. La porzione utente del blocco viene riempita con il valore 0xCD e i buffer di sovrascrittura vengono riempiti con 0xFD.

**aligned_recalloc_dbg** imposta **errno** al **ENOMEM** se un'allocazione di memoria ha esito negativo; **EINVAL** viene restituito se la quantità di memoria richiesta (incluso l'overhead menzionato precedentemente) supera **heap_maxreq**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

È inoltre **aligned_recalloc_dbg** convalida i propri parametri. Se *allineamento* non è una potenza di 2, questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce **NULL** e imposta **errno** al **EINVAL**.

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_aligned_recalloc_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
