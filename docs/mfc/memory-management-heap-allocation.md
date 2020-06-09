---
title: 'Gestione della memoria: allocazione di heap'
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
ms.openlocfilehash: 1f0b07a0a3439faba71078af1e2d7d1559a42b41
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84626288"
---
# <a name="memory-management-heap-allocation"></a>Gestione della memoria: allocazione di heap

L'heap è riservato per le esigenze di allocazione della memoria del programma. Si tratta di un'area diversa dal codice del programma e dallo stack. I programmi C tipici usano le funzioni **malloc** e **liberano** di allocare e deallocare la memoria heap. La versione di debug di MFC fornisce le versioni modificate degli operatori predefiniti **New** e **Delete** di C++ per allocare e deallocare oggetti nella memoria heap.

Quando si usa **New** ed **Delete** anziché **malloc** e **Free**, si è in grado di sfruttare i miglioramenti del debug della libreria di classi, che può essere utile per rilevare le perdite di memoria. Quando si compila il programma con la versione finale di MFC, le versioni standard degli operatori **New** e **Delete** forniscono un modo efficiente per allocare e deallocare memoria (la versione di rilascio di MFC non fornisce le versioni modificate di questi operatori).

Si noti che la dimensione totale degli oggetti allocati nell'heap è limitata solo dalla memoria virtuale disponibile del sistema.

## <a name="see-also"></a>Vedere anche

[Gestione della memoria](memory-management.md)
