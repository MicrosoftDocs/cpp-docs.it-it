---
title: ".DOSSEG | Microsoft Docs"
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
  - ".DOSSEG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".DOSSEG directive"
ms.assetid: 175ad470-0a2b-4e2b-b078-65e224fec040
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .DOSSEG
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ordina i segmenti secondo la convenzione del segmento di MS\-DOS: CODIFICARE innanzitutto, quindi segmentato non in DGROUP quindi segmenti in DGROUP.  
  
## Sintassi  
  
```  
  
.DOSSEG  
  
```  
  
## Note  
 I segmenti in DGROUP seguono il seguente ordine: segmenti non in BSS o STACK, quindi segmenti di BSS e infine segmenti di STACK.  Principalmente utilizzato per garantire il supporto di CodeView nei programmi autonomi di MASM.  Equivale a [DOSSEG](../../assembler/masm/dosseg.md).  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)