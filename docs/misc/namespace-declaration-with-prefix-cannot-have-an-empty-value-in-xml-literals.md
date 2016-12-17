---
title: "La dichiarazione dello spazio dei nomi con prefisso non pu&#242; avere un valore vuoto all&#39;interno di un valore letterale XML | Microsoft Docs"
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
  - "bc31184"
  - "vbc31184"
helpviewer_keywords: 
  - "BC31184"
ms.assetid: dde656b4-df3b-4a2e-8871-4e14832ca778
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La dichiarazione dello spazio dei nomi con prefisso non pu&#242; avere un valore vuoto all&#39;interno di un valore letterale XML
Una dichiarazione dello spazio dei nomi XML in un valore letterale XML non include un valore dello spazio dei nomi. Il codice seguente, ad esempio, causa questo errore:  
  
```vb#  
Dim book = <book xmlns:ns=""/>  
```  
  
 **ID errore:** BC31184  
  
### Per correggere l'errore  
  
-   Includere uno spazio dei nomi valido nella dichiarazione dello spazio dei nomi XML oppure rimuovere la dichiarazione dello spazio dei nomi XML dai valori letterali XML.  
  
     In alternativa, si può usare l'istruzione `Imports` per identificare un prefisso dello spazio dei nomi per lo spazio dei nomi vuoto. Ad esempio:  
  
    ```vb#  
    Imports <xmlns:ns="">  
    ```  
  
## Vedere anche  
 [XML Literals](../Topic/XML%20Literals%20\(Visual%20Basic\).md)   
 [XML](../Topic/XML%20in%20Visual%20Basic.md)   
 [Imports Statement \(XML Namespace\)](../Topic/Imports%20Statement%20\(XML%20Namespace\).md)