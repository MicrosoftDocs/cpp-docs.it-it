---
title: "Classi di finestre cornice (Windows) | Microsoft Docs"
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
  - "classi finestra cornice, riferimento"
ms.assetid: 6342ec5f-f922-4da8-a78e-2f5f994c7142
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi di finestre cornice (Windows)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le finestre sono finestre che incorniciano un'applicazione o una parte di un'applicazione.  Le finestre sono solitamente presenti altre finestre, ad esempio le visualizzazioni, le barre degli strumenti e barre di stato.  Nel caso di `CMDIFrameWnd`, possono contenere indirettamente oggetti di `CMDIChildWnd`.  
  
 [CFrameWnd](../mfc/reference/cframewnd-class.md)  
 La classe base della finestra cornice principale di un'applicazione SDI.  Anche la classe base per tutte le altre finestra cornice classe.  
  
 [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md)  
 La classe base della finestra cornice principale di un'applicazione MDI.  
  
 [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md)  
 La classe base per le finestre del documento di un'applicazione MDI.  
  
 [CMiniFrameWnd](../mfc/reference/cminiframewnd-class.md)  
 Una finestra cornice dell'altezza in genere vista intorno alle barre degli strumenti mobili.  
  
 [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md)  
 Fornisce la finestra cornice per una visualizzazione quando un documento server in corso la modifica sul posto.  
  
## Classe correlata  
 La classe `CMenu` fornisce un'interfaccia tramite il quale accedere ai menu dell'applicazione.  È utile per modificare i menu dinamico in fase di esecuzione; ad esempio in caso di aggiunta o eliminazione delle voci di menu in base al contesto.  Sebbene i menu sono più spesso utilizzati con le finestre cornici, possono essere utilizzati con le finestre di dialogo e altre finestre del nonchild.  
  
 [CMenu](../mfc/reference/cmenu-class.md)  
 Incapsula gli handle di `HMENU` alla barra dei menu e i menu di scelta rapida dell'applicazione.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)