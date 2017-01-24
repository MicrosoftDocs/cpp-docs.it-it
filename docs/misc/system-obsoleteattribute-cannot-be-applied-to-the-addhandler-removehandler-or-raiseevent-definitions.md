---
title: "Impossibile applicare &#39;System.ObsoleteAttribute&#39; alle definizioni di &#39;AddHandler&#39;, &#39;RemoveHandler&#39; o &#39;RaiseEvent&#39; | Microsoft Docs"
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
  - "bc31142"
  - "vbc31142"
helpviewer_keywords: 
  - "BC31142"
ms.assetid: 2bddde2e-9ca0-4f72-8910-0789a6350af8
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile applicare &#39;System.ObsoleteAttribute&#39; alle definizioni di &#39;AddHandler&#39;, &#39;RemoveHandler&#39; o &#39;RaiseEvent&#39;
Impossibile applicare 'System.ObsoleteAttribute' alle definizioni di 'AddHandler', 'RemoveHandler' o 'RaiseEvent'. Se necessario, applicare l'attributo direttamente all'evento.  
  
 Un evento personalizzato applica l'attributo <xref:System.ObsoleteAttribute> alla relativa routine `AddHandler`, `RemoveHandler` o `RaiseEvent`.  
  
 L'attributo <xref:System.ObsoleteAttribute> contrassegna un elemento di programmazione come non più usato e informa gli utenti che è necessario rimuovere l'elemento nelle versioni successive del prodotto.  
  
 Non è significativo usare determinate parti di un evento personalizzato, mentre altre non vengono più usate.  
  
 **ID errore:** BC31142  
  
### Per correggere l'errore  
  
-   Rimuovere l'attributo <xref:System.ObsoleteAttribute> dalla singola dichiarazione di routine e applicarlo alla dichiarazione complessiva dell'evento.  
  
## Vedere anche  
 <xref:System.ObsoleteAttribute>   
 [Event Statement](../Topic/Event%20Statement.md)   
 [AddHandler Statement](../Topic/AddHandler%20Statement.md)   
 [RemoveHandler Statement](../Topic/RemoveHandler%20Statement.md)   
 [RaiseEvent Statement](../Topic/RaiseEvent%20Statement.md)