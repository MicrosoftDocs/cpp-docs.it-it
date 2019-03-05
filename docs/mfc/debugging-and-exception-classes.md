---
title: Classi di eccezioni e debug
ms.date: 11/04/2016
f1_keywords:
- vc.classes.debug
helpviewer_keywords:
- debugging [MFC], exception classes
- debugging [MFC], classes for debugging
ms.assetid: 0d158efd-2e62-452e-9d2a-d3c30dfee7f9
ms.openlocfilehash: 328d7a38c544b56f83ea3e8b1136b1122c4dfa14
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57271411"
---
# <a name="debugging-and-exception-classes"></a>Classi di eccezioni e debug

Queste classi forniscono supporto per il debug dell'allocazione dinamica della memoria e per il passaggio delle informazioni sull'eccezione dalla funzione in cui l'eccezione viene generata alla funzione in cui viene intercettata.

Usare le classi [CDumpContext](../mfc/reference/cdumpcontext-class.md) e [CMemoryState](../mfc/reference/cmemorystate-structure.md) durante lo sviluppo per facilitare il debug, come descritto in [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques). Uso [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) per determinare la classe di qualsiasi oggetto in fase di esecuzione, come descritto nell'articolo [l'accesso a informazioni sulle classi di Run-Time](../mfc/accessing-run-time-class-information.md). Il framework utilizza `CRuntimeClass` per creare dinamicamente gli oggetti di una determinata classe.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
