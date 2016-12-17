---
title: "Non &#232; possibile inizializzare il membro &#39;&lt;nomemembro&gt;&#39; in un&#39;espressione dell&#39;inizializzatore di oggetti perch&#233; &#232; condiviso | Microsoft Docs"
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
  - "bc30991"
  - "vbc30991"
helpviewer_keywords: 
  - "BC30991"
ms.assetid: 47e832b4-47e3-426e-b88c-5d5568102fde
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile inizializzare il membro &#39;&lt;nomemembro&gt;&#39; in un&#39;espressione dell&#39;inizializzatore di oggetti perch&#233; &#232; condiviso
Gli inizializzatori di oggetto non possono essere usati per inizializzare un membro di una classe che è dichiarato come condiviso. Per altre informazioni, vedere [Shared](../Topic/Shared%20\(Visual%20Basic\).md).  
  
 **ID errore:** BC30991  
  
### Per correggere l'errore  
  
1.  Esaminare la definizione di classe per determinare quale membro è condiviso.  
  
2.  Eliminare l'inizializzazione per il membro dall'elenco di inizializzatori di oggetto.  
  
## Esempio  
 Nell'esempio seguente `totalCustomers` è un membro condiviso.  
  
```  
Public Class Customer Public Shared totalCustomers As Integer ' Other declarations and method definitions. End Class  
```  
  
 Dato che `totalCustomers` è condiviso, se si tenta di impostarne il valore iniziale in un elenco di inizializzatori di oggetto viene generato questo errore.  
  
```  
' This declaration is not valid. ' Dim cust As New Customer With { .Name = "Coho Winery", _ '                                 .totalCustomers = 21 }  
```  
  
## Vedere anche  
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [Shared](../Topic/Shared%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Membri condivisi in Visual Basic](http://msdn.microsoft.com/it-it/dbc3783f-83a2-4225-995d-c2d6d025663d)