---
title: 'Gestione della memoria: Blocchi di memoria ridimensionabili'
ms.date: 11/04/2016
helpviewer_keywords:
- memory blocks [MFC], resizable
- memory [MFC], corruption
- memory allocation [MFC], memory block size
- memory blocks [MFC], allocating
- blocks [MFC], memory allocation
- resizable memory blocks [MFC]
ms.assetid: f0efe6f4-a3ed-4541-9195-51ec1291967a
ms.openlocfilehash: 124a2599e1523d5393fcf6255c88de0fd8cd72cd
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57281746"
---
# <a name="memory-management-resizable-memory-blocks"></a>Gestione della memoria: Blocchi di memoria ridimensionabili

Il **nuove** e **eliminare** operatori, descritti nell'articolo [gestione della memoria: Esempi](../mfc/memory-management-examples.md), sono ideali per l'allocazione e deallocazione di oggetti e i blocchi di memoria di dimensioni fisse. In alcuni casi, l'applicazione potrebbe richiedere blocchi di memoria ridimensionabili. È necessario usare le funzioni della libreria di runtime C standard [malloc](../c-runtime-library/reference/malloc.md), [realloc](../c-runtime-library/reference/realloc.md), e [gratuito](../c-runtime-library/reference/free.md) per gestire i blocchi di memoria ridimensionabili nell'heap.

> [!IMPORTANT]
>  La combinazione di **nuove** e **eliminare** operatori con le funzioni di allocazione di memoria ridimensionabili nello stesso blocco di memoria comporterà la memoria danneggiata nella versione di Debug di MFC. È consigliabile non usare **realloc** in un blocco di memoria allocato con **nuove**. Allo stesso modo, non è consigliabile allocare un blocco di memoria con il **nuove** operatore ed eliminarlo con **gratuita**, o usare il **Elimina** operatore su un blocco di memoria allocato con **malloc**.

## <a name="see-also"></a>Vedere anche

[Gestione della memoria: Allocazione di heap](../mfc/memory-management-heap-allocation.md)
