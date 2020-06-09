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
ms.openlocfilehash: 74ae94146b1ec711b586ea1fecbbc89a47b40b5e
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84626274"
---
# <a name="memory-management-resizable-memory-blocks"></a>Gestione della memoria: blocchi di memoria ridimensionabili

Gli operatori **New** e **Delete** , descritti nell'articolo [gestione della memoria: esempi](memory-management-examples.md), sono utili per l'allocazione e la deallocazione di blocchi di memoria e oggetti a dimensione fissa. Occasionalmente, è possibile che l'applicazione richieda blocchi di memoria ridimensionabili. È necessario utilizzare le funzioni della libreria di runtime C standard [malloc](../c-runtime-library/reference/malloc.md), [realloc](../c-runtime-library/reference/realloc.md)e [Free](../c-runtime-library/reference/free.md) per gestire i blocchi di memoria ridimensionabili nell'heap.

> [!IMPORTANT]
> Combinando gli operatori **New** e **Delete** con le funzioni di allocazione di memoria ridimensionabili nello stesso blocco di memoria si otterrà una memoria danneggiata nella versione di debug di MFC. Non usare **realloc** in un blocco di memoria allocato con **New**. Analogamente, non è consigliabile allocare un blocco di memoria con l'operatore **New** ed eliminarlo con **Free**oppure usare l'operatore **Delete** in un blocco di memoria allocato con **malloc**.

## <a name="see-also"></a>Vedere anche

[Gestione della memoria: allocazione di heap](memory-management-heap-allocation.md)
