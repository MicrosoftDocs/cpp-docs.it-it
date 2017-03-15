---
title: "Errore del compilatore C2722 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2722"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2722"
ms.assetid: 4cc2c7fa-cb12-4bcf-9df1-6d627ef62973
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2722
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'::operatore': non valido dopo il comando operator. Utilizzare 'operator operatore'  
  
 Un'istruzione `operator` ridefinisce `::new` o `::delete`.  Gli operatori `new` e `delete` sono globali. Pertanto, l'operatore di risoluzione dell'ambito \(`::`\) è privo di significato.  Rimuovere l'operatore `::`.