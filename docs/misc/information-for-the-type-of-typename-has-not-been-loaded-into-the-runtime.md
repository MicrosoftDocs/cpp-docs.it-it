---
title: "Informazioni per il tipo di &#39;&lt;nometipo&gt;&#39; non caricate al runtime | Microsoft Docs"
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
  - "vbc30750"
  - "bc30750"
helpviewer_keywords: 
  - "BC30750"
ms.assetid: b0f074f9-571d-48f8-b334-4fd34b61cd89
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Informazioni per il tipo di &#39;&lt;nometipo&gt;&#39; non caricate al runtime
Si è fatto riferimento a un tipo che non è stato caricato dal runtime.  
  
 **ID errore:** BC30750  
  
### Per correggere l'errore  
  
1.  Ristrutturare il codice in modo che il tipo venga definito nell'ambito corrente.  
  
2.  Verificare che il membro sia definito e che il nome del membro sia stato digitato correttamente.  
  
3.  Provare ad accedere a uno dei membri dichiarati nel modulo. In alcuni casi l'ambiente di debug non può trovare i membri perché i moduli in cui sono dichiarati non sono caricati.  
  
## Vedere anche  
 [Debug in Visual Studio](../Topic/Debugging%20in%20Visual%20Studio.md)