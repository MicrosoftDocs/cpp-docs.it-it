---
title: "Errore BK1513 di BSCMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "BK1513"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BK1513"
ms.assetid: 9ba87c09-8d82-4c80-b0cf-a8de63dcf9da
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore BK1513 di BSCMAKE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'aggiornamento non incrementale richiede tutti i file SBR  
  
 Non è possibile usare BSCMAKE per generare un nuovo file di informazioni \(BSC\) di visualizzazione poiché uno o più file SBR sono troncati.  Per individuare i nomi dei file SBR troncati, leggere gli avvisi [BK4502](../../error-messages/tool-errors/bscmake-warning-bk4502.md) che accompagnano l'errore.  
  
 BSCMAKE consente di aggiornare un file BSC con un file SBR troncato ma non di compilarne uno nuovo.  BSCMAKE potrebbe creare un nuovo file BSC per i seguenti motivi:  
  
-   File BSC mancante.  
  
-   Nome file errato specificato per il file BSC.  
  
-   File BSC danneggiato.  
  
 Per risolvere il problema, eliminare i file SBR troncati, ricostruire o pulire la soluzione, quindi ricompilare.  Nell'IDE scegliere **Compila**, **Pulisci soluzione**, quindi scegliere **Compila**, **Ricompila soluzione**.