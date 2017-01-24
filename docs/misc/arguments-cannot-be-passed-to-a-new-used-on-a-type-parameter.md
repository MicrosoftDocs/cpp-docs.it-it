---
title: "Impossibile passare argomenti a un &#39;New&#39; utilizzato in un parametro di tipo | Microsoft Docs"
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
  - "BC32085"
  - "vbc32085"
helpviewer_keywords: 
  - "BC32085"
ms.assetid: a60bf62d-2b2e-4621-b8db-e67720b918fb
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile passare argomenti a un &#39;New&#39; utilizzato in un parametro di tipo
Una dichiarazione o istruzione di assegnazione invoca un tipo generico e fornisce gli argomenti del costruttore a un parametro di tipo con il vincolo [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md).  
  
 Un elenco di vincoli in un parametro di tipo può specificare che l'argomento di tipo passato al parametro di tipo deve esporre un costruttore senza parametri al quale il codice di creazione può accedere. Un parametro di tipo non può richiedere un costruttore che ha i parametri e un parametro di tipo con il vincolo `New` non può accettare tale costruttore.  
  
 **ID errore:** BC32085  
  
### Per correggere l'errore  
  
-   Rimuovere l'elenco degli argomenti che segue l'argomento di tipo nell'istruzione che invoca il tipo generico. Non è possibile passare gli argomenti del costruttore al parametro di tipo corrispondente.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)