---
title: _malloc_dbg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _malloc_dbg
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
- malloc_dbg
- _malloc_dbg
dev_langs:
- C++
helpviewer_keywords:
- malloc_dbg function
- memory allocation
- _malloc_dbg function
ms.assetid: c97eca51-140b-4461-8bd2-28965b49ecdb
caps.latest.revision: 16
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 080bd3813fe14187df7f6b6184a0cfe21e9c5243
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="mallocdbg"></a>_malloc_dbg

Alloca un blocco di memoria nell'heap con spazio aggiuntivo per un'intestazione di debug e buffer di sovrascrittura (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
void *_malloc_dbg(
   size_t size,
   int blockType,
   const char *filename,
   int linenumber
);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Dimensione richiesta di ciascun blocco di memoria (byte).

*blockType*<br/>
Tipo del blocco di memoria richiesto: **CLIENT_BLOCK** oppure **NORMAL_BLOCK**.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o NULL.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o NULL.

Il *filename* e *linenumber* parametri sono disponibili solo quando **malloc_dbg** è stato chiamato in modo esplicito o [CRTDBG_MAP_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md)è stata definita una costante del preprocessore.

## <a name="return-value"></a>Valore restituito

Al termine, questa funzione restituisce un puntatore alla porzione utente del blocco di memoria allocato, chiama la nuova funzione di gestione o restituisce NULL. Per una descrizione completa del comportamento di restituzione, vedere la sezione relativa alle osservazioni. Per altre informazioni sull'uso della nuova funzione di gestione, vedere la funzione [malloc](malloc.md).

## <a name="remarks"></a>Note

**malloc_dbg** è una versione di debug di [malloc](malloc.md) (funzione). Quando si [debug](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **malloc_dbg** viene ridotta a una chiamata a **malloc**. Entrambi **malloc** e **malloc_dbg** allocare un blocco di memoria nell'heap di base, ma **malloc_dbg** offre diverse funzionalità di debug: buffer presenti a entrambi i lati dell'utente parte del blocco in cui verificare la presenza di perdite, un parametro di tipo blocco per registrare i tipi specifici di allocazioni e *filename*/*linenumber* informazioni per determinare l'origine di richieste di allocazione.

**malloc_dbg** alloca il blocco di memoria con una quantità di spazio a quella richiesta *dimensioni*. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. Quando il blocco è allocato, la porzione utente del blocco viene riempita con il valore 0xCD e ciascuno dei buffer di sovrascrittura viene riempito con 0xFD.

**malloc_dbg** imposta **errno** a **ENOMEM** se fallisce un'allocazione di memoria o se la quantità di memoria richiesta (incluso l'overhead menzionato precedentemente) supera **_HEAP_ MAXREQ**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_malloc_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Per un esempio di utilizzo **malloc_dbg**, vedere [crt_dbg1](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg1).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[malloc](malloc.md)<br/>
[_calloc_dbg](calloc-dbg.md)<br/>
[_calloc_dbg](calloc-dbg.md)<br/>
