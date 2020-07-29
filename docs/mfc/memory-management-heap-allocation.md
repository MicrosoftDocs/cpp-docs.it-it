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
ms.openlocfilehash: ecf60fbdd11f540d12c1bfab047bbb80a3cb83e8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228596"
---
# <a name="memory-management-heap-allocation"></a>Gestione della memoria: allocazione di heap

L'heap è riservato per le esigenze di allocazione della memoria del programma. Si tratta di un'area diversa dal codice del programma e dallo stack. I programmi C tipici usano le funzioni **malloc** e **liberano** di allocare e deallocare la memoria heap. La versione di debug di MFC fornisce le versioni modificate degli operatori predefiniti C++ **`new`** e **`delete`** per allocare e deallocare gli oggetti nella memoria heap.

Quando si usano **`new`** e **`delete`** invece di **malloc** e **Free**, è possibile sfruttare i miglioramenti del debug della libreria di classi, che può essere utile per rilevare le perdite di memoria. Quando si compila il programma con la versione finale di MFC, le versioni standard degli **`new`** operatori e **`delete`** forniscono un modo efficiente per allocare e deallocare memoria (la versione finale di MFC non fornisce le versioni modificate di questi operatori).

Si noti che la dimensione totale degli oggetti allocati nell'heap è limitata solo dalla memoria virtuale disponibile del sistema.

## <a name="see-also"></a>Vedere anche

[Gestione della memoria](memory-management.md)
