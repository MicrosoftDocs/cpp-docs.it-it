---
title: "Le istruzioni &#39;Declare&#39; non sono consentite in tipi generici o in tipi contenuti in tipi generici | Microsoft Docs"
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
  - "BC32075"
  - "vbc32075"
helpviewer_keywords: 
  - "BC32075"
ms.assetid: c620b67e-70f8-42ac-8292-e9ea484904c3
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le istruzioni &#39;Declare&#39; non sono consentite in tipi generici o in tipi contenuti in tipi generici
Un'istruzione `Declare` è inclusa nell'ambito di una classe o struttura generica oppure di una classe o struttura dichiarata all'interno di una classe o struttura generica.  
  
 Visual Basic e .NET Framework attualmente non supportano le combinazioni di riferimenti esterni e tipi generici. Il compilatore necessita di tutti i parametri e del tipo restituito di una routine esterna per chiamarla in modo corretto.  
  
 **ID errore:** BC32075  
  
### Per correggere l'errore  
  
-   Spostare l'istruzione `Declare` all'esterno dell'ambito di un tipo generico oppure rimuoverla del tutto.  
  
## Vedere anche  
 [Declare Statement](../Topic/Declare%20Statement.md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)