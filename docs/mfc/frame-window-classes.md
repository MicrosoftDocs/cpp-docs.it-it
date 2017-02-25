---
title: "Classi Frame-Window | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi [C++], finestra"
  - "finestre cornice documento, classi"
  - "classi finestra cornice"
  - "classi finestra cornice, informazioni sulle classi finestra cornice"
  - "MDI [C++], finestre cornice"
  - "MFC [C++], finestre cornice"
  - "Single Document Interface (SDI), finestre cornice"
  - "classi di finestra, cornice"
  - "finestre [C++], MDI"
ms.assetid: c27e43a7-8ad0-4759-b1b7-43f4725f4132
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classi Frame-Window
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ogni applicazione dispone di una "propria finestra cornice principale," una finestra del desktop che normalmente ha il nome dell'applicazione nella barra del titolo.  Ogni documento in genere "presenta una finestra cornice di documento." Una finestra cornice di documento contiene almeno una visualizzazione, che contiene i dati del documento.  
  
## Nelle finestre SDI e nelle applicazioni MDI  
 Per un'applicazione SDI, esiste una finestra cornice derivata dalla classe [CFrameWnd](../mfc/reference/cframewnd-class.md).  Questa finestra è sia la propria finestra cornice principale dalla finestra cornice di documento.  Per un'applicazione MDI, la finestra cornice principale è derivata dalla classe [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) e le finestre di documento, che sono finestre figlio MDI, derivano dalla classe [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md).  
  
## Utilizzare la classe della finestra cornice, o derivare da?  
 Queste classi forniscono la maggior parte delle funzionalità della finestra cornice necessari per le applicazioni.  In condizioni normali, il comportamento predefinito e l'aspetto che forniscono indicheranno le proprie esigenze.  Se è necessaria la funzionalità aggiuntiva, derivare da queste classi.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Classi della finestra cornice creato dalla procedura guidata applicazione](../mfc/frame-window-classes-created-by-the-application-wizard.md)  
  
-   [Stili finestra cornice](../mfc/frame-window-styles-cpp.md)  
  
-   [Modificando gli stili di una finestra ha creato da MFC](../mfc/changing-the-styles-of-a-window-created-by-mfc.md)  
  
## Vedere anche  
 [Finestre cornice](../mfc/frame-windows.md)