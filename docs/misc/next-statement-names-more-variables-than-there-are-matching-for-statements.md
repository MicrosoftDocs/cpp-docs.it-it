---
title: "Con l&#39;istruzione &#39;Next&#39; viene assegnato un numero di variabili maggiore delle istruzioni &#39;For&#39; corrispondenti | Microsoft Docs"
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
  - "bc32037"
  - "vbc32037"
helpviewer_keywords: 
  - "BC32037"
ms.assetid: 7c97d835-1043-40ec-a645-63a053f5f916
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Con l&#39;istruzione &#39;Next&#39; viene assegnato un numero di variabili maggiore delle istruzioni &#39;For&#39; corrispondenti
I cicli annidati terminano con una singola istruzione `Next` che specifica più variabili di ciclo rispetto ai cicli disponibili nella nidificazione, come nell'esempio seguente:  
  
```  
For I = 1 To 10 For J = 1 To 5 ' ... Next J, I, K   ' Next J, I is valid, but there is no loop on K.  
```  
  
 **ID errore:** BC32037  
  
### Per correggere l'errore  
  
1.  Verificare che l'istruzione `Next` specifichi tutte le variabili del ciclo annidato nell'ordine inverso rispetto all'inizio del ciclo.  
  
2.  Rimuovere le variabili estranee dall'istruzione `Next`.  
  
## Vedere anche  
 [Istruzione For...Next](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)