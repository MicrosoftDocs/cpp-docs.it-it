---
title: Gestione di messaggi riprodotti | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- message handling [MFC], reflected messages
- reflected messages, handling
ms.assetid: 147a4e0c-51cc-4447-a8e1-c28b4cece578
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 05b5f62169d2b65010ec75ab8c8b5c30959b77b2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="handling-reflected-messages"></a>Gestione di messaggi riprodotti
Messaggio reflection consente di gestire i messaggi per un controllo, ad esempio `WM_CTLCOLOR`, **WM_COMMAND**, e **WM_NOTIFY**, all'interno del controllo stesso. Questo rende il controllo più autonomo e portatile. Il meccanismo funziona con i controlli comuni di Windows, nonché con i controlli ActiveX, precedentemente denominati controlli OLE.  
  
 La reflection di messaggio consente di riutilizzare più facilmente le classi derivate da `CWnd`. Reflection di messaggio funziona tramite [CWnd:: OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify), utilizzando speciali **ON_XXX_REFLECT** voci della mappa messaggi: ad esempio, **ON_CTLCOLOR_REFLECT** e **ON_CONTROL_REFLECT**. [Nota tecnica 62](../mfc/tn062-message-reflection-for-windows-controls.md) spiega la reflection di messaggio in modo più dettagliato.  
  
## <a name="what-do-you-want-to-do"></a>Ciò che si desidera eseguire  
  
-   [Altre informazioni sulla reflection di messaggio](../mfc/tn062-message-reflection-for-windows-controls.md)  
  
-   [Implementare la reflection di messaggio per un controllo comune](../mfc/tn062-message-reflection-for-windows-controls.md)  
  
-   [Implementare la reflection di messaggio per un controllo ActiveX](../mfc/mfc-activex-controls-subclassing-a-windows-control.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)
