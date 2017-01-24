---
title: "Il tipo &#39;&lt;nometipo&gt;&#39; deve definire l&#39;operatore &#39;&lt;operatore&gt;&#39; per poter essere usato in un&#39;istruzione &#39;For&#39; | Microsoft Docs"
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
  - "vbc33038"
  - "BC33038"
helpviewer_keywords: 
  - "BC33038"
ms.assetid: b1c9d87f-80f9-4c8c-8908-f8400b9fe4c5
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo &#39;&lt;nometipo&gt;&#39; deve definire l&#39;operatore &#39;&lt;operatore&gt;&#39; per poter essere usato in un&#39;istruzione &#39;For&#39;
Un ciclo `For` specifica una variabile contatore di un tipo che non supporta un operatore richiesto.  
  
 La variabile contatore in un ciclo `For` può essere di un qualsiasi tipo di dati che supporti tutti gli operatori elencati di seguito:  
  
-   Maggiore o uguale a \(`>=`\)  
  
-   Minore o uguale a \(`<=`\)  
  
-   Addizione \(`+`\)  
  
-   Sottrazione \(`-`\)  
  
 Se si usa un tipo di dati numerico per la variabile contatore, sono supportati tutti gli operatori precedenti. Se si usa una classe o una struttura definita dall'utente, è necessario definire tutti gli operatori precedenti in quella classe o struttura.  
  
 Si noti inoltre che è necessario che i tipi di dati delle espressioni `start`, `end` e `step` nell'istruzione `For` vengano ampliati al tipo di dati della variabile contatore. Se la variabile contatore è una classe o struttura definita dall'utente e l'espressione `start`, `end` o `step` è di un tipo diverso, sarà necessario definire l'operatore di conversione `CType` per portare a termine la conversione necessaria.  
  
 **ID errore:** BC33038  
  
### Per correggere l'errore  
  
1.  Accertarsi che il tipo di dati della variabile contatore sia stato digitato in maniera corretta.  
  
2.  Se per la variabile contatore si usa una classe o una struttura definita dall'utente, definire tutti gli operatori richiesti in quella classe o struttura.  
  
3.  In base ai tipi di dati delle espressioni `start`, `end` e `step` potrebbe essere necessario definire uno o più operatori di conversione `CType` per convertirle nel tipo di dati della variabile contatore.  
  
## Vedere anche  
 [Istruzione For...Next](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)   
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)   
 [Funzione CType](../Topic/CType%20Function%20\(Visual%20Basic\).md)