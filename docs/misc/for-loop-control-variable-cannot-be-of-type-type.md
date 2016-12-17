---
title: "La variabile di controllo del ciclo &#39;For&#39; non pu&#242; essere di tipo &#39;&lt;tipo&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30337"
  - "bc30337"
helpviewer_keywords: 
  - "BC30337"
ms.assetid: 988bba15-e9a2-4045-98a0-7f53c8b2c3e3
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La variabile di controllo del ciclo &#39;For&#39; non pu&#242; essere di tipo &#39;&lt;tipo&gt;&#39;
Si è provato a usare una variabile di controllo del ciclo di tipo non valido. All'inizio di un ciclo `For`, il punto iniziale, il punto finale e il valore dell'incremento vengono valutati in ordine testuale. Tutte e tre le espressioni devono essere convertibili in modo implicito nel tipo della variabile. Se la variabile del ciclo `For` è di tipo `Object`, in fase di esecuzione almeno una delle espressioni deve essere di tipo numerico e a tutte e tre deve poter essere assegnato il tipo numerico più ampio.  
  
 **ID errore:** BC30337  
  
### Per correggere l'errore  
  
-   Verificare il tipo di variabile di controllo del ciclo e cambiarlo con uno valido.  
  
## Vedere anche  
 [For \(Visual Basic\)](http://msdn.microsoft.com/it-it/c470a263-9b49-4308-8fd6-8592b84a7980)   
 [Do...Loop Statement](../Topic/Do...Loop%20Statement%20\(Visual%20Basic\).md)   
 [Istruzione For...Next](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)