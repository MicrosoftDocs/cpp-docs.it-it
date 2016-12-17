---
title: "Le funzioni di accesso alle propriet&#224; non possono essere dichiarate come &#39;&lt;modificatoreaccesso&gt;&#39; in una propriet&#224; &#39;NotOverridable&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc31106"
  - "bc31106"
helpviewer_keywords: 
  - "BC31106"
ms.assetid: 84bcb157-9c33-4e4f-89a9-c5e6cb73028b
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le funzioni di accesso alle propriet&#224; non possono essere dichiarate come &#39;&lt;modificatoreaccesso&gt;&#39; in una propriet&#224; &#39;NotOverridable&#39;
Un'[Get Statement](../Topic/Get%20Statement.md) o [Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md) in una proprietà `NotOverridable` include la parola chiave `Private`.  
  
 Di seguito viene spiegato perché `NotOverridable` e `Private` non possono essere combinate in una [Property Statement](../Topic/Property%20Statement.md):  
  
1.  Una proprietà o una routine che non esegue l'override di una proprietà o di una routine di classe base è caratterizzata dall'impostazione predefinita [NotOverridable](../Topic/NotOverridable%20\(Visual%20Basic\).md).  
  
2.  Tuttavia, una proprietà o una routine di una classe derivata che esegue l'override di una proprietà o di una routine di classe base è caratterizzata dall'impostazione predefinita [Overridable](../Topic/Overridable%20\(Visual%20Basic\).md). Per terminare la gerarchia di override, è possibile dichiararla `NotOverridable`. Questo è il solo contesto in cui si può usare la proprietà `NotOverridable`. In altre parole, `NotOverridable` può essere usata soltanto in combinazione con [Overrides](../Topic/Overrides%20\(Visual%20Basic\).md).  
  
3.  Se una proprietà o una routine di classe base viene dichiarata [Private](../Topic/Private%20\(Visual%20Basic\).md), una classe derivata non può eseguire l'override di quella proprietà o di quella routine in quanto non può accedervi. Per questo motivo, non è possibile usare `Private` in combinazione con `Overridable`.  
  
4.  Per poter eseguire l'override di una proprietà o di una routine, la proprietà o la routine che lo esegue deve avere in comune con queste non solo una firma identica, ma anche il medesimo livello di accesso. Questo implica che una proprietà o una routine che esegue un override non può essere `Private` perché una proprietà o una routine di cui può essere eseguito l'override non può essere dichiarata `Private`.  
  
5.  Quindi, poiché la proprietà `NotOverridable` può essere dichiarata solo per una proprietà o una routine che esegue l'override, non è possibile combinarla con la parola chiave `Private`.  
  
 In base allo stesso ragionamento, le routine di proprietà individuali, vale a dire `Get` e `Set`, di una proprietà che esegue l'override non possono essere `Private`.  
  
 **ID errore:** BC31106  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `Private` dall'istruzione `Get` o `Set` oppure rimuovere le parole chiave `Overrides` e `NotOverridable` dall'istruzione `Property`.  
  
## Vedere anche  
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [Differences Between Shadowing and Overriding](../Topic/Differences%20Between%20Shadowing%20and%20Overriding%20\(Visual%20Basic\).md)   
 [How to: Declare a Property with Mixed Access Levels](../Topic/How%20to:%20Declare%20a%20Property%20with%20Mixed%20Access%20Levels%20\(Visual%20Basic\).md)