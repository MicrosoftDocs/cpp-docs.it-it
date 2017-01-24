---
title: "Non &#232; possibile convertire l&#39;espressione &#39;AddressOf&#39; in &#39;&lt;tiponome&gt;&#39; perch&#233; il tipo &#39;&lt;tiponome&gt;&#39; &#232; dichiarato come &#39;MustInherit&#39; e non pu&#242; essere creato | Microsoft Docs"
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
  - "vbc30939"
  - "bc30939"
helpviewer_keywords: 
  - "BC30939"
ms.assetid: e8edef15-0df5-46d7-aba6-89e26a2aa506
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile convertire l&#39;espressione &#39;AddressOf&#39; in &#39;&lt;tiponome&gt;&#39; perch&#233; il tipo &#39;&lt;tiponome&gt;&#39; &#232; dichiarato come &#39;MustInherit&#39; e non pu&#242; essere creato
Un'istruzione tenta di convertire un'espressione `AddressOf` in un tipo che può essere solo una classe base e non può essere usato per creare un'istanza.  
  
 L'operatore `AddressOf` crea un'istanza di delegato di routine che fa riferimento a una routine specifica.  
  
 **ID errore:** BC30939  
  
### Per correggere l'errore  
  
-   Assegnare l'espressione `AddressOf` a un tipo delegato specifico.  
  
## Vedere anche  
 [AddressOf Operator](../Topic/AddressOf%20Operator%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Delegati e operatore AddressOf](http://msdn.microsoft.com/it-it/7b2ed932-8598-4355-b2f7-5cedb23ee86f)   
 [Delegates](../Topic/Delegates%20\(Visual%20Basic\).md)