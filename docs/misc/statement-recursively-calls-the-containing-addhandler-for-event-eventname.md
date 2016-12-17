---
title: "L&#39;istruzione chiama in modo ricorsivo il metodo &#39;AddHandler&#39; che la contiene per l&#39;evento &#39;&lt;nomeevento&gt;&#39; | Microsoft Docs"
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
  - "bc41998"
  - "vbc41998"
helpviewer_keywords: 
  - "BC41998"
ms.assetid: 4375b191-fbd9-4e93-b9bb-9159d533ddf6
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;istruzione chiama in modo ricorsivo il metodo &#39;AddHandler&#39; che la contiene per l&#39;evento &#39;&lt;nomeevento&gt;&#39;
Le istruzioni nella funzione di accesso `AddHandler` di una definizione di evento non deve fare direttamente riferimento all'evento.  
  
 L'approccio consigliato consiste nell'archiviare l'elenco dei gestori dell'evento come campo privato nella classe, nella struttura o nel modulo che definisce l'evento. Per altre informazioni, vedere [How to: Declare Custom Events To Avoid Blocking](../Topic/How%20to:%20Declare%20Custom%20Events%20To%20Avoid%20Blocking%20\(Visual%20Basic\).md) e [How to: Declare Custom Events To Conserve Memory](../Topic/How%20to:%20Declare%20Custom%20Events%20To%20Conserve%20Memory%20\(Visual%20Basic\).md).  
  
 **ID errore:** BC41998  
  
### Per correggere l'errore  
  
-   Riscrivere la definizione di evento per evitare la ricorsione.  
  
## Vedere anche  
 [AddHandler \- eliminazione](http://msdn.microsoft.com/it-it/fc464cf8-582c-48a6-a9c2-185c4c3d5ff8)   
 [Event Statement](../Topic/Event%20Statement.md)   
 [How to: Declare Custom Events To Avoid Blocking](../Topic/How%20to:%20Declare%20Custom%20Events%20To%20Avoid%20Blocking%20\(Visual%20Basic\).md)   
 [How to: Declare Custom Events To Conserve Memory](../Topic/How%20to:%20Declare%20Custom%20Events%20To%20Conserve%20Memory%20\(Visual%20Basic\).md)