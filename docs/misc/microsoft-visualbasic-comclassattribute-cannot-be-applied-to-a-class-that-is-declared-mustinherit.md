---
title: "Impossibile applicare &#39;Microsoft.VisualBasic.ComClassAttribute&#39; a una classe dichiarata &#39;MustInherit&#39; | Microsoft Docs"
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
  - "BC32508"
  - "vbc32508"
helpviewer_keywords: 
  - "BC32508"
ms.assetid: c8af606d-f448-4703-98df-e594fd511f92
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile applicare &#39;Microsoft.VisualBasic.ComClassAttribute&#39; a una classe dichiarata &#39;MustInherit&#39;
Una classe viene dichiarata con <xref:Microsoft.VisualBasic.ComClassAttribute>, ma la relativa dichiarazione specifica `MustInherit`.  
  
 Per essere idonea per l'interoperabilità COM, una classe .NET Framework deve soddisfare i requisiti seguenti:  
  
-   Deve essere `Public`, tutti i relativi contenitori devono essere `Public` e deve esporre almeno un membro `Public`.  
  
-   Non deve essere *astratta*, vale a dire non deve essere dichiarata con `MustInherit`.  
  
-   Non deve essere generica o essere dichiarata all'interno di un tipo di contenitore generico.  
  
 **ID errore:** BC32508  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `MustInherit` dalla dichiarazione di classe.  
  
     \-oppure\-  
  
-   Se la classe o il relativo elemento contenitore deve essere generico, rimuovere <xref:Microsoft.VisualBasic.ComClassAttribute> dalla dichiarazione di classe. Non è possibile esporla a COM.  
  
## Vedere anche  
 <xref:Microsoft.VisualBasic.ComClassAttribute>   
 [COM Interop](../Topic/COM%20Interop%20\(Visual%20Basic\).md)   
 [MustInherit](../Topic/MustInherit%20\(Visual%20Basic\).md)