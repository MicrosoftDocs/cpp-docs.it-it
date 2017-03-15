---
title: "Funzioni membro pulsante di selezione | Microsoft Docs"
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
  - "CSpinButtonCtrl (classe), metodi"
  - "controllo pulsante di selezione, metodi"
ms.assetid: a08a26fd-b803-4cbe-a509-395fa357d057
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Funzioni membro pulsante di selezione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esistono numerose funzioni membro disponibili per il controllo casella di selezione \([CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)\).  Utilizzare queste funzioni per modificare gli attributi del pulsante di selezione.  
  
-   **Accelerazione** È possibile modificare la frequenza con cui la posizione modifica quando l'utente tiene premuto il pulsante freccia.  Per funzionare con accelerazione, utilizzare le funzioni membro di [GetAccel](../Topic/CSpinButtonCtrl::GetAccel.md) e di [SetAccel](../Topic/CSpinButtonCtrl::SetAccel.md).  
  
-   **Base** È possibile modificare la base \(10 o 16\) utilizzato per visualizzare la posizione nella barra del titolo della finestra degli utenti.  Per utilizzare la base, utilizzare le funzioni membro di [SetBase](../Topic/CSpinButtonCtrl::SetBase.md) e di [GetBase](../Topic/CSpinButtonCtrl::GetBase.md).  
  
-   **Finestra Buddy** È possibile impostare in modo dinamico la finestra degli utenti.  Per eseguire una query o modificate che il controllo sia la finestra degli utenti, utilizzare le funzioni membro di [SetBuddy](../Topic/CSpinButtonCtrl::SetBuddy.md) e di [GetBuddy](../Topic/CSpinButtonCtrl::GetBuddy.md).  
  
-   **Posizione** È possibile eseguire una query e modificare il percorso.  Per utilizzare direttamente la posizione, utilizzare le funzioni membro di [SetPos](../Topic/CSpinButtonCtrl::SetPos.md) e di [GetPos](../Topic/CSpinButtonCtrl::GetPos.md).  Poiché la barra del titolo del controllo degli utenti possono modificare \(ad esempio, nel caso in cui il buddy sia un controllo di modifica\), `GetPos` recupera la didascalia corrente e ne modifica il percorso di conseguenza.  
  
-   **Intervallo** È possibile modificare le posizioni minime e massime per il pulsante di selezione.  Per impostazione predefinita, il valore massimo è impostato su 0 e il minimo è impostato su 100.  Poiché il massimo predefinito è inferiore al minimo predefinito, le azioni dei pulsanti freccia è contatore\- intuitive.  In genere, impostato l'intervallo mediante la funzione membro di [SetRange](../Topic/CSpinButtonCtrl::SetRange.md).  Per eseguire una query sull'utilizzo [GetRange](../Topic/CSpinButtonCtrl::GetRange.md)dell'intervallo.  
  
## Vedere anche  
 [Utilizzo di CSpinButtonCtrl](../mfc/using-cspinbuttonctrl.md)   
 [Controlli](../mfc/controls-mfc.md)