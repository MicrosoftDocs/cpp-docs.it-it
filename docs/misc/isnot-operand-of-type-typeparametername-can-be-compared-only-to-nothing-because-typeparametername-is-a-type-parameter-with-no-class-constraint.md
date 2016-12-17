---
title: "&#200; possibile confrontare l&#39;operando &#39;IsNot&#39; del tipo &#39;&lt;nomeparametrotipo&gt;&#39; solo con &#39;Nothing&#39; perch&#233; &#39;&lt;nomeparametrotipo&gt;&#39; &#232; un parametro di tipo senza vincoli di classe | Microsoft Docs"
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
  - "vbc32097"
  - "bc32097"
helpviewer_keywords: 
  - "BC32097"
ms.assetid: 50283a4b-70e3-4e59-9b9b-65e7cacf5ce1
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; possibile confrontare l&#39;operando &#39;IsNot&#39; del tipo &#39;&lt;nomeparametrotipo&gt;&#39; solo con &#39;Nothing&#39; perch&#233; &#39;&lt;nomeparametrotipo&gt;&#39; &#232; un parametro di tipo senza vincoli di classe
Un parametro di tipo viene usato come operando per [IsNot Operator](../Topic/IsNot%20Operator%20\(Visual%20Basic\).md) quando il parametro di tipo viene definito senza la parola chiave [Class \(Visual Basic\)](http://msdn.microsoft.com/it-it/0777c6e6-46bc-451b-ad70-57b49d4ef4f7) o un nome della classe specifico nell'elenco di vincoli.  
  
 `IsNot` confronta due tipi riferimento per determinare se puntano a istanze di oggetti diversi in memoria. Non può accettare un operando che non è un tipo riferimento, a meno che l'altro operando sia [Nothing](../Topic/Nothing%20\(Visual%20Basic\).md).  
  
 **ID errore:** BC32097  
  
### Per correggere l'errore  
  
-   Se è possibile richiedere che l'argomento di tipo fornito a questo parametro di tipo sia sempre un tipo riferimento, aggiungere la parola chiave `Class` o un nome della classe specifico all'elenco di vincoli per il parametro di tipo.  
  
-   Se non è possibile richiedere che l'argomento di tipo fornito a questo parametro di tipo sia sempre un tipo riferimento, rimuoverlo dall'espressione `IsNot`. Non è possibile confrontarlo con altri tipi riferimento con l'operatore `IsNot`.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)   
 [Comparison Operators in Visual Basic](../Topic/Comparison%20Operators%20in%20Visual%20Basic.md)