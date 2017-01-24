---
title: "L&#39;istruzione non pu&#242; trovarsi all&#39;interno di un corpo di interfaccia | Microsoft Docs"
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
  - "vbc30603"
  - "BC30603"
helpviewer_keywords: 
  - "BC30603"
ms.assetid: 3aef29d6-eadf-4f1f-b214-dfeae5e51c4f
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;istruzione non pu&#242; trovarsi all&#39;interno di un corpo di interfaccia
La dichiarazione di un membro di interfaccia include un'istruzione di terminazione del membro, nel formato `End` *nomemembro*.  
  
 Un'interfaccia definisce solo la firma dei suoi membri. Di conseguenza, le routine e le proprietà definite in un'interfaccia hanno solo la riga iniziale, che specifica il nome e la firma. Non includere codice, dichiarazioni interne o un'istruzione `End Function`, `End Property` o `End Sub` all'interno dell'interfaccia.  
  
 **ID errore:** BC30603  
  
### Per correggere l'errore  
  
-   Rimuovere l'istruzione `End` *nomemembro* dalla definizione dell'interfaccia.  
  
## Vedere anche  
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)   
 [End \<keyword\> Statement](../Topic/End%20%3Ckeyword%3E%20Statement%20\(Visual%20Basic\).md)