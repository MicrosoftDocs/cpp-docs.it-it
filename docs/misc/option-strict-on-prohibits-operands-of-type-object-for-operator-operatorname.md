---
title: "Option Strict On non ammette operandi di tipo Object per l&#39;operatore &#39;&lt;nomeoperatore&gt;&#39; | Microsoft Docs"
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
  - "bc30038"
  - "vbc30038"
helpviewer_keywords: 
  - "BC30038"
ms.assetid: eb047d36-1fb4-460d-ae98-c76f31a89bed
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On non ammette operandi di tipo Object per l&#39;operatore &#39;&lt;nomeoperatore&gt;&#39;
Gli unici operatori definiti per le variabili oggetto sono `Is` e `TypeOf...Is`. Quando `Option Strict` è `On`, tutti gli operandi devono essere di tipi di dati definiti per l'operatore specificato.  
  
 **ID errore:** BC30038  
  
### Per correggere l'errore  
  
-   Usare le funzioni di conversione dei tipi appropriate, ad esempio `CInt` o `CStr`, per convertire gli operandi in tipi di dati definiti per l'operatore.  
  
## Vedere anche  
 [Is Operator](../Topic/Is%20Operator%20\(Visual%20Basic\).md)   
 [Comparison Operators in Visual Basic](../Topic/Comparison%20Operators%20in%20Visual%20Basic.md)   
 [Type Conversion Functions](../Topic/Type%20Conversion%20Functions%20\(Visual%20Basic\).md)