---
title: "Il tipo di variabile della risorsa &#39;Using&#39; non pu&#242; essere un tipo matrice | Microsoft Docs"
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
  - "vbc36012"
  - "bc36012"
helpviewer_keywords: 
  - "BC36012"
ms.assetid: f98c54b0-6ede-48b6-aa31-438664c219f3
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo di variabile della risorsa &#39;Using&#39; non pu&#242; essere un tipo matrice
Un'istruzione `Using` specifica una variabile di matrice per una risorsa.  
  
 La classe <xref:System.Array> non implementa l'interfaccia <xref:System.IDisposable>, quindi il blocco `Using` non può chiamare il metodo <xref:System.IDisposable.Dispose%2A> su una risorsa di matrice.  
  
 **ID errore:** BC36012  
  
### Per correggere l'errore  
  
-   Usare un tipo diverso di risorsa di sistema nel blocco `Using`.  
  
## Vedere anche  
 [Using Statement](../Topic/Using%20Statement%20\(Visual%20Basic\).md)   
 [How to: Dispose of a System Resource](../Topic/How%20to:%20Dispose%20of%20a%20System%20Resource%20\(Visual%20Basic\).md)   
 [NOTINBUILD Cenni preliminari sulle matrici in Visual Basic](http://msdn.microsoft.com/it-it/ca50e2f2-b4d2-4c57-9169-9abbcc3392d8)