---
title: "Accesso indipendente dai tipi ai controlli senza creazioni guidate codice | Microsoft Docs"
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
  - "controlli delle finestre di dialogo, accesso"
  - "finestre di dialogo, accesso ai controlli"
ms.assetid: 325b4927-d49b-42b4-8e0b-fc84f31fb059
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Accesso indipendente dai tipi ai controlli senza creazioni guidate codice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il primo approccio alla creazione di un accesso indipendente dai tipi ai controlli utilizza una funzione membro inline per eseguire il cast del tipo restituito dalla funzione membro della classe `CWnd` `GetDlgItem` per il tipo di controllo C\+\+ appropriato, come nel seguente esempio:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#50](../mfc/codesnippet/CPP/type-safe-access-to-controls-without-code-wizards_1.cpp)]  
  
 È quindi possibile utilizzare questa funzione membro per accedere al controllo in modo indipendente dai tipi con codice simile al seguente:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#51](../mfc/codesnippet/CPP/type-safe-access-to-controls-without-code-wizards_2.cpp)]  
  
## Vedere anche  
 [Accesso indipendente dai tipi ai controlli in una finestra di dialogo](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)   
 [Accesso indipendente dai tipi a controlli con creazioni guidate codice](../mfc/type-safe-access-to-controls-with-code-wizards.md)