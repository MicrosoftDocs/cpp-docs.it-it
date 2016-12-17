---
title: "L&#39;oggetto a cui si fa riferimento ha valore &#39;Nothing&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30760"
  - "vbc30760"
helpviewer_keywords: 
  - "BC30760"
ms.assetid: 7e792fd8-2880-402b-a908-c89e5b028300
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;oggetto a cui si fa riferimento ha valore &#39;Nothing&#39;
L'oggetto usato ha valore `Nothing`, mentre è previsto un valore utilizzabile.`Nothing` indica che un oggetto non ha alcun valore. All'oggetto potrebbe non essere stato assegnato alcun valore o potrebbe essere stato assegnato il valore `Nothing`.  
  
 **ID errore:** BC30760  
  
### Per correggere l'errore  
  
1.  Controllare l'oggetto per verificare che sia stato dichiarato nell'ambito della routine in cui si è verificato l'errore.  
  
2.  Verificare che il valore dell'oggetto sia stato impostato.  
  
    > [!NOTE]
    >  Il valore `Nothing` non corrisponde a zero o a una stringa vuota. Per verificare se un oggetto contiene il valore `IsNothing` è possibile usare `Nothing`.  
  
## Vedere anche  
 [Nothing](../Topic/Nothing%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Funzione IsNothing](http://msdn.microsoft.com/it-it/5b2a4626-e6a9-49d1-b9b1-fcc6a1302319)