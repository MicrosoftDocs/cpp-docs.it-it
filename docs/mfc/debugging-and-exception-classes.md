---
title: Classi di eccezioni e debug | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.classes.debug
dev_langs:
- C++
helpviewer_keywords:
- debugging [MFC], exception classes
- debugging [MFC], classes for debugging
ms.assetid: 0d158efd-2e62-452e-9d2a-d3c30dfee7f9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 622e6d04a567668ebfd2c737c5cdde1c2ea09b35
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="debugging-and-exception-classes"></a>Classi di eccezioni e debug
Queste classi forniscono supporto per il debug dell'allocazione dinamica della memoria e per il passaggio delle informazioni sull'eccezione dalla funzione in cui l'eccezione viene generata alla funzione in cui viene intercettata.  
  
 Utilizzare le classi [CDumpContext](../mfc/reference/cdumpcontext-class.md) e [CMemoryState](../mfc/reference/cmemorystate-structure.md) durante lo sviluppo per semplificare il debug, come descritto in [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques). Utilizzare [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) per determinare la classe di qualsiasi oggetto in fase di esecuzione, come descritto nell'articolo [l'accesso a informazioni sulle classi di Run-Time](../mfc/accessing-run-time-class-information.md). Il framework utilizza `CRuntimeClass` per creare dinamicamente gli oggetti di una determinata classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

