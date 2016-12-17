---
title: "Option Strict On non consente conversioni implicite da &#39;&lt;tipo1&gt;&#39; a &#39;&lt;tipo2&gt;. Il tipo raccolta di Visual Basic 6.0 non &#232; compatibile con il tipo raccolta di .NET Framework | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30753"
  - "bc30753"
helpviewer_keywords: 
  - "BC30753"
ms.assetid: 7e1bb22e-a507-483e-bfd6-f3a43e24a232
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On non consente conversioni implicite da &#39;&lt;tipo1&gt;&#39; a &#39;&lt;tipo2&gt;. Il tipo raccolta di Visual Basic 6.0 non &#232; compatibile con il tipo raccolta di .NET Framework
`Option Strict On` non consente conversioni implicite da '`<type1>`' a '`<type2>`'. Il tipo raccolta di Visual Basic 6.0 non è compatibile con il tipo raccolta di [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)].  
  
 L'oggetto raccolta usato in Visual Basic 6.0 è diverso da quello usato in Visual Studio [!INCLUDE[vs_current_long](../misc/includes/vs_current_long_md.md)].  
  
 **ID errore:** BC30753  
  
### Per correggere l'errore  
  
-   Convertire gli oggetti raccolta in modo esplicito usando una delle parole chiave di conversione del tipo. Le parole chiave [Funzione CType](../Topic/CType%20Function%20\(Visual%20Basic\).md) e [DirectCast Operator](../Topic/DirectCast%20Operator%20\(Visual%20Basic\).md) generano un'eccezione in fase di esecuzione se la conversione non riesce. La parola chiave [TryCast Operator](../Topic/TryCast%20Operator%20\(Visual%20Basic\).md) restituisce [Nothing](../Topic/Nothing%20\(Visual%20Basic\).md) se la conversione non riesce.  
  
## Vedere anche  
 [Funzione CType](../Topic/CType%20Function%20\(Visual%20Basic\).md)   
 [DirectCast Operator](../Topic/DirectCast%20Operator%20\(Visual%20Basic\).md)   
 [TryCast Operator](../Topic/TryCast%20Operator%20\(Visual%20Basic\).md)   
 [Nothing](../Topic/Nothing%20\(Visual%20Basic\).md)   
 [NIB Raccolte in Visual Basic](http://msdn.microsoft.com/it-it/8b2b7845-2251-4573-8dd3-c9f9c0a66a21)