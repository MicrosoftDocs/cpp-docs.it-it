---
title: "Errore di analisi della documentazione XML: per il tag di inizio &#39;&lt;tag&gt;&#39; non esiste un tag di fine corrispondente | Microsoft Docs"
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
  - "vbc42316"
  - "BC42316"
helpviewer_keywords: 
  - "BC42316"
ms.assetid: 45b68176-ebf6-43af-820e-6801aabb6c57
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Errore di analisi della documentazione XML: per il tag di inizio &#39;&lt;tag&gt;&#39; non esiste un tag di fine corrispondente
Errore di analisi della documentazione XML: per il tag di inizio '\<tag\>' non esiste un tag di fine corrispondente. Il commento XML verrà ignorato.  
  
 Il commento XML contiene un tag di inizio, ma non contiene un tag di fine.  
  
 **ID errore:** BC42316  
  
### Per correggere l'errore  
  
-   Aggiungere un tag di fine corrispondente al tag di inizio.  
  
     oppure  
  
-   Se il tag non contiene testo interno, ad esempio [\<seealso\>](../Topic/%3Cseealso%3E%20\(Visual%20Basic\).md), specificare una barra prima della parentesi acuta di chiusura.  
  
## Vedere anche  
 [XML Comment Tags](../Topic/Recommended%20XML%20Tags%20for%20Documentation%20Comments%20\(Visual%20Basic\).md)   
 [Documenting Your Code with XML](../Topic/Documenting%20Your%20Code%20with%20XML%20\(Visual%20Basic\).md)