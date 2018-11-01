---
title: Classi di eccezioni e debug
ms.date: 11/04/2016
f1_keywords:
- vc.classes.debug
helpviewer_keywords:
- debugging [MFC], exception classes
- debugging [MFC], classes for debugging
ms.assetid: 0d158efd-2e62-452e-9d2a-d3c30dfee7f9
ms.openlocfilehash: 5549ea3e67f06e82e441c1ca5afc4a1b859dd410
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50587970"
---
# <a name="debugging-and-exception-classes"></a>Classi di eccezioni e debug

Queste classi forniscono supporto per il debug dell'allocazione dinamica della memoria e per il passaggio delle informazioni sull'eccezione dalla funzione in cui l'eccezione viene generata alla funzione in cui viene intercettata.

Usare le classi [CDumpContext](../mfc/reference/cdumpcontext-class.md) e [CMemoryState](../mfc/reference/cmemorystate-structure.md) durante lo sviluppo per facilitare il debug, come descritto in [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques). Uso [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) per determinare la classe di qualsiasi oggetto in fase di esecuzione, come descritto nell'articolo [l'accesso a informazioni sulle classi di Run-Time](../mfc/accessing-run-time-class-information.md). Il framework utilizza `CRuntimeClass` per creare dinamicamente gli oggetti di una determinata classe.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

