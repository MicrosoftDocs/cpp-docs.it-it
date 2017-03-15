---
title: "Avviso del compilatore (livello 1) C4420 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4420"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4420"
ms.assetid: 44a37754-7ddd-4764-a5f7-d33e05c20091
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4420
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operatore': operatore non disponibile. Verrà invece utilizzato 'operatore'. È possibile che il controllo runtime sia compromesso  
  
 L'avviso viene generato quando si utilizza [\/RTCv](../../build/reference/rtc-run-time-error-checks.md) \(controllo new\/delete vettoriale\) e quando non viene rilevata alcuna forma vettoriale.  In questo caso, viene utilizzata la forma non vettoriale.  
  
 Affinché \/RTCv funzioni correttamente, è necessario che venga sempre chiamata la forma vettoriale di [new](../../cpp/new-operator-cpp.md)\/[delete](../../cpp/delete-operator-cpp.md) se è stata utilizzata la sintassi vettoriale.