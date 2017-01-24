---
title: "I parametri di tipo non possono essere specificati in questa dichiarazione | Microsoft Docs"
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
  - "vbc32065"
  - "bc32065"
helpviewer_keywords: 
  - "BC32065"
ms.assetid: 94cfe3de-74fd-4a2c-9246-ec4a05b73d55
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I parametri di tipo non possono essere specificati in questa dichiarazione
Un elemento di programmazione è dichiarato con un elenco di parametri di tipo, ma l'elemento di programmazione non è idoneo come tipo generico.  
  
 Gli elementi di programmazione non idonei come generici includono proprietà, operatori, eventi e costruttori. Se uno di questi elementi viene dichiarato con un elenco di parametri di tipo, viene generato questo errore.  
  
 **ID errore:** BC32065  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `Of` e i parametri di tipo dalla dichiarazione.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)