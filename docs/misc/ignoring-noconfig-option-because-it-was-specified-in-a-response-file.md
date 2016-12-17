---
title: "Opzione /noconfig ignorata perch&#233; specificata in un file di risposta | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc2025"
  - "bc2025"
helpviewer_keywords: 
  - "BC2025"
ms.assetid: 87fb393d-e17f-4e50-8d98-d9dfeba30c3e
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Opzione /noconfig ignorata perch&#233; specificata in un file di risposta
L'opzione `/noconfig` indica al compilatore di non compilare con il file Vbc.rsp. Tuttavia, il compilatore elabora il file Vbc.rsp prima di elaborare qualsiasi altro file di risposta, quindi non può soddisfare l'opzione `/noconfig` in un file di risposta.  
  
 **ID errore:** BC2025  
  
### Per correggere l'errore  
  
1.  Rimuovere l'opzione `/noconfig` dal file di risposta.  
  
2.  Specificare l'opzione `/noconfig` quando si richiama il compilatore della riga di comando.  
  
## Vedere anche  
 [\/noconfig](../Topic/-noconfig.md)   
 [@ \(Specify Response File\)](../Topic/@%20\(Specify%20Response%20File\)%20\(Visual%20Basic\).md)