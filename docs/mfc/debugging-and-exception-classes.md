---
title: Classi di eccezioni e debug
ms.date: 11/04/2016
f1_keywords:
- vc.classes.debug
helpviewer_keywords:
- debugging [MFC], exception classes
- debugging [MFC], classes for debugging
ms.assetid: 0d158efd-2e62-452e-9d2a-d3c30dfee7f9
ms.openlocfilehash: 6c7d1fc20556993c3c6690122786d7a767d895ad
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84625933"
---
# <a name="debugging-and-exception-classes"></a>Classi di eccezioni e debug

Queste classi forniscono supporto per il debug dell'allocazione dinamica della memoria e per il passaggio delle informazioni sull'eccezione dalla funzione in cui l'eccezione viene generata alla funzione in cui viene intercettata.

Usare le classi [CDumpContext](reference/cdumpcontext-class.md) e [CMemoryState](reference/cmemorystate-structure.md) durante lo sviluppo per facilitare il debug, come descritto in [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques). Usare [CRuntimeClass](reference/cruntimeclass-structure.md) per determinare la classe di un oggetto in fase di esecuzione, come descritto nell'articolo [accesso alle informazioni sulle classi](accessing-run-time-class-information.md)in fase di esecuzione. Il framework utilizza `CRuntimeClass` per creare dinamicamente gli oggetti di una determinata classe.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](class-library-overview.md)
