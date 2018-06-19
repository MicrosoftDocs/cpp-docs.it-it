---
title: 'Gestione della memoria: Allocazione di Heap | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 99df4a50f021e0981354a5d316606729bb824d94
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33352412"
---
# <a name="memory-management-heap-allocation"></a>Gestione della memoria: allocazione di heap
L'heap è riservato per le esigenze di allocazione di memoria del programma. È un'area oltre il codice programma e lo stack. Programmi C tipico utilizzano le funzioni `malloc` e **libero** per allocare e deallocare la memoria heap. La versione di Debug di MFC fornisce versioni modificate degli operatori C++ predefiniti **nuova** e **eliminare** per allocare e deallocare gli oggetti nella memoria heap.  
  
 Quando si utilizza **nuova** e **eliminare** anziché `malloc` e **libero**, si è in grado di sfruttare i miglioramenti del debug la gestione della memoria della libreria di classi , che può essere utile per rilevare perdite di memoria. Quando si compila un programma con la versione di MFC, le versioni standard del **nuova** e **eliminare** operatori forniscono un modo efficiente per allocare e deallocare la memoria (la versione di MFC non fornisce versioni modificate di questi operatori).  
  
 Si noti che la dimensione totale degli oggetti allocati nell'heap è limitata solo dalla memoria virtuale del sistema.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione della memoria](../mfc/memory-management.md)

