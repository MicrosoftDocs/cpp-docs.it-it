---
title: "Non &#232; possibile convertire i valori &#39;Char&#39; in &#39;&lt;nometipo&gt;&#39; | Microsoft Docs"
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
  - "bc32006"
  - "vbc32006"
helpviewer_keywords: 
  - "BC32006"
ms.assetid: c033f65e-a315-47fc-be2e-ed371847a221
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile convertire i valori &#39;Char&#39; in &#39;&lt;nometipo&gt;&#39;
Non è possibile convertire i valori 'Char' in '\<nometipo\>'. Usare 'Microsoft.VisualBasic.AscW' per interpretare un carattere come valore Unicode o 'Microsoft.VisualBasic.Val' per interpretarlo come cifra.  
  
 Un'espressione tenta di convertire un valore `Char` in un tipo di dati diverso da `String` o `Object`.  
  
 **ID errore:** BC32006  
  
### Per correggere l'errore  
  
-   Usare la funzione `AscW` per interpretare un valore `Char` come codice carattere Unicode oppure la funzione `Val` per interpretarlo come cifra numerica.  
  
## Vedere anche  
 [NOT IN BUILD: Funzioni Asc, AscW](http://msdn.microsoft.com/it-it/6814bfec-12ba-41fb-b10e-bec99750d5e1)   
 [NOT IN BUILD: Funzione Val](http://msdn.microsoft.com/it-it/81650f77-9242-4ec1-8e04-e93b5daa451d)   
 [Char Data Type](../Topic/Char%20Data%20Type%20\(Visual%20Basic\).md)