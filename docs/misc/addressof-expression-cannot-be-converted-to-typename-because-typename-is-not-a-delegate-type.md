---
title: "Non &#232; possibile convertire l&#39;espressione &#39;AddressOf&#39; in &#39;&lt;nometipo&gt;&#39; perch&#233; &#39;&lt;nometipo&gt;&#39; non &#232; un tipo delegato | Microsoft Docs"
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
  - "vbc30581"
  - "bc30581"
helpviewer_keywords: 
  - "BC30581"
ms.assetid: 5db7589a-5456-4b3a-9d6b-93d9157f0484
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile convertire l&#39;espressione &#39;AddressOf&#39; in &#39;&lt;nometipo&gt;&#39; perch&#233; &#39;&lt;nometipo&gt;&#39; non &#232; un tipo delegato
Un'istruzione tenta di convertire un'espressione `AddressOf` in un tipo che non è un tipo delegato.  
  
 L'operatore `AddressOf` crea un'istanza di delegato di routine che fa riferimento a una routine specifica.`AddressOf` può essere usato come operando di un costruttore di delegato o può essere usato in un contesto in cui il tipo del delegato può essere determinato dal compilatore.  
  
 **ID errore:** BC30581  
  
### Per correggere l'errore  
  
-   Modificare il tipo di destinazione in un tipo delegato.  
  
## Vedere anche  
 [AddressOf Operator](../Topic/AddressOf%20Operator%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Delegati e operatore AddressOf](http://msdn.microsoft.com/it-it/7b2ed932-8598-4355-b2f7-5cedb23ee86f)