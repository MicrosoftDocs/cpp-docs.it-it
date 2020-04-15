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
ms.openlocfilehash: b048b60a5512ecc54750cb980ca67e2373e2c837
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364781"
---
# <a name="memory-management-resizable-memory-blocks"></a>Gestione della memoria: blocchi di memoria ridimensionabili

Gli operatori **new** e **delete,** descritti nell'articolo [Memory Management: Examples](../mfc/memory-management-examples.md), sono adatti per allocare e deallocare blocchi di memoria e oggetti a dimensione fissa. In alcuni casi, l'applicazione potrebbe richiedere blocchi di memoria ridimensionabili. È necessario utilizzare le funzioni standard della libreria di runtime del linguaggio C [malloc](../c-runtime-library/reference/malloc.md), [realloc](../c-runtime-library/reference/realloc.md)e [free](../c-runtime-library/reference/free.md) to manage resizable memory blocks nell'heap.

> [!IMPORTANT]
> La combinazione degli operatori **new** e **delete** con le funzioni di allocazione della memoria ridimensionabili nello stesso blocco di memoria comporterà la memoria danneggiata nella versione di debug di MFC. Non utilizzare **realloc** su un blocco di memoria allocato con **new**. Analogamente, è consigliabile non allocare un blocco di memoria con l'operatore **new** ed eliminarlo con **free**oppure utilizzare l'operatore **delete** su un blocco di memoria allocato con **malloc**.

## <a name="see-also"></a>Vedere anche

[Gestione della memoria: allocazione di heap](../mfc/memory-management-heap-allocation.md)
