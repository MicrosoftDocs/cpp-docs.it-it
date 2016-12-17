---
title: "Gestione di finestre figlio MDI | Microsoft Docs"
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
  - "MDICLIENT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestre figlio"
  - "finestre figlio, e finestra MDICLIENT"
  - "finestre cornice [C++], finestre figlio MDI"
  - "MDI [C++], finestre figlio"
  - "MDI [C++], finestre cornice"
  - "finestra MDICLIENT"
  - "finestre [C++], MDI"
ms.assetid: 1828d96e-a561-48ae-a661-ba9701de6bee
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione di finestre figlio MDI
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le finestre principali MDI \(una per applicazione\) contengono una finestra figlio speciale denominata finestra **MDICLIENT**.  La finestra **MDICLIENT** gestisce l'area client della finestra cornice principale e dispone di finestre figlio: le finestre di documento, derivate da `CMDIChildWnd`.  Poiché le finestre di documento sono esse stesse finestre frame \(finestre figlio MDI\), possono anch'esse avere elementi figlio.  In questi casi, la finestra padre gestisce le relative finestre figlio e inoltra alcuni controlli.  
  
 In una finestra frame MDI, la finestra frame gestisce la finestra **MDICLIENT**, riposizionando la raccolta con le barre di controllo.  La finestra **MDICLIENT**, a sua volta, gestisce tutte le finestre frame figlio MDI.  Nella figura seguente è illustrata la relazione tra una finestra frame MDI, la finestra **MDICLIENT** e le relative finestre di documento figlio.  
  
 ![Finestre figlio in una finestra cornice MDI](../mfc/media/vc37gb1.png "vc37GB1")  
Finestre cornice MDI ed elementi figli  
  
 Una finestra frame MDI lavora anche insieme alla finestra figlio MDI corrente, se presente.  La finestra frame MDI delega i messaggi di comando al figlio MDI prima di tentare di gestirli essa stessa.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Creazione di finestre cornice del documento](../mfc/creating-document-frame-windows.md)  
  
-   [Stili Frame\-Window](../mfc/frame-window-styles-cpp.md)  
  
## Vedere anche  
 [Utilizzo di finestre cornice](../mfc/using-frame-windows.md)