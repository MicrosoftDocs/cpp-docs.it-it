---
title: "Avviso del compilatore (livello 4) C4960 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4960"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4960"
ms.assetid: 3b4ed286-9e8d-46f1-af0c-00ba669693a9
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso del compilatore (livello 4) C4960
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function' è troppo grande per il profiling  
  
 Durante l'uso di [\/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md) il compilatore ha rilevato un modulo di input con una funzione che includeva oltre 65.535 istruzioni. Questa funzione di grandi dimensioni non è disponibile per le ottimizzazioni PGO.  
  
 Per risolvere il problema, ridurre le dimensioni della funzione.