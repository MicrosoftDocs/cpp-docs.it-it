---
title: "Errore irreversibile C1307 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1307"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1307"
ms.assetid: 6f77d3d4-ba8a-476c-b540-aff19eb4efc4
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore irreversibile C1307
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

programma modificato dopo la raccolta dei dati del profilo  
  
 Durante l'utilizzo di [\/LTCG:PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md), è stato rilevato un modulo di input ricompilato dopo \/LTCG:PGINSTRUMENT e modificato al punto da rendere irrilevanti i dati di profilo esistenti.  L'errore C1307 verrà ad esempio generato se nel modulo ricompilato è stato modificato il grafico delle chiamate.  
  
 Per correggere questo errore, eseguire \/LTCG:PGINSTRUMENT, ripristinare tutte le esecuzioni dei test ed eseguire \/LTCG:PGOPTIMIZE.  Se non è possibile eseguire \/LTCG:PGINSTRUMENT e ripristinare tutte le esecuzioni dei test, creare l'immagine ottimizzata utilizzando \/LTCG:PGUPDATE anziché \/LTCG:PGOPTIMIZE.