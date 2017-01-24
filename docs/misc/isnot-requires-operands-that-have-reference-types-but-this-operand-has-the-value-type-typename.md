---
title: "Gli operandi di &#39;IsNot&#39; devono avere tipi riferimento, ma questo operando ha tipo valore &#39;&lt;nometipo&gt;&#39;. | Microsoft Docs"
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
  - "bc31419"
  - "vbc31419"
helpviewer_keywords: 
  - "BC31419"
ms.assetid: c44d2936-8c07-443a-b320-ac2bfbc1e9ec
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli operandi di &#39;IsNot&#39; devono avere tipi riferimento, ma questo operando ha tipo valore &#39;&lt;nometipo&gt;&#39;.
Un'espressione usa l'[IsNot Operator](../Topic/IsNot%20Operator%20\(Visual%20Basic\).md) con almeno un operando del tipo valore.  
  
 L'operatore `IsNot` consente di determinare se due riferimenti agli oggetti fanno riferimento a oggetti diversi. Confronta i valori del puntatore dei tipi riferimento ed è privo di significato con i tipi valore.  
  
 **ID errore:** BC31419  
  
### Per correggere l'errore  
  
-   Se si ha l'intenzione di confrontare i valori di due tipi di valori, usare l'operatore di confronto `=` o `<>`.  
  
-   Se si ha l'intenzione di confrontare i puntatori di due tipi riferimento, accertarsi di usare i riferimenti agli oggetti per entrambi gli operandi. È possibile usare le variabili o gli elementi di riferimento, quali la parola chiave [Me](http://msdn.microsoft.com/it-it/a65973c7-cf06-4547-9b25-9fba885525c2) che si comportano come variabili di riferimento.  
  
## Vedere anche  
 [Comparison Operators in Visual Basic](../Topic/Comparison%20Operators%20in%20Visual%20Basic.md)   
 [How to: Test Whether Two Objects Are the Same](../Topic/How%20to:%20Test%20Whether%20Two%20Objects%20Are%20the%20Same%20\(Visual%20Basic\).md)