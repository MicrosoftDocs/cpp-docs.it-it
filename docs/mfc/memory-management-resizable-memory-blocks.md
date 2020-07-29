---
title: 'Gestione della memoria: blocchi di memoria ridimensionabili'
ms.date: 11/04/2016
helpviewer_keywords:
- memory blocks [MFC], resizable
- memory [MFC], corruption
- memory allocation [MFC], memory block size
- memory blocks [MFC], allocating
- blocks [MFC], memory allocation
- resizable memory blocks [MFC]
ms.assetid: f0efe6f4-a3ed-4541-9195-51ec1291967a
ms.openlocfilehash: 308b5aa00aeb1f0e7887ad90bad79a28b361d7c7
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217922"
---
# <a name="memory-management-resizable-memory-blocks"></a>Gestione della memoria: blocchi di memoria ridimensionabili

Gli **`new`** **`delete`** operatori e, descritti nell'articolo [gestione della memoria: esempi](memory-management-examples.md), sono utili per l'allocazione e la deallocazione di blocchi di memoria e oggetti a dimensione fissa. Occasionalmente, è possibile che l'applicazione richieda blocchi di memoria ridimensionabili. È necessario utilizzare le funzioni della libreria di runtime C standard [malloc](../c-runtime-library/reference/malloc.md), [realloc](../c-runtime-library/reference/realloc.md)e [Free](../c-runtime-library/reference/free.md) per gestire i blocchi di memoria ridimensionabili nell'heap.

> [!IMPORTANT]
> La combinazione **`new`** degli **`delete`** operatori e con le funzioni ridimensionabili di allocazione della memoria nello stesso blocco di memoria comporterà la memoria danneggiata nella versione di debug di MFC. Non usare **realloc** in un blocco di memoria allocato con **`new`** . Analogamente, non è consigliabile allocare un blocco di memoria con l' **`new`** operatore ed eliminarlo con **Free**oppure utilizzare l' **`delete`** operatore in un blocco di memoria allocato con **malloc**.

## <a name="see-also"></a>Vedere anche

[Gestione della memoria: allocazione dell'heap](memory-management-heap-allocation.md)
