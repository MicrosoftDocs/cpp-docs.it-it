---
title: "Non &#232; possibile applicare &#39;Microsoft.VisualBasic.ComClassAttribute&#39; a &#39;&lt;nomeclasse&gt;&#39; perch&#233; non &#232; dichiarato &#39;Public&#39;. | Microsoft Docs"
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
  - "bc32509"
  - "vbc32509"
helpviewer_keywords: 
  - "BC32509"
ms.assetid: ac46851f-53ab-4ce6-87b1-4c4d29508527
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile applicare &#39;Microsoft.VisualBasic.ComClassAttribute&#39; a &#39;&lt;nomeclasse&gt;&#39; perch&#233; non &#232; dichiarato &#39;Public&#39;.
Una classe viene dichiarata con <xref:Microsoft.VisualBasic.ComClassAttribute>, ma la relativa dichiarazione non specifica `Public`.  
  
 Per essere idonea per l'interoperabilità COM, una classe .NET Framework deve soddisfare i requisiti seguenti:  
  
-   Deve essere `Public`, tutti i relativi contenitori devono essere `Public` e deve esporre almeno un membro `Public`.  
  
-   Non deve essere *astratta*, vale a dire non deve essere dichiarata con `MustInherit`.  
  
-   Non deve essere generica o essere dichiarata all'interno di un tipo di contenitore generico.  
  
 **ID errore:** BC32509  
  
### Per correggere l'errore  
  
-   Aggiungere la parola chiave `Public` alla dichiarazione di classe.  
  
     \-oppure\-  
  
-   Se la classe o il relativo elemento contenitore non può essere `Public`, rimuovere <xref:Microsoft.VisualBasic.ComClassAttribute> dalla dichiarazione di classe. Non è possibile esporla a COM.  
  
## Vedere anche  
 <xref:Microsoft.VisualBasic.ComClassAttribute>   
 [COM Interop](../Topic/COM%20Interop%20\(Visual%20Basic\).md)   
 [Public](../Topic/Public%20\(Visual%20Basic\).md)