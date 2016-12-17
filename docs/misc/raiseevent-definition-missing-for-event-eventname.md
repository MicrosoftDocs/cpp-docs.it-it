---
title: "Manca la definizione di &#39;RaiseEvent&#39; per l&#39;evento &#39;&lt;nomeevento&gt;&#39; | Microsoft Docs"
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
  - "vbc31132"
  - "bc31132"
helpviewer_keywords: 
  - "BC31132"
ms.assetid: 8f3442fd-2ed1-4dbc-83a8-f0860ec022ac
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Manca la definizione di &#39;RaiseEvent&#39; per l&#39;evento &#39;&lt;nomeevento&gt;&#39;
Se un evento viene dichiarato come `Custom`, deve fornire una routine per la generazione dell'evento.  
  
 **ID errore:** BC31132  
  
### Per correggere l'errore  
  
1.  Includere una dichiarazione `RaiseEvent` tra l'istruzione `Custom Event` e l'istruzione `End Event`.  
  
2.  Verificare che le altre routine all'interno della dichiarazione di evento vengano terminate correttamente.  
  
## Vedere anche  
 [RaiseEvent Statement](../Topic/RaiseEvent%20Statement.md)   
 [Event Statement](../Topic/Event%20Statement.md)