---
description: 'Altre informazioni su: _freea'
title: _freea
ms.date: 11/04/2016
api_name:
- _freea
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
- freea
- _freea
helpviewer_keywords:
- _freea function
- freea function
- memory deallocation
ms.assetid: dcd30584-dd9d-443b-8c4c-13237a1cecac
ms.openlocfilehash: 6d6f57117265e62e7d3c822110b52f69cb65ffac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97282965"
---
# <a name="_freea"></a>_freea

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

No.

## <a name="remarks"></a>Osservazioni

La funzione **_freea** dealloca un blocco di memoria (*memblock*) precedentemente allocato da una chiamata a [_malloca](malloca.md). **_freea** verifica se la memoria è stata allocata nell'heap o nello stack. Se è stato allocato nello stack, **_freea** non esegue alcuna operazione. Se è stata allocata nell'heap, il numero di byte liberati è equivalente al numero di byte richiesto quando il blocco è stato allocato. Se *memblock* è **null**, il puntatore viene ignorato e **_freea** viene restituito immediatamente. Il tentativo di liberare un puntatore non valido (un puntatore a un blocco di memoria non allocato da **_malloca**) potrebbe influire sulle richieste di allocazione successive e causare errori.

**_freea** chiama **Free** internamente se rileva che la memoria è allocata nell'heap. Se la memoria è nell'heap o lo stack è determinato da un indicatore posizionato nella memoria in corrispondenza dell'indirizzo che precede immediatamente la memoria allocata.

Se si verifica un errore durante la liberazione della memoria, **errno** viene impostato con le informazioni del sistema operativo sulla natura dell'errore. Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Dopo che un blocco di memoria è stato liberato, [_heapmin](heapmin.md) riduce la quantità di memoria libera nell'heap unendo le aree inutilizzate e rilasciandole nuovamente al sistema operativo. La memoria liberata che non viene rilasciata al sistema operativo viene ripristinata al pool libero ed è disponibile nuovamente per l'allocazione.

Una chiamata a **_freea** deve accompagnare tutte le chiamate a **_malloca**. È anche un errore chiamare due volte **_freea** nella stessa memoria. Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, in particolare con [_malloc_dbg](malloc-dbg.md) funzionalità abilitate definendo **_CRTDBG_MAP_ALLOC**, risulta più semplice trovare chiamate mancanti o duplicate a **_freea**. Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

**_freea** è contrassegnato `__declspec(noalias)` , pertanto non è garantito che la funzione modifichi le variabili globali. Per altre informazioni, vedere [noalias](../../cpp/noalias.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_freea**|\<stdlib.h> e \<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_malloca](malloca.md).

## <a name="see-also"></a>Vedi anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[_malloca](malloca.md)<br/>
[calloc](calloc.md)<br/>
[malloc](malloc.md)<br/>
[_malloc_dbg](malloc-dbg.md)<br/>
[realloc](realloc.md)<br/>
[_free_dbg](free-dbg.md)<br/>
[_heapmin](heapmin.md)<br/>
