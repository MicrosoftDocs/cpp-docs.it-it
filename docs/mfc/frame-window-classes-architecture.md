---
title: Frame di classi di finestra (architettura) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.classes.frame
dev_langs: C++
helpviewer_keywords: frame window classes [MFC], document/view architecture
ms.assetid: 5da01fb4-f531-46cc-914f-e422e4f07f5d
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f1caf8e4b93e18675b810ced962df6e8adcf521a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="frame-window-classes-architecture"></a>Classi di finestre cornice (architettura)
Architettura documento/visualizzazione, finestre cornice di finestre che contengono una finestra di visualizzazione. Supportano inoltre controllare che le barre a esse associate.  
  
 In applicazioni di multiple document interface (MDI), la finestra principale è derivata da `CMDIFrameWnd`. Indirettamente contiene frame dei documenti, ossia `CMDIChildWnd` oggetti. Il `CMDIChildWnd` oggetti, a sua volta, contengono le visualizzazioni dei documenti.  
  
 In applicazioni di single document interface (SDI), la finestra principale, derivata da `CFrameWnd`, include la visualizzazione del documento corrente.  
  
 [CFrameWnd](../mfc/reference/cframewnd-class.md)  
 Classe di base per la finestra cornice principale di un'applicazione SDI. Anche la classe base per tutte le altre classi finestra cornice.  
  
 [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md)  
 Classe di base per la finestra cornice principale di un'applicazione MDI.  
  
 [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md)  
 La classe base per finestre cornice del documento di un'applicazione MDI.  
  
 [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md)  
 Fornisce la finestra cornice per una visualizzazione durante la modifica sul posto di un documento server.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

