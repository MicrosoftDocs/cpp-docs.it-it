---
title: "&#39;&lt;identificatore&gt;&#39; non &#232; valido in una dichiarazione di metodo di interfaccia | Microsoft Docs"
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
  - "bc30270"
  - "vbc30270"
helpviewer_keywords: 
  - "BC30270"
ms.assetid: 598f2944-3e5d-4686-b6f7-2b4bcaf5c211
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;identificatore&gt;&#39; non &#232; valido in una dichiarazione di metodo di interfaccia
Un'istruzione `Function` o `Sub` all'interno di un'interfaccia contiene una parola chiave non valida, ad esempio `Implements`. Un'interfaccia può solo definire i membri, non implementarli.  
  
 **ID errore:** BC30270  
  
### Per correggere l'errore  
  
1.  Rimuovere la parola chiave non valida dall'istruzione di dichiarazione.  
  
2.  Spostare l'implementazione dei membri di interfaccia in una classe che implementa l'interfaccia.  
  
## Vedere anche  
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)   
 [Implements Statement](../Topic/Implements%20Statement.md)