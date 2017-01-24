---
title: "L&#39;istruzione &#39;End&#39; non pu&#242; essere usata nei progetti di tipo libreria di classi | Microsoft Docs"
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
  - "bc30615"
  - "vbc30615"
helpviewer_keywords: 
  - "BC30615"
ms.assetid: c8606b17-b50b-4014-b76e-b748d57e9389
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;istruzione &#39;End&#39; non pu&#242; essere usata nei progetti di tipo libreria di classi
I progetti di tipo libreria di classi usati per creare DLL non consentono di usare la parola chiave `End`per arrestare l'esecuzione di codice in una routine.  
  
 **ID errore:** BC30615  
  
### Per correggere l'errore  
  
-   Usare strutture di controllo quali `While` e `For` per controllare il flusso dell'esecuzione del programma.  
  
## Vedere anche  
 [Control Flow](../Topic/Control%20Flow%20in%20Visual%20Basic.md)