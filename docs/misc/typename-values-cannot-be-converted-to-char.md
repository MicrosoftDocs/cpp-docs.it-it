---
title: "Non &#232; possibile convertire i valori &#39;&lt;nometipo&gt;&#39; in &#39;Char&#39; | Microsoft Docs"
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
  - "bc32007"
  - "vbc32007"
helpviewer_keywords: 
  - "BC32007"
ms.assetid: b04212da-57ac-4493-9480-04c12b50f875
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile convertire i valori &#39;&lt;nometipo&gt;&#39; in &#39;Char&#39;
Non è possibile convertire i valori '\<nometipo\>' in 'Char'. Usare 'Microsoft.VisualBasic.ChrW' per interpretare un valore numerico come carattere Unicode oppure convertirlo in 'String' per produrre una cifra  
  
 Un'espressione tenta di convertire un tipo di dati diverso da `String` o `Object` in `Char`.  
  
 **ID errore:** BC32007  
  
### Per correggere l'errore  
  
-   Usare la funzione `ChrW` per convertire un valore numerico in un carattere Unicode oppure convertire prima il valore in `String` e quindi in `Char`.  
  
## Vedere anche  
 [NOT IN BUILD: Funzioni Chr, ChrW](http://msdn.microsoft.com/it-it/37f3c707-8a6f-4c51-9b02-9e634c4299ab)   
 [Implicit and Explicit Conversions](../Topic/Implicit%20and%20Explicit%20Conversions%20\(Visual%20Basic\).md)   
 [Char Data Type](../Topic/Char%20Data%20Type%20\(Visual%20Basic\).md)