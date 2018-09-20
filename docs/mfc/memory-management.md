---
title: Gestione della memoria | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- memory [MFC]
- MFC, memory management
- memory allocation [MFC]
- memory [MFC], managing
- memory allocation [MFC], MFC
ms.assetid: 934ac81b-d630-4232-88e5-ea74f7187987
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e4e83342dde85aae626c9fb83a9493f3e3dd668b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46383993"
---
# <a name="memory-management"></a>Gestione della memoria

Questo gruppo di articoli descrive come sfruttare i vantaggi dei servizi per utilizzo generico di Microsoft Foundation classe libreria (MFC) correlate alla gestione della memoria. Allocazione di memoria può essere suddivisi in due categorie principali: frame le allocazioni e le allocazioni di heap.

Una differenza principale tra le due tecniche è che con allocazione di frame che generalmente usate con la memoria effettiva bloccato stesso, mentre con allocazione heap si ottengono sempre un puntatore al blocco di memoria. Un'altra differenza principale tra i due schemi è che gli oggetti nel frame vengono eliminati automaticamente, mentre gli oggetti degli heap devono essere eliminati esplicitamente dal programmatore.

Per non MFC informazioni sulla gestione della memoria nelle applicazioni per Windows, vedere [gestione della memoria](https://msdn.microsoft.com/library/windows/desktop/aa366779) nel SDK di Windows.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Allocazione di frame](../mfc/memory-management-frame-allocation.md)

- [Allocazione di heap](../mfc/memory-management-heap-allocation.md)

- [Allocazione di memoria per una matrice](../mfc/memory-management-examples.md)

- [Deallocazione di memoria per una matrice dall'heap](../mfc/memory-management-examples.md)

- [Allocazione di memoria per una struttura di dati](../mfc/memory-management-examples.md)

- [Allocazione di memoria per un oggetto](../mfc/memory-management-examples.md)

- [Blocchi di memoria ridimensionabili](../mfc/memory-management-resizable-memory-blocks.md)

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)<br/>
[Argomenti MFC generali](../mfc/general-mfc-topics.md)

