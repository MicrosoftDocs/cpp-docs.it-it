---
title: "Le istruzioni &#39;Imports&#39; devono precedere qualsiasi dichiarazione | Microsoft Docs"
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
  - "vbc30465"
  - "bc30465"
helpviewer_keywords: 
  - "BC30465"
ms.assetid: 726365f6-d6fc-454a-a43b-afa41bfea82a
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le istruzioni &#39;Imports&#39; devono precedere qualsiasi dichiarazione
Un'istruzione `Imports` segue un'istruzione di dichiarazione all'interno di un file di origine.  
  
 L'istruzione `Imports` importa i nomi degli spazi dei nomi da progetti e assembly di riferimento, nonché i nomi degli spazi dei nomi definiti all'interno dello stesso progetto in cui compare. Le istruzioni `Imports` devono essere inserire in un file di origine, prima di riferimento agli identificatori.  
  
 **ID errore:** BC30465  
  
### Per correggere l'errore  
  
-   Spostare l'istruzione `Imports` all'inizio del file di origine, prima di qualsiasi istruzione di dichiarazione.  
  
## Vedere anche  
 [Imports Statement \(.NET Namespace and Type\)](../Topic/Imports%20Statement%20\(.NET%20Namespace%20and%20Type\).md)