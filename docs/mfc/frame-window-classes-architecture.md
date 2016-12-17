---
title: "Classi di finestre cornice (architettura) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.frame"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi finestra cornice, architettura documento/visualizzazione"
ms.assetid: 5da01fb4-f531-46cc-914f-e422e4f07f5d
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi di finestre cornice (architettura)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'architettura documento\/visualizzazione, le finestre sono finestre che contengono una finestra di visualizzazione.  Supportano inoltre di barre di controllo associato a tali righe.  
  
 Nelle applicazioni di multiple\-document interface \(MDI\), la finestra principale è derivata da `CMDIFrameWnd`.  Contiene indirettamente i frame di documenti, oggetti di `CMDIChildWnd`.  `CMDIChildWnd` oggetti, a sua volta, contiene le visualizzazioni dei documenti.  
  
 Nelle applicazioni interface \(SDI\) a documento singolo, la finestra principale, derivata da `CFrameWnd`, contiene la visualizzazione del documento corrente.  
  
 [CFrameWnd](../mfc/reference/cframewnd-class.md)  
 La classe base della finestra cornice principale di un'applicazione SDI.  Anche la classe base per tutte le altre finestra cornice classe.  
  
 [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md)  
 La classe base della finestra cornice principale di un'applicazione MDI.  
  
 [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md)  
 La classe base per le finestre del documento di un'applicazione MDI.  
  
 [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md)  
 Fornisce la finestra cornice per una visualizzazione quando un documento server in corso la modifica sul posto.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)