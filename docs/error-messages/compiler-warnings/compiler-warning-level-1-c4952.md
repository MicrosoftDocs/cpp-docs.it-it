---
title: "Avviso del compilatore (livello 1) C4952 | Microsoft Docs"
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
  - "C4952"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4952"
ms.assetid: 593324f0-5cfe-42fb-b221-2f71308765dd
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4952
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': dati di profilo non trovati nel database 'pgd\_file' del programma  
  
 Durante l'uso di [\/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md) il compilatore ha rilevato un modulo di input ricompilato dopo `/LTCG:PGINSTRUMENT` e contenente una nuova funzione \(***function***\).  
  
 Si tratta di un avviso informativo. Per risolvere il problema, eseguire `/LTCG:PGINSTRUMENT`, ripetere tutte le esecuzioni dei test ed eseguire `/LTCG:PGOPTIMIZE`.  
  
 Se fosse stata usata `/LTCG:PGOPTIMIZE`, al posto di questo avviso sarebbe comparso un errore.