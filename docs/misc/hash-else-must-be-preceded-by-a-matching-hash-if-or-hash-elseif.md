---
title: "&#39;#Else&#39; deve essere preceduto da un &#39;#If&#39; o &#39;#ElseIf&#39; corrispondente | Microsoft Docs"
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
  - "vbc30028"
  - "bc30028"
helpviewer_keywords: 
  - "BC30028"
ms.assetid: c6ed34de-d6ed-4227-9880-538055aff20a
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;#Else&#39; deve essere preceduto da un &#39;#If&#39; o &#39;#ElseIf&#39; corrispondente
`#Else` è una direttiva di compilazione condizionale. Una direttiva `#Else` non è preceduta da una direttiva `#If` o `#ElseIf` corrispondente.  
  
 **ID errore:** BC30028  
  
### Per correggere l'errore  
  
1.  Verificare che un oggetto `#If` o `#ElseIf` precedente non sia separato da questo oggetto `#Else` mediante un blocco di compilazione condizionale o un oggetto `#End If` posizionato in modo non corretto.  
  
2.  Verificare che `#Else` non sia preceduta da un'altra direttiva `#Else`. In caso affermativo, rimuovere `#Else` o modificarla in `#ElseIf`.  
  
3.  Se tutti gli altri elementi sono in ordine, aggiungere una direttiva `#If` all'inizio del blocco di compilazione condizionale.  
  
## Vedere anche  
 [\#If...Then...\#Else Directives](../Topic/%23If...Then...%23Else%20Directives.md)