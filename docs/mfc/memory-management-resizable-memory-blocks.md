---
description: 'Altre informazioni su: gestione della memoria: blocchi di memoria ridimensionabili'
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
ms.openlocfilehash: bcca5617a0d59a7dd5c6a1f9c9f82cb5876f1ef5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97248879"
---
# <a name="memory-management-resizable-memory-blocks"></a>Gestione della memoria: blocchi di memoria ridimensionabili

Gli **`new`** **`delete`** operatori e, descritti nell'articolo [gestione della memoria: esempi](memory-management-examples.md), sono utili per l'allocazione e la deallocazione di blocchi di memoria e oggetti a dimensione fissa. Occasionalmente, è possibile che l'applicazione richieda blocchi di memoria ridimensionabili. È necessario utilizzare le funzioni della libreria di runtime C standard [malloc](../c-runtime-library/reference/malloc.md), [realloc](../c-runtime-library/reference/realloc.md)e [Free](../c-runtime-library/reference/free.md) per gestire i blocchi di memoria ridimensionabili nell'heap.

> [!IMPORTANT]
> La combinazione **`new`** degli **`delete`** operatori e con le funzioni ridimensionabili di allocazione della memoria nello stesso blocco di memoria comporterà la memoria danneggiata nella versione di debug di MFC. Non usare **realloc** in un blocco di memoria allocato con **`new`** . Analogamente, non è consigliabile allocare un blocco di memoria con l' **`new`** operatore ed eliminarlo con **Free** oppure utilizzare l' **`delete`** operatore in un blocco di memoria allocato con **malloc**.

## <a name="see-also"></a>Vedi anche

[Gestione della memoria: allocazione dell'heap](memory-management-heap-allocation.md)
