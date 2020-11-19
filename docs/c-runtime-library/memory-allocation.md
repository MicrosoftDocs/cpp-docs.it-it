---
title: Allocazione della memoria
ms.date: 11/18/2020
description: Elenco delle funzioni di runtime di Microsoft C utilizzate per allocare, liberare e riallocare memoria.
f1_keywords:
- c.memory
helpviewer_keywords:
- memory allocation, routines
- memory, managing
- memory, allocation
ms.openlocfilehash: 39be48a4ebdf8ee917395d7b743846196200878d
ms.sourcegitcommit: e82e13b80150fcb27a1387018aafb00d99a3827a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/19/2020
ms.locfileid: "94920742"
---
# <a name="memory-allocation"></a>Allocazione di memoria

Queste routine allocano, liberano e riallocano memoria.

## <a name="memory-allocation-routines"></a>Routine di allocazione della memoria

|Routine|Uso|
|-------------|---------|
|[`_alloca`](../c-runtime-library/reference/alloca.md), [`_malloca`](../c-runtime-library/reference/malloca.md)|Allocare memoria dallo stack|
|[`calloc`](../c-runtime-library/reference/calloc.md)|Allocare una matrice e inizializzarne gli elementi su 0 (zero)|
|[`_calloc_dbg`](../c-runtime-library/reference/calloc-dbg.md)|Versione di debug di **`calloc`** . Disponibile solo nelle versioni di debug delle librerie di runtime|
|[`operator delete`, `operator delete[]`](../c-runtime-library/delete-operator-crt.md)|Memoria libera allocata nell'heap |
|[`_expand`](../c-runtime-library/reference/expand.md)|Espandi o compatta un blocco di memoria senza lo stato spostato|
|[`_expand_dbg`](../c-runtime-library/reference/expand-dbg.md)|Versione di debug di **`_expand`** . Disponibile solo nelle versioni di debug delle librerie di runtime|
|[`free`](../c-runtime-library/reference/free.md)|Memoria libera allocata nell'heap|
|[`_free_dbg`](../c-runtime-library/reference/free-dbg.md)|Versione di debug di **`free`** . Disponibile solo nelle versioni di debug delle librerie di runtime|
|[`_freea`](../c-runtime-library/reference/freea.md)|Memoria libera allocata nello stack|
|[`_get_heap_handle`](../c-runtime-library/reference/get-heap-handle.md)|Ottenere un oggetto Win32 nell' `HANDLE` heap di runtime C (CRT).|
|[`_heapadd`](../c-runtime-library/heapadd.md)|Aggiungere memoria all'heap|
|[`_heapchk`](../c-runtime-library/reference/heapchk.md)|Verificare la coerenza dell'heap|
|[`_heapmin`](../c-runtime-library/reference/heapmin.md)|Rilascia la memoria inutilizzata nell'heap|
|[`_heapset`](../c-runtime-library/heapset.md)|Riempire le voci dell'heap libero con un valore|
|[`_heapwalk`](../c-runtime-library/reference/heapwalk.md)|Ottenere informazioni su ogni voce nell'heap|
|[`malloc`](../c-runtime-library/reference/malloc.md)|Allocare memoria dall'heap|
|[`_malloc_dbg`](../c-runtime-library/reference/malloc-dbg.md)|Versione di debug di **`malloc`** ; disponibile solo nelle versioni di debug delle librerie di runtime|
|[`_msize`](../c-runtime-library/reference/msize.md)|Restituisce la dimensione di un blocco di memoria allocato|
|[`_msize_dbg`](../c-runtime-library/reference/msize-dbg.md)|Versione di debug di **`_msize`** ; disponibile solo nelle versioni di debug delle librerie di runtime|
|[`new`, `new[]`](../c-runtime-library/new-operator-crt.md)|Allocare un blocco di memoria dall'heap|
|[`_query_new_handler`](../c-runtime-library/reference/query-new-handler.md)|Ottiene l'indirizzo della routine del nuovo gestore corrente impostata da **`_set_new_handler`**|
|[`_query_new_mode`](../c-runtime-library/reference/query-new-mode.md)|Ottenere la nuova modalità di gestione impostata da **`_set_new_mode`** per **`malloc`**|
|[`realloc`](../c-runtime-library/reference/realloc.md)|Riallocare un blocco a una nuova dimensione|
|[`_realloc_dbg`](../c-runtime-library/reference/realloc-dbg.md)|Versione di debug di **`realloc`** ; disponibile solo nelle versioni di debug delle librerie di runtime|
|[`_set_new_handler`](../c-runtime-library/reference/set-new-handler.md)|Abilitare il meccanismo di gestione degli errori quando l' **`new`** operatore non riesce ad allocare memoria e abilitare la compilazione delle librerie standard C++|
|[`_set_new_mode`](../c-runtime-library/reference/set-new-mode.md)|Impostare la nuova modalità del gestore per **`malloc`**|

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)