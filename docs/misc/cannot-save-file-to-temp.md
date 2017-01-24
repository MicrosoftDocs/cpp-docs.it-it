---
title: "Impossibile salvare file in TEMP | Microsoft Docs"
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
  - "vbrID735"
ms.assetid: 1055fc15-9641-43b2-a40c-a0a9fbbb34b2
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile salvare file in TEMP
È possibile che un componente non riesca a trovare una directory denominata TEMP o che lo spazio disponibile nell'unità o nella partizione che contiene la directory TEMP non sia sufficiente per salvare le informazioni.  
  
### Per correggere l'errore  
  
1.  Creare una directory denominata "TEMP" e impostare le variabile di ambiente TEMP sul suo percorso.  
  
2.  Liberare spazio nell'unità cancellando i file non necessari o creare una directory TEMP in un'altra partizione e impostare le variabile di ambiente TEMP sul suo percorso.  
  
## Vedere anche  
 [Error Types](../Topic/Error%20Types%20\(Visual%20Basic\).md)