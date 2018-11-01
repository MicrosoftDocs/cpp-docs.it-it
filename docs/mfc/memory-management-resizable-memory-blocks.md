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
ms.openlocfilehash: 499e2d4a99152e08f50159c4c952eb882c9fd425
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50481146"
---
# <a name="memory-management-resizable-memory-blocks"></a>Gestione della memoria: blocchi di memoria ridimensionabili

Il **nuove** e **eliminare** operatori, descritti nell'articolo [gestione della memoria: esempi](../mfc/memory-management-examples.md), sono ideali per l'allocazione e deallocazione di blocchi di memoria di dimensioni fisse e oggetti. In alcuni casi, l'applicazione potrebbe richiedere blocchi di memoria ridimensionabili. È necessario usare le funzioni della libreria di runtime C standard [malloc](../c-runtime-library/reference/malloc.md), [realloc](../c-runtime-library/reference/realloc.md), e [gratuito](../c-runtime-library/reference/free.md) per gestire i blocchi di memoria ridimensionabili nell'heap.

> [!IMPORTANT]
>  La combinazione di **nuove** e **eliminare** operatori con le funzioni di allocazione di memoria ridimensionabili nello stesso blocco di memoria comporterà la memoria danneggiata nella versione di Debug di MFC. È consigliabile non usare **realloc** in un blocco di memoria allocato con **nuove**. Allo stesso modo, non è consigliabile allocare un blocco di memoria con il **nuove** operatore ed eliminarlo con **gratuita**, o usare il **Elimina** operatore su un blocco di memoria allocato con **malloc**.

## <a name="see-also"></a>Vedere anche

[Gestione della memoria: allocazione di heap](../mfc/memory-management-heap-allocation.md)

