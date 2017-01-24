---
title: "&#39;&lt;identificatore&gt;&#39; non &#232; valido in una dichiarazione di variabile membro | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30235"
  - "bc30235"
helpviewer_keywords: 
  - "BC30235"
ms.assetid: 8c5764e4-0096-4ca0-8656-05341a39833a
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;identificatore&gt;&#39; non &#232; valido in una dichiarazione di variabile membro
Un'istruzione `Dim` contiene una parola chiave non valida. Un'istruzione `Dim` può includere solo le parole chiave `Friend`, `Private`, `Protected`, `Public`, `ReadOnly`, `Shadows`, `Shared` o `Static`.  
  
 Questo messaggio può comparire anche se si dichiara una variabile `Static` all'esterno di una routine. Si può usare `Static` solo a livello di routine.  
  
 Tenere presente che se si include una parola chiave valida in un'istruzione `Dim`, si può omettere la parola chiave `Dim`.  
  
 **ID errore:** BC30235  
  
### Per correggere l'errore  
  
1.  Rimuovere la parola chiave non valida dall'istruzione `Dim`.  
  
2.  Se è stata dichiarata una variabile `Static` all'esterno di una routine, spostare la dichiarazione all'interno di una routine oppure rimuovere la parola chiave `Static`.  
  
## Vedere anche  
 [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md)