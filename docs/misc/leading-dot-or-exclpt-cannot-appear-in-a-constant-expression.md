---
title: "Il carattere &#39;.&#39; o &#39;!&#39; iniziale non pu&#242; trovarsi in un&#39;espressione costante | Microsoft Docs"
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
  - "vbc30995"
  - "bc30995"
helpviewer_keywords: 
  - "BC30995"
ms.assetid: eed62684-66db-4fdb-9da7-f1407a55b172
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il carattere &#39;.&#39; o &#39;!&#39; iniziale non pu&#242; trovarsi in un&#39;espressione costante
L'accesso ai membri \(.\) e l'accesso ai membri dizionario \(\!\) richiedono un'espressione che specifica l'elemento che contiene il membro nella maggior parte dei casi, incluse le espressioni costanti. La dichiarazione seguente non è valida.  
  
```  
' Not valid. Const c As String = .name  
```  
  
 **ID errore:** BC30995  
  
### Per correggere l'errore  
  
-   Specificare l'istanza che contiene il membro a cui si vuole accedere.  
  
## Vedere anche  
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [Procedura: Dichiarare un'istanza di un tipo anonimo \(Visual Basic\)](http://msdn.microsoft.com/it-it/119f616c-9bcd-4731-ac00-4285be5959f7)   
 [Const Statement](../Topic/Const%20Statement%20\(Visual%20Basic\).md)