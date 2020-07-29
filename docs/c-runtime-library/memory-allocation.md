---
title: Allocazione della memoria
ms.date: 11/04/2016
f1_keywords:
- c.memory
helpviewer_keywords:
- memory allocation, routines
- memory, managing
- memory, allocation
ms.assetid: b4470556-a128-4782-9943-2ccf7a7d9979
ms.openlocfilehash: 2adfd0de21a5dc7a1f3aa65041a6b8a9a9cf1d69
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87189506"
---
# <a name="memory-allocation"></a>Allocazione della memoria

Usare queste routine per allocare, liberare e riallocare memoria.

## <a name="memory-allocation-routines"></a>Routine di allocazione della memoria

|Routine|Uso|
|-------------|---------|
|[_alloca](../c-runtime-library/reference/alloca.md), [_malloca](../c-runtime-library/reference/malloca.md)|Allocare memoria dallo stack|
|[calloc](../c-runtime-library/reference/calloc.md)|Allocare memoria per la matrice, inizializzando ogni byte nel blocco allocato a 0|
|[_calloc_dbg](../c-runtime-library/reference/calloc-dbg.md)|Versione di debug di **calloc**; disponibile solo nelle versioni di debug delle librerie di runtime|
|[operatore delete](../c-runtime-library/operator-delete-crt.md)|Liberare un blocco allocato|
|[operator delete&#91;&#93;](../c-runtime-library/delete-operator-crt.md)|Liberare un blocco allocato|
|[_expand](../c-runtime-library/reference/expand.md)|Espandere o ridurre un blocco di memoria senza spostarlo|
|[_expand_dbg](../c-runtime-library/reference/expand-dbg.md)|Versione di debug di **_expand**; disponibile solo nelle versioni di debug delle librerie di runtime|
|[libero](../c-runtime-library/reference/free.md)|Liberare un blocco allocato|
|[_free_dbg](../c-runtime-library/reference/free-dbg.md)|Versione di debug di **free**; disponibile solo nelle versioni di debug delle librerie di runtime|
|[_freea](../c-runtime-library/reference/freea.md)|Liberare un blocco allocato dallo stack|
|[_get_heap_handle](../c-runtime-library/reference/get-heap-handle.md)|Recuperare l'handle Win32 dell'heap CRT.|
|[_heapadd](../c-runtime-library/heapadd.md)|Aggiungere memoria all'heap|
|[_heapchk](../c-runtime-library/reference/heapchk.md)|Verificare la coerenza dell'heap|
|[_heapmin](../c-runtime-library/reference/heapmin.md)|Rilasciare la memoria inutilizzata nell'heap|
|[_heapset](../c-runtime-library/heapset.md)|Riempire le voci dell'heap vuote con un valore specificato|
|[_heapwalk](../c-runtime-library/reference/heapwalk.md)|Restituire informazioni su ogni voce dell'heap|
|[malloc](../c-runtime-library/reference/malloc.md)|Allocare un blocco di memoria dall'heap|
|[_malloc_dbg](../c-runtime-library/reference/malloc-dbg.md)|Versione di debug di **malloc**; disponibile solo nelle versioni di debug delle librerie di runtime|
|[_msize](../c-runtime-library/reference/msize.md)|Restituire le dimensioni di un blocco allocato|
|[_msize_dbg](../c-runtime-library/reference/msize-dbg.md)|Versione di debug di **_msize**; disponibile solo nelle versioni di debug delle librerie di runtime|
|[Nuovo](../c-runtime-library/operator-new-crt.md)|Allocare un blocco di memoria dall'heap|
|[new&#91;&#93;](../c-runtime-library/new-operator-crt.md)|Allocare un blocco di memoria dall'heap|
|[_query_new_handler](../c-runtime-library/reference/query-new-handler.md)|Restituire l'indirizzo della routine del nuovo gestore corrente, come impostato da **_set_new_handler**|
|[_query_new_mode](../c-runtime-library/reference/query-new-mode.md)|Restituire un Integer che indica la nuova modalità di gestione impostata da **_set_new_mode** per **malloc**|
|[realloc](../c-runtime-library/reference/realloc.md)|Riallocare un blocco a nuove dimensioni|
|[_realloc_dbg](../c-runtime-library/reference/realloc-dbg.md)|Versione di debug di **realloc**; disponibile solo nelle versioni di debug delle librerie di runtime|
|[_set_new_handler](../c-runtime-library/reference/set-new-handler.md)|Abilitare il meccanismo di gestione degli errori quando l' **`new`** operatore non riesce (per allocare memoria) e abilitare la compilazione di librerie standard C++|
|[_set_new_mode](../c-runtime-library/reference/set-new-mode.md)|Impostare una nuova modalità di gestione per **malloc**|

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
