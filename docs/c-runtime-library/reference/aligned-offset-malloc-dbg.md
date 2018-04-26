---
title: _aligned_offset_malloc_dbg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _aligned_offset_malloc_dbg
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
- _aligned_offset_malloc_dbg
- aligned_offset_malloc_dbg
dev_langs:
- C++
helpviewer_keywords:
- _aligned_offset_malloc_dbg function
- aligned_offset_malloc_dbg function
ms.assetid: 6c242307-c59e-4d63-aae5-d8cbec8e021c
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: afb15a5e132d70b40fa3e816f5271a192df5788a
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="alignedoffsetmallocdbg"></a>_aligned_offset_malloc_dbg

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

*Allineamento*<br/>
Valore di allineamento, che deve essere una potenza intera di 2.

*offset*<br/>
Offset nell'allocazione di memoria per imporre l'allineamento.

*filename*<br/>
Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o NULL.

*linenumber*<br/>
Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o NULL.

## <a name="return-value"></a>Valore restituito

Un puntatore al blocco di memoria allocato o **NULL** se l'operazione non riuscita.

## <a name="remarks"></a>Note

**aligned_offset_malloc_dbg** è una versione di debug di [aligned_offset_malloc](aligned-offset-malloc.md) (funzione). Quando si [debug](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **aligned_offset_malloc_dbg** viene ridotta a una chiamata a **aligned_offset_malloc**. Entrambi **aligned_offset_malloc** e **aligned_offset_malloc_dbg** allocare un blocco di memoria nell'heap di base, ma **aligned_offset_malloc_dbg** offre diversi le funzionalità di debug: buffer presenti a entrambi i lati della porzione utente del blocco in cui verificare la presenza di perdite, un parametro di tipo blocco per registrare i tipi specifici di allocazioni e *filename*/*linenumber* le informazioni per determinare l'origine delle richieste di allocazione.

**aligned_offset_malloc_dbg** alloca il blocco di memoria con una quantità di spazio a quella richiesta *dimensioni*. Lo spazio aggiuntivo viene usato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire all'applicazione informazioni di intestazione di debug e buffer di sovrascrittura. Quando il blocco è allocato, la porzione utente del blocco viene riempita con il valore 0xCD e ciascuno dei buffer di sovrascrittura viene riempito con 0xFD.

**aligned_offset_malloc_dbg** è utile nelle situazioni in cui è necessaria l'allineamento su un elemento nidificato; ad esempio, se è stato necessario allineamento in una classe annidata.

**aligned_offset_malloc_dbg** basa **malloc**; per ulteriori informazioni, vedere [malloc](malloc.md).

La funzione imposta **errno** alla **ENOMEM** se l'allocazione di memoria non riesce o se la dimensione richiesta è maggiore **heap_maxreq**. Per ulteriori informazioni **errno**, vedere [errno, doserrno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Inoltre, **aligned_offset_malloc** convalida i propri parametri. Se *allineamento* non è una potenza di 2 o se *offset* è maggiore o uguale a *dimensioni* e diverso da zero, questa funzione richiama il gestore di parametri non validi, come descritto in [ Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce **NULL** e imposta **errno** al **EINVAL**.

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_aligned_offset_malloc_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
