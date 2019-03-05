---
title: 'Gestione della memoria: Allocazione di heap'
ms.date: 11/04/2016
helpviewer_keywords:
- memory [MFC], detecting leaks
- delete operator [MFC], using with debug MFC
- heap allocation [MFC], described
- memory allocation [MFC], heap memory
- memory leaks [MFC], detecting
- new operator [MFC], using with debug MFC
- heap allocation [MFC]
- detecting memory leaks [MFC]
ms.assetid: a5d949c6-1b79-476e-9c66-513a558203d9
ms.openlocfilehash: 93eee5cbfe1cd49042a9080f06657e751640de69
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57281174"
---
# <a name="memory-management-heap-allocation"></a>Gestione della memoria: Allocazione di heap

L'heap è riservato per le esigenze di allocazione di memoria del programma. È un'area oltre il codice del programma e lo stack. I programmi C tipici utilizzano le funzioni **malloc** e **gratuita** per allocare e deallocare la memoria dell'heap. La versione di Debug di MFC fornisce le versioni modificate di operatori C++ predefiniti **nuove** e **eliminare** per allocare e deallocare oggetti in memoria dell'heap.

Quando si usa **nuove** e **eliminare** anziché **malloc** e **gratuito**, si è in grado di sfruttare la libreria di classi gestione della memoria miglioramenti del debug, che possono essere utili per il rilevamento di perdite di memoria. Quando si compila il programma con la versione di MFC, le versioni standard del **nuove** e **eliminare** operatori consentono di allocare e deallocare la memoria (la versione di MFC in modo efficiente non fornisce versioni modificate di questi operatori).

Si noti che la dimensione totale di oggetti allocati sull'heap è limitata solo dalla memoria virtuale disponibile del sistema.

## <a name="see-also"></a>Vedere anche

[Gestione della memoria](../mfc/memory-management.md)
