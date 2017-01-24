---
title: ".STACK | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - ".STACK"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".STACK directive"
ms.assetid: 70019463-5d4f-41b6-8464-023a8ac2466f
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .STACK
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

una volta utilizzato con [.MODEL](../../assembler/masm/dot-model.md), definisce un intervallo dello stack \(con lo STACK del nome del segmento\).  L'elemento facoltativo `size` specifica il numero di byte dallo stack \(valore predefinito 1.024\).  `.STACK` la direttiva chiude automaticamente l'istruzione dello stack.  
  
## Sintassi  
  
```  
  
.STACK [[size]]  
```  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)