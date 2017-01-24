---
title: "I tipi restituiti e i tipi di parametro di &#39;&lt;operatore&gt;&#39; devono essere &#39;&lt;nometipo&gt;&#39; per poter essere utilizzati in un&#39;istruzione &#39;For&#39; | Microsoft Docs"
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
  - "vbc33039"
  - "bc33039"
helpviewer_keywords: 
  - "BC33039"
ms.assetid: 30e8cfa8-c086-474c-a4f0-ad01d01096e2
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I tipi restituiti e i tipi di parametro di &#39;&lt;operatore&gt;&#39; devono essere &#39;&lt;nometipo&gt;&#39; per poter essere utilizzati in un&#39;istruzione &#39;For&#39;
Un ciclo `For` specifica una variabile contatore di un tipo che non definisce l'operatore `+` o `-` con i parametri e il valore restituito del suo stesso tipo.  
  
 La variabile contatore deve essere di un tipo che supporta operatori di aggiunta \(`+`\) e sottrazione \(`-`\) che agiscono completamente nel relativo tipo contenitore. Ciò significa che sia gli operandi che il valore restituito devono essere del tipo della variabile contatore.  
  
 Se si usa un tipo di dati numerico per la variabile contatore, gli operatori `+` e `-` sono supportati nel tipo contenitore. Se si usa una classe o una struttura definita dall'utente, è necessario definire entrambi gli operatori con operandi e valore restituito del tipo di classe o struttura.  
  
 **ID errore:** BC33039  
  
### Per correggere l'errore  
  
1.  Accertarsi che il tipo di dati della variabile contatore sia stato digitato in maniera corretta.  
  
2.  Se si usa una classe o una struttura definita dall'utente per la variabile contatore, definire gli operatori `+` e `-` che operano completamente in tale classe o struttura.  
  
## Vedere anche  
 [Istruzione For...Next](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)   
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)