---
title: "Avviso del compilatore (livello 1) C4953 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4953"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4953"
ms.assetid: 3c4f6ac6-3976-41ab-8a27-3c41d7472ea7
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4953
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function' inline modificata dopo la raccolta dei dati di profilo. Dati di profilo non utilizzati  
  
 Durante l'uso di [\/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md) il compilatore ha rilevato un modulo di input che è stato ricompilato dopo `/LTCG:PGINSTRUMENT` e ha una funzione \(***function***\) che è stata modificata e in cui le esecuzioni di test esistenti hanno identificato la funzione come candidato per l'incorporamento. A seguito della ricompilazione del modulo, però, la funzione non sarà più un candidato per l'incorporamento.  
  
 Si tratta di un avviso informativo. Per risolvere il problema, eseguire `/LTCG:PGINSTRUMENT`, ripetere tutte le esecuzioni dei test ed eseguire `/LTCG:PGOPTIMIZE`.  
  
 Se fosse stata usata `/LTCG:PGOPTIMIZE`, al posto di questo avviso sarebbe comparso un errore.