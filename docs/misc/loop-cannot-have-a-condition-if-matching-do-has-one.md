---
title: "&#39;Loop&#39; non pu&#242; contenere una condizione se questa &#232; gi&#224; presente nell&#39;elemento &#39;Do&#39; corrispondente | Microsoft Docs"
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
  - "vbc30238"
  - "bc30238"
helpviewer_keywords: 
  - "BC30238"
ms.assetid: 81513cb5-69e7-4d62-b33e-e54cb8c5e8bf
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Loop&#39; non pu&#242; contenere una condizione se questa &#232; gi&#224; presente nell&#39;elemento &#39;Do&#39; corrispondente
Un'istruzione `Loop` contiene una clausola `While` o `Until` e anche l'istruzione `Do` corrispondente contiene una clausola di questo tipo. Solo una delle istruzioni `Do` e `Loop` in un ciclo può specificare una condizione.  
  
 **ID errore:** BC30238  
  
### Per correggere l'errore  
  
-   Rimuovere la clausola `While` o `Until` dall'istruzione `Do` o dall'istruzione `Loop`.  
  
## Vedere anche  
 [Do...Loop Statement](../Topic/Do...Loop%20Statement%20\(Visual%20Basic\).md)