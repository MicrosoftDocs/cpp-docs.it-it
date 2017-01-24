---
title: "Non &#232; possibile applicare &#39;Microsoft.VisualBasic.ComClassAttribute&#39; a una classe generica o contenuta all&#39;interno di un tipo generico | Microsoft Docs"
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
  - "vbc31527"
  - "bc31527"
helpviewer_keywords: 
  - "BC31527"
ms.assetid: ea125bff-d020-4933-b277-6e24943eea88
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile applicare &#39;Microsoft.VisualBasic.ComClassAttribute&#39; a una classe generica o contenuta all&#39;interno di un tipo generico
Viene dichiarata una classe con <xref:Microsoft.VisualBasic.ComClassAttribute>, ma è generica o contenuta all'interno di un tipo generico.  
  
 Per essere idonea per l'interoperabilità COM, una classe .NET Framework deve soddisfare i requisiti seguenti:  
  
-   Deve essere `Public`, tutti i relativi contenitori devono essere `Public` e deve esporre almeno un membro `Public`.  
  
-   Non deve essere *astratta*, vale a dire non deve essere dichiarata con `MustInherit`.  
  
-   Non deve essere generica o essere dichiarata all'interno di un tipo di contenitore generico.  
  
 **ID errore:** BC31527  
  
### Per correggere l'errore  
  
-   Modificare la dichiarazione della classe in modo che non sia generica e assicurarsi che l'elemento contenitore non sia generico.  
  
     \-oppure\-  
  
-   Se la classe o il relativo elemento contenitore deve essere generico, rimuovere <xref:Microsoft.VisualBasic.ComClassAttribute> dalla dichiarazione di classe. Non è possibile esporla a COM.  
  
## Vedere anche  
 <xref:Microsoft.VisualBasic.ComClassAttribute>   
 [COM Interop](../Topic/COM%20Interop%20\(Visual%20Basic\).md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)