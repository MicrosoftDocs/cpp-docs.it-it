---
title: "&#39;Equals&#39; non pu&#242; confrontare un valore di tipo &#39;&lt;tipo1&gt;&#39; con un valore di tipo &#39;&lt;tipo2&gt;&#39; | Microsoft Docs"
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
  - "vbc36621"
  - "bc36621"
helpviewer_keywords: 
  - "BC36621"
ms.assetid: bd40bf57-3a12-407a-8622-7e428850c77c
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Equals&#39; non pu&#242; confrontare un valore di tipo &#39;&lt;tipo1&gt;&#39; con un valore di tipo &#39;&lt;tipo2&gt;&#39;
Un operatore `Equals` in una clausola `Join` o `Group Join` ha provato a confrontare un tipo di dati con un altro in una modalità non definita. Un esempio di questo caso è un confronto di un valore `Boolean` con un tipo `Date`.  
  
 **ID errore:** BC36621  
  
### Per correggere l'errore  
  
-   Verificare che i valori su ogni lato dell'operatore `Equals` possano essere convertiti in un tipo di dati comune. Alcune opzioni che consentono di eseguire questa operazione sono le seguenti:  
  
    -   Usare la funzione `CType` per convertire uno o più valori in un tipo specifico.  
  
    -   Usare la classe <xref:System.Convert> o i metodi di conversione per convertire uno o più valori in un tipo immutabile comune.  
  
    -   Convertire i valori in stringhe usando il metodo `ToString`.  
  
## Vedere anche  
 [Funzione CType](../Topic/CType%20Function%20\(Visual%20Basic\).md)   
 [Type Conversions in Visual Basic](../Topic/Type%20Conversions%20in%20Visual%20Basic.md)   
 [Join Clause](../Topic/Join%20Clause%20\(Visual%20Basic\).md)   
 [Group Join Clause](../Topic/Group%20Join%20Clause%20\(Visual%20Basic\).md)   
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [LINQ](../Topic/LINQ%20in%20Visual%20Basic.md)