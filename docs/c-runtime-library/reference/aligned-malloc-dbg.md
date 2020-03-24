---
title: _aligned_malloc_dbg
ms.date: 11/04/2016
api_name:
- _aligned_malloc_dbg
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
- _aligned_malloc_dbg
- aligned_malloc_dbg
helpviewer_keywords:
- aligned_malloc_dbg function
- _aligned_malloc_dbg function
ms.assetid: fb0429c3-685d-4826-9075-2515c5bdc5c6
ms.openlocfilehash: 49278c2282698478ad96cc1c7b1ad27add0a6787
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80170937"
---
# <a name="_aligned_malloc_dbg"></a>_aligned_malloc_dbg

Alloca memoria in un limite di allineamento specificato con spazio aggiuntivo per un'intestazione di debug e buffer di sovrascrittura (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void * _aligned_malloc_dbg(
    size_t size,
    size_t alignment,
   const char *filename,
   int linenumber
);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Dimensione dell'allocazione della memoria necessaria.

*allineamento*<br/>
Valore di allineamento, che deve essere un esponente intero di 2.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o NULL.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o NULL.

## <a name="return-value"></a>Valore restituito

Puntatore al blocco di memoria allocato o NULL se l'operazione non è riuscita.

## <a name="remarks"></a>Osservazioni

**_aligned_malloc_dbg** è una versione di debug della funzione [_aligned_malloc](aligned-malloc.md) . Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **_aligned_malloc_dbg** viene ridotta a una chiamata a `_aligned_malloc`. Sia `_aligned_malloc` che **_aligned_malloc_dbg** allocano un blocco di memoria nell'heap di base, ma **_aligned_malloc_dbg** offre diverse funzionalità di debug: buffer su entrambi i lati della parte utente del blocco in cui verificare la presenza di perdite e *filename*/*lineNumber* informazioni per determinare l'origine delle richieste di allocazione. Il rilevamento di tipi di allocazione specifici con un parametro di tipo blocco non è una funzionalità di debug supportata per le allocazioni allineate. Le allocazioni allineate verranno visualizzate come tipo di blocco _NORMAL_BLOCK.

**_aligned_malloc_dbg** alloca il blocco di memoria con una quantità di spazio leggermente superiore alla *dimensione*richiesta. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. Quando il blocco è allocato, la porzione utente del blocco viene riempita con il valore 0xCD e ciascuno dei buffer di sovrascrittura viene riempito con 0xFD.

**_aligned_malloc_dbg** imposta `errno` su `ENOMEM` se un'allocazione di memoria ha esito negativo o se la quantità di memoria necessaria (incluso l'overhead indicato in precedenza) supera `_HEAP_MAXREQ`. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Inoltre, **_aligned_malloc_dbg** convalida i relativi parametri. Se l' *allineamento* non è una potenza di 2 o la *dimensione* è zero, questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce NULL e imposta `errno` su `EINVAL`.

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_aligned_malloc_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).

## <a name="libraries"></a>Librerie

Solo versioni di debug delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)
