---
title: Gestione della memoria
ms.date: 11/04/2016
helpviewer_keywords:
- memory [MFC]
- MFC, memory management
- memory allocation [MFC]
- memory [MFC], managing
- memory allocation [MFC], MFC
ms.assetid: 934ac81b-d630-4232-88e5-ea74f7187987
ms.openlocfilehash: 5d81bd0a8bdd24059951cba5c8b69751b3d1db86
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69508265"
---
# <a name="memory-management"></a>Gestione della memoria

In questo gruppo di articoli viene descritto come sfruttare i servizi per utilizzo generico del libreria Microsoft Foundation Class (MFC) correlati alla gestione della memoria. L'allocazione di memoria può essere divisa in due categorie principali: allocazioni di frame e allocazioni di heap.

Una differenza principale tra le due tecniche di allocazione è che, con l'allocazione dei frame, in genere si utilizza il blocco di memoria effettivo, mentre con l'allocazione dell'heap viene sempre assegnato un puntatore al blocco di memoria. Un'altra differenza principale tra i due schemi è che gli oggetti frame vengono eliminati automaticamente, mentre gli oggetti heap devono essere eliminati in modo esplicito dal programmatore.

Per informazioni non MFC sulla gestione della memoria nei programmi per Windows, vedere [gestione della memoria](/windows/win32/memory/memory-management) nel Windows SDK.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Allocazione frame](../mfc/memory-management-frame-allocation.md)

- [Allocazione heap](../mfc/memory-management-heap-allocation.md)

- [Allocazione della memoria per una matrice](../mfc/memory-management-examples.md)

- [Deallocazione della memoria per una matrice dall'heap](../mfc/memory-management-examples.md)

- [Allocazione della memoria per una struttura di dati](../mfc/memory-management-examples.md)

- [Allocazione della memoria per un oggetto](../mfc/memory-management-examples.md)

- [Blocchi di memoria ridimensionabili](../mfc/memory-management-resizable-memory-blocks.md)

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)<br/>
[Argomenti MFC generali](../mfc/general-mfc-topics.md)
