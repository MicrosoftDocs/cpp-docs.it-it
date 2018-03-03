---
title: Gestione di messaggi riprodotti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- message handling [MFC], reflected messages
- reflected messages, handling
ms.assetid: 147a4e0c-51cc-4447-a8e1-c28b4cece578
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0c3576e93ce7ce2d972e78433065feaf06f3ae15
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="handling-reflected-messages"></a>Gestione di messaggi riprodotti
Messaggio reflection consente di gestire i messaggi per un controllo, ad esempio `WM_CTLCOLOR`, **WM_COMMAND**, e **WM_NOTIFY**, all'interno del controllo stesso. Questo rende il controllo più autonomo e portatile. Il meccanismo funziona con i controlli comuni di Windows, nonché con i controlli ActiveX, precedentemente denominati controlli OLE.  
  
 La reflection di messaggio consente di riutilizzare più facilmente le classi derivate da `CWnd`. Reflection di messaggio funziona tramite [CWnd:: OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify), utilizzando speciali **ON_XXX_REFLECT** voci della mappa messaggi: ad esempio, **ON_CTLCOLOR_REFLECT** e **ON_CONTROL_REFLECT**. [Nota tecnica 62](../mfc/tn062-message-reflection-for-windows-controls.md) illustra la reflection di messaggio in modo più dettagliato.  
  
## <a name="what-do-you-want-to-do"></a>Ciò che si desidera eseguire  
  
-   [Ulteriori informazioni sulla reflection di messaggio](../mfc/tn062-message-reflection-for-windows-controls.md)  
  
-   [Implementare la reflection di messaggio per un controllo comune](../mfc/tn062-message-reflection-for-windows-controls.md)  
  
-   [Implementare la reflection di messaggio per un controllo ActiveX](../mfc/mfc-activex-controls-subclassing-a-windows-control.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)
