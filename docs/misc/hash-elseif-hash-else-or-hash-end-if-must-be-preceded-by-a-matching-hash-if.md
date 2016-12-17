---
title: "&#39;#ElseIf&#39;, &#39;#Else&#39; o &#39;#End If&#39; deve essere preceduto da un &#39;#If&#39; corrispondente | Microsoft Docs"
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
  - "vbc30013"
  - "bc30013"
helpviewer_keywords: 
  - "BC30013"
ms.assetid: 8fe2d23c-8b8f-46d8-90f2-7f8857ea43bb
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;#ElseIf&#39;, &#39;#Else&#39; o &#39;#End If&#39; deve essere preceduto da un &#39;#If&#39; corrispondente
`#ElseIf`, `#Else` e `#End If` sono direttive di compilazione condizionale. L'oggetto `#ElseIf`, `#Else` o `#End If` non è preceduto da una direttiva `#If` corrispondente.  
  
 **ID errore:** BC30013  
  
### Per correggere l'errore  
  
1.  Verificare che l'oggetto `#If` previsto non sia separato dalla clausola interessata mediante un blocco di compilazione condizionale o un oggetto `#End If` posizionato in modo non corretto.  
  
    > [!NOTE]
    >  È consentito un solo oggetto `#Else` in ogni blocco `#If`, quindi due direttive `#Else` successive causano questo errore.  
  
2.  Verificare che una direttiva `#If` precedente sia preceduta da `#`.  
  
3.  Se tutti gli altri elementi sono in ordine, aggiungere una direttiva `#If` all'inizio del blocco di compilazione condizionale.  
  
## Vedere anche  
 [\#If...Then...\#Else Directives](../Topic/%23If...Then...%23Else%20Directives.md)