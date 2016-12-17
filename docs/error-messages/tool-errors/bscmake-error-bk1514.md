---
title: "Errore BK1514 di BSCMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "BK1514"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BK1514"
ms.assetid: 7c7e2504-a490-44ab-bb1f-47385ee2f4b0
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore BK1514 di BSCMAKE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Tutti i file SBR troncati, nessun file trovato in nomefile.  
  
 Nessuno dei file SBR specificati per un aggiornamento faceva parte del file di informazioni di visualizzazione \(BSC\) originale.  Per individuare i nomi dei file SBR che hanno causato l'errore, leggere gli avvisi [BK4502](../../error-messages/tool-errors/bscmake-warning-bk4502.md) che lo precedono.  
  
### Possibili cause  
  
1.  Specifica di nome file errato per un file SBR o BSC.  
  
2.  File BSC danneggiato che ha richiesto la ricompilazione da parte di BSCMAKE.