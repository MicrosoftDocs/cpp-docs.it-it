---
title: "Non &#232; possibile usare la sintassi dell&#39;inizializzatore di oggetto per inizializzare un&#39;istanza di &#39;Object&#39; | Microsoft Docs"
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
  - "bc30994"
  - "vbc30994"
helpviewer_keywords: 
  - "BC30994"
ms.assetid: 2ef65965-f014-4fc1-8c7d-c603f0a764df
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile usare la sintassi dell&#39;inizializzatore di oggetto per inizializzare un&#39;istanza di &#39;Object&#39;
Non è possibile inizializzare un'istanza di `Object` usando la sintassi dell'inizializzatore di oggetto. Un'istanza di `Object` non ha proprietà o campi a cui assegnare un valore, mentre la sintassi dell'inizializzatore di oggetto richiede almeno una proprietà o un campo.  
  
```  
' Not valid. ' Dim obj1 = New Object With {} ' Dim obj2 = New Object With {.ToString = <some value>}  
```  
  
 **ID errore:** BC30994  
  
### Per correggere l'errore  
  
1.  Dichiarare le istanze di tipo `Object` senza usare un elenco di inizializzatori:  
  
    ```  
    Dim obj3 as Object Dim obj4 as New Object()  
    ```  
  
## Vedere anche  
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [Object Data Type](../Topic/Object%20Data%20Type.md)