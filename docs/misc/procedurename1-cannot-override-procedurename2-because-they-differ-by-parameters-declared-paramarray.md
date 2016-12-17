---
title: "&#39;&lt;nomeroutine1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;nomeroutine2&gt;&#39; perch&#233; si differenziano per i parametri dichiarati come &#39;ParamArray&#39; | Microsoft Docs"
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
  - "bc30906"
  - "vbc30906"
helpviewer_keywords: 
  - "BC30906"
ms.assetid: 12939030-732e-4c6d-8fe9-707b7532174b
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomeroutine1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;nomeroutine2&gt;&#39; perch&#233; si differenziano per i parametri dichiarati come &#39;ParamArray&#39;
Una routine in una classe derivata esegue l'override di una routine con nome identico nella classe base, ma gli elenchi di parametri sono diversi.  
  
 Per eseguire l'override di una routine in una classe ereditata, tale routine deve corrispondere ai relativi elenco di parametri, livello di accesso e qualsiasi eventuale tipo restituito. In particolare, deve corrispondere a qualsiasi dichiarazione [Optional](../Topic/Optional%20\(Visual%20Basic\).md) o [ParamArray](../Topic/ParamArray%20\(Visual%20Basic\).md).  
  
 **ID errore:** BC30906  
  
### Per correggere l'errore  
  
-   Per eseguire l'override della routine, rendere l'elenco di parametri esattamente uguale all'elenco di parametri della routine della classe base. Se nella routine della classe base l'ultimo parametro viene dichiarato inserendo `ParamArray`, dichiarare `ParamArray` anche per l'ultimo parametro della routine di override.  
  
-   Se si vuole un elenco di parametri diverso rispetto alla versione della classe base, non sarà possibile eseguirne l'override. Sarà tuttavia possibile eseguirne l'overload. Per altre informazioni, vedere [Procedure Overloading](../Topic/Procedure%20Overloading%20\(Visual%20Basic\).md).  
  
## Vedere anche  
 [Overrides](../Topic/Overrides%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)