---
title: "Option Strict On non consente la riduzione dal tipo &#39;&lt;nometipo1&gt;&#39; al tipo &#39;&lt;nometipo2&gt;&#39; quando il valore del parametro &#39;ByRef&#39; &#39;&lt;nomeparametro&gt;&#39; viene ricopiato nell&#39;argomento corrispondente | Microsoft Docs"
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
  - "bc32029"
  - "vbc32029"
helpviewer_keywords: 
  - "BC32029"
ms.assetid: fc9ae5d2-b506-47cf-a50c-116fda5ed206
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On non consente la riduzione dal tipo &#39;&lt;nometipo1&gt;&#39; al tipo &#39;&lt;nometipo2&gt;&#39; quando il valore del parametro &#39;ByRef&#39; &#39;&lt;nomeparametro&gt;&#39; viene ricopiato nell&#39;argomento corrispondente
Una chiamata di routine fornisce un argomento `ByRef` con un tipo di dati che viene ampliato al tipo dichiarato dell'argomento e `Option Strict` è impostato su `On`. La conversione verso un tipo di dati più grande è consentita quando l'argomento viene passato alla routine, ma quando la routine modifica il contenuto dell'argomento di variabile nel codice chiamante, la conversione inversa è verso un tipo di dati più piccolo. Le conversioni verso un tipo di dati più piccolo non sono consentite con `Option Strict On`.  
  
 **ID errore:** BC32029  
  
### Per correggere l'errore  
  
-   Fornire a ogni argomento `ByRef` della chiamata di routine dati dello stesso tipo del tipo dichiarato o impostare `Option Strict Off`.  
  
## Vedere anche  
 [Option Strict Statement](../Topic/Option%20Strict%20Statement.md)   
 [Passing Arguments by Value and by Reference](../Topic/Passing%20Arguments%20by%20Value%20and%20by%20Reference%20\(Visual%20Basic\).md)   
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)   
 [Implicit and Explicit Conversions](../Topic/Implicit%20and%20Explicit%20Conversions%20\(Visual%20Basic\).md)