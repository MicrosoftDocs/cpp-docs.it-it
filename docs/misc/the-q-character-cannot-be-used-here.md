---
title: "In questo punto non &#232; possibile usare il carattere &#39;?&#39; | Microsoft Docs"
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
  - "bc36637"
  - "vbc36637"
helpviewer_keywords: 
  - "BC36637"
ms.assetid: a54c46e7-8fd8-4941-9fce-72f2b41b5e24
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# In questo punto non &#232; possibile usare il carattere &#39;?&#39;
Il carattere '?' può essere usato per specificare che un tipo valore o una struttura è nullable. L'uso in altre circostanze è limitato. Il codice seguente, ad esempio, causa questa eccezione.  
  
```  
' Not valid. ' #Const found = True?  
```  
  
 **ID errore:** BC36637  
  
### Per correggere l'errore  
  
-   Rimuovere il carattere '?' dalla dichiarazione.  
  
## Vedere anche  
 [Nullable Value Types](../Topic/Nullable%20Value%20Types%20\(Visual%20Basic\).md)