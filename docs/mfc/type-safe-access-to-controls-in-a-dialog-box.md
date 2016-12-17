---
title: "Accesso indipendente dai tipi ai controlli in una finestra di dialogo | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli comuni [C++], in finestre di dialogo"
  - "controlli [MFC], accesso nelle finestre di dialogo"
  - "finestre di dialogo [C++], accesso ai controlli indipendente dai tipi"
  - "MFC (finestre di dialogo), accesso ai controlli indipendente dai tipi"
  - "accesso sicuro ai controllo di una finestra di dialogo"
  - "accesso indipendente dai tipi ai controlli in una finestra di dialogo"
  - "controlli comuni di Windows [C++], in finestre di dialogo"
ms.assetid: 67021025-dd93-4d6a-8bed-a1348fe50685
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Accesso indipendente dai tipi ai controlli in una finestra di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I controlli in una finestra di dialogo possono utilizzare le interfacce delle classi di controlli MFC, ad esempio `CListBox` e `CEdit`.  Puoi creare un oggetto controllo e allegarlo a un controllo finestra di dialogo.  Puoi quindi accedere al controllo attraverso la relativa interfaccia di classe, chiamando le funzioni membro per operare sul controllo.  I metodi descritti qui sono progettati per fornire accesso indipendente dai tipi a un controllo.  Ciò è particolarmente utile per controlli come caselle di modifica e di riepilogo.  
  
 Sono disponibili due approcci per stabilire una connessione tra un controllo in una finestra di dialogo e una variabile membro di controllo C\+\+ in una classe derivata da `CDialog`:  
  
-   [Senza creazioni guidate codice](../mfc/type-safe-access-to-controls-without-code-wizards.md)  
  
-   [Con creazioni guidate codice](../mfc/type-safe-access-to-controls-with-code-wizards.md)  
  
## Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)