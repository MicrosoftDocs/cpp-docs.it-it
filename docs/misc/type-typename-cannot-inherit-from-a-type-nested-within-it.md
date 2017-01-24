---
title: "Il tipo &#39;&lt;nometipo&gt;&#39; non pu&#242; ereditare da un tipo annidato al suo interno | Microsoft Docs"
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
  - "bc30908"
  - "vbc30908"
helpviewer_keywords: 
  - "BC30908"
ms.assetid: bca164b2-a4a9-4ed4-9f71-a9a5a42f181a
caps.latest.revision: 13
caps.handback.revision: 13
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo &#39;&lt;nometipo&gt;&#39; non pu&#242; ereditare da un tipo annidato al suo interno
Una definizione di classe o interfaccia include un'Istruzione [Inherits Statement](../Topic/Inherits%20Statement.md) che specifica un tipo annidato al suo interno.  
  
 L'ereditarietà deve essere lineare, non circolare. Un tipo non può ereditare da un tipo che eredita da esso.  
  
 Una restrizione correlata è una relazione in cui un tipo non può ereditare da un tipo non ancora definito. L'ereditarietà presuppone la capacità di riutilizzare membri della classe base, che a sua volta richiede la definizione di questi membri. Di conseguenza in [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non è possibile compilare il codice come l'esempio seguente.  
  
```  
Public Class outerClass ' The following statement is INVALID because innerClass is not defined. Inherits innerClass Public Class innerClass Public Sub doSomething() End Sub End Class End Class  
```  
  
 **ID errore:** BC30908  
  
### Per correggere l'errore  
  
-   Se il tipo che eredita \(il tipo esterno nell'annidamento\) deve ereditare dal tipo interno, spostare il tipo interno all'esterno di quello esterno.  
  
-   Se il tipo interno deve essere annidato all'interno di quello esterno, il tipo esterno non potrà ereditare da quello interno. Rimuovere l'[Inherits Statement](../Topic/Inherits%20Statement.md).  
  
## Vedere anche  
 [NOT IN BUILD: Ereditarietà in Visual Basic](http://msdn.microsoft.com/it-it/e5e6e240-ed31-4657-820c-079b7c79313c)