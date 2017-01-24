---
title: "&#39;MyBase&#39; deve essere seguita da &#39;.&#39; e da un identificatore | Microsoft Docs"
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
  - "bc32027"
  - "vbc32027"
helpviewer_keywords: 
  - "BC32027"
ms.assetid: 39e5512c-ef1e-46a3-a96c-277ea24bfee2
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;MyBase&#39; deve essere seguita da &#39;.&#39; e da un identificatore
`MyBase` non è una vera variabile oggetto e non può essere usata da sola. Si usa solo per accedere a un membro della classe base dell'istanza corrente.  
  
 **ID errore:** BC32027  
  
### Per correggere l'errore  
  
-   Se si intende usare l'accesso ai membri, specificare l'operatore di accesso ai membri \(.\) e un membro della classe base dopo `MyBase`.  
  
-   Se non si intende usare l'accesso ai membri, dichiarare e inizializzare un'istanza della classe base oppure rimuovere il riferimento a `MyBase`.  
  
## Vedere anche  
 [MyBase \- eliminazione](http://msdn.microsoft.com/it-it/52491d06-6451-4f6f-9aa6-8fab59bbc2b9)   
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)