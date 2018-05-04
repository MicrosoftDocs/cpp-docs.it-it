---
title: _freea | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _freea
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
- freea
- _freea
dev_langs:
- C++
helpviewer_keywords:
- _freea function
- freea function
- memory deallocation
ms.assetid: dcd30584-dd9d-443b-8c4c-13237a1cecac
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8ac01f965e159dae19bbbd748c1692058063a211
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="freea"></a>_freea

Dealloca o libera un blocco di memoria.

## <a name="syntax"></a>Sintassi

```C
void _freea(
   void *memblock
);
```

### <a name="parameters"></a>Parametri

*memblock*<br/>
Blocco di memoria precedentemente allocata da liberare.

## <a name="return-value"></a>Valore restituito

Nessuno.

## <a name="remarks"></a>Note

Il **freea** funzione dealloca un blocco di memoria (*memblock*) precedentemente allocato da una chiamata a [malloca](malloca.md). **freea** verifiche per controllare se è stata allocata la memoria su heap o allo stack. Se è stato allocato nello stack, **freea** non esegue alcuna operazione. Se è stata allocata nell'heap, il numero di byte liberati è equivalente al numero di byte richiesto quando il blocco è stato allocato. Se *memblock* viene **NULL**, il puntatore viene ignorato e **freea** restituisce immediatamente. Tentativo di liberare un puntatore non valido (un puntatore a un blocco di memoria che non è stato allocato da **malloca**) potrebbero influire sulle richieste di allocazione successive e causare errori.

**freea** chiamate **libero** internamente se rileva che la memoria viene allocata nell'heap. Se la memoria è nell'heap o lo stack è determinato da un indicatore posizionato nella memoria in corrispondenza dell'indirizzo che precede immediatamente la memoria allocata.

Se si verifica un errore nel liberare la memoria **errno** viene impostato con informazioni dal sistema operativo sulla natura dell'errore. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

Dopo che un blocco di memoria è stato liberato, [_heapmin](heapmin.md) riduce la quantità di memoria libera nell'heap unendo le aree inutilizzate e rilasciandole nuovamente al sistema operativo. La memoria liberata che non viene rilasciata al sistema operativo viene ripristinata al pool libero ed è disponibile nuovamente per l'allocazione.

Una chiamata a **freea** accompagna tutte le chiamate a **malloca**. È anche un errore di chiamare **freea** due volte nella stessa memoria. Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, in particolare con [malloc_dbg](malloc-dbg.md) funzionalità abilitate definendo **CRTDBG_MAP_ALLOC**, risulta più semplice trovare mancante o duplicare le chiamate a **freea**. Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

**freea** contrassegnato `__declspec(noalias)`, vale a dire che la funzione è sicuramente non per modificare le variabili globali. Per altre informazioni, vedere [noalias](../../cpp/noalias.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_freea**|\<stdlib.h> e \<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_malloca](malloca.md).

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[_malloca](malloca.md)<br/>
[calloc](calloc.md)<br/>
[malloc](malloc.md)<br/>
[_malloc_dbg](malloc-dbg.md)<br/>
[realloc](realloc.md)<br/>
[_free_dbg](free-dbg.md)<br/>
[_heapmin](heapmin.md)<br/>
