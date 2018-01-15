---
title: Operazioni di finestre cornice | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- frame windows [MFC], about frame widows
- frame windows [MFC], tasks
- MFC, frame windows
ms.assetid: 1148a952-6786-4622-b5a8-68a2d7eae584
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f5143bab1ea84392efe1bd5783889c45375365ff
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="what-frame-windows-do"></a>Funzione delle finestre cornice
Oltre a incorniciare semplicemente una visualizzazione, le finestre cornice sono responsabili di numerose attività relative al coordinamento della cornice con la relativa visualizzazione e con l'applicazione. [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) e [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) ereditare [CFrameWnd](../mfc/reference/cframewnd-class.md), pertanto hanno `CFrameWnd` funzionalità, nonché nuove funzionalità che aggiungono. Esempi di finestre figlio includono le visualizzazioni, i controlli quali i pulsanti e le caselle di riepilogo, e le barre di controllo, incluse le barre degli strumenti, le barre di stato e le barre della finestra di dialogo.  
  
 La finestra cornice è responsabile della gestione del layout delle finestre figlio. Nel framework MFC, una finestra cornice posiziona le barre di controllo, le visualizzazioni e le altre finestre figlio nella relativa area client.  
  
 La finestra cornice inoltra i comandi alle relative visualizzazioni e può rispondere a messaggi di notifica da finestre di controllo.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Barre di controllo (modalità di adattamento nella finestra cornice)](../mfc/control-bars.md)  
  
-   [Gestione dei menu, barre di controllo e tasti di scelta rapida (modalità di adattamento nella finestra cornice)](../mfc/managing-menus-control-bars-and-accelerators.md)  
  
-   [Routing di comandi (dalla finestra cornice alla relativa visualizzazione e ad altre destinazioni comando)](../mfc/command-routing.md)  
  
-   [Architettura documento//View](../mfc/document-view-architecture.md)  
  
-   [Barre di controllo](../mfc/control-bars.md)  
  
-   [Controlli](../mfc/controls-mfc.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre cornice](../mfc/frame-windows.md)

