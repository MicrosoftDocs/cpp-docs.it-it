---
title: "Override di una funzione virtual (Visual C++) | Microsoft Docs"
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
  - "vc.codewiz.virtualfunc.override"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi base, override di funzioni virtual definite"
  - "Proprietà (finestra), override di funzioni virtual"
  - "funzioni virtual, override"
ms.assetid: 2d8c76f2-7a6b-4c9c-8de5-4282ce7755b6
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Override di una funzione virtual (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile eseguire l'override delle funzioni virtual definite in una classe base utilizzando la [finestra Proprietà](../Topic/Properties%20Window.md) di Visual Studio.  
  
### Per eseguire l'override di una funzione virtual nella finestra Proprietà  
  
1.  In Visualizzazione classi fare clic sulla classe.  
  
2.  Nella finestra Proprietà fare clic sul pulsante **Override**.  
  
    > [!NOTE]
    >  Il pulsante **Override** è disponile quando si seleziona il nome della classe in Visualizzazione classi o quando si fa clic all'interno della finestra del codice sorgente.  
  
     Nella colonna sinistra sono elencate le funzioni virtual.  Se il nome di una funzione virtual viene visualizzato anche nella colonna destra, significa che un override è già stato implementato.  
  
3.  Se la funzione non ha alcun precedente override, fare clic sulla cella nella colonna destra della finestra Proprietà per visualizzare il nome suggerito dell'override della funzione nella forma \<add\>*NomeFunz*.  
  
4.  Fare clic sul nome suggerito per aggiungere il codice stub per la funzione.  
  
5.  Per modificare una funzione in override, fare doppio clic sul relativo nome in Visualizzazione classi e modificare il codice nella finestra.  
  
 Per rimuovere un override, fare clic sul nome della funzione in override nella colonna destra e selezionare \<delete\>*NomeFunz*.  Il codice della funzione verrà impostato come commento.  
  
## Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)   
 [Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura delle classi](../ide/navigating-the-class-structure-visual-cpp.md)