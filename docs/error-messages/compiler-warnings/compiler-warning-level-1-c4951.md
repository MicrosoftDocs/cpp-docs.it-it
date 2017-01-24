---
title: "Avviso del compilatore (livello 1) C4951 | Microsoft Docs"
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
  - "C4951"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4951"
ms.assetid: 669d8bb7-5efa-4ba9-99db-4e65addbf054
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4951
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function' è stato modificato dopo la raccolta dei dati di profilo, dati di profilo della funzione non utilizzati  
  
 Una funzione è stata modificata in un modulo di input per [\/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md), di conseguenza, i dati del profilo non sono più validi. Il modulo di input è stato ricompilato dopo l'operazione **\/LTCG:PGINSTRUMENT** e ha una funzione \(***funzione***\) con un flusso di controllo diverso da quello presente nel modulo al momento dell'operazione **\/LTCG:PGINSTRUMENT**.  
  
 Si tratta di un avviso informativo. Per risolvere il problema, eseguire **\/LTCG:PGINSTRUMENT**, ripetere tutte le esecuzioni dei test ed eseguire **\/LTCG:PGOPTIMIZE**.  
  
 Se fosse stata usata **\/LTCG:PGOPTIMIZE**, al posto di questo avviso sarebbe comparso un errore.