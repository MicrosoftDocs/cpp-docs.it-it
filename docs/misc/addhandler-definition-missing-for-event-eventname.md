---
title: "Manca la definizione di &#39;AddHandler&#39; per l&#39;evento &#39;&lt;nomeevento&gt;&#39; | Microsoft Docs"
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
  - "bc31130"
  - "vbc31130"
helpviewer_keywords: 
  - "BC31130"
ms.assetid: cf6c7fd6-ce2e-4916-b427-2a4a63e7279d
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Manca la definizione di &#39;AddHandler&#39; per l&#39;evento &#39;&lt;nomeevento&gt;&#39;
Se un evento viene dichiarato come `Custom`, deve fornire una routine per l'aggiunta di un gestore eventi.  
  
 **ID errore:** BC31130  
  
### Per correggere l'errore  
  
1.  Includere una dichiarazione `AddHandler` tra l'istruzione `Custom Event` e l'istruzione `End Event`.  
  
2.  Verificare che le altre routine all'interno della dichiarazione di evento terminino correttamente.  
  
## Vedere anche  
 [AddHandler Statement](../Topic/AddHandler%20Statement.md)   
 [Event Statement](../Topic/Event%20Statement.md)