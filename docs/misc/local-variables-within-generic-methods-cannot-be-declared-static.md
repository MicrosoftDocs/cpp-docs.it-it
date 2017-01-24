---
title: "Le variabili locali all&#39;interno di metodi generici non possono essere dichiarate &#39;Static&#39; | Microsoft Docs"
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
  - "vbc32068"
  - "bc32068"
helpviewer_keywords: 
  - "BC32068"
ms.assetid: cb5df484-76f9-4092-9d19-f26ddcf1c035
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le variabili locali all&#39;interno di metodi generici non possono essere dichiarate &#39;Static&#39;
La dichiarazione di una variabile locale all'interno di una routine generica specifica `Static`.  
  
 Visual Basic e .NET Framework attualmente non supportano le combinazioni di variabili statiche e routine generiche.  
  
 **ID errore:** BC32068  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `Static` dalla dichiarazione di variabile.  
  
## Vedere anche  
 [Static](../Topic/Static%20\(Visual%20Basic\).md)   
 [NOTINBUILD Procedura: Estendere la durata di una variabile](http://msdn.microsoft.com/it-it/04e7c56c-1db0-4fe5-a678-859a39ec654b)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)