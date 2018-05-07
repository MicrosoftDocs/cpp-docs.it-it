---
title: Errore BK1513 di BSCMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- BK1513
dev_langs:
- C++
helpviewer_keywords:
- BK1513
ms.assetid: 9ba87c09-8d82-4c80-b0cf-a8de63dcf9da
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 93664a1224b85ec808805da0172aec408e875bc9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="bscmake-error-bk1513"></a>Errore BK1513 di BSCMAKE
l'aggiornamento non incrementale richiede tutti i file SBR  
  
 Non è possibile usare BSCMAKE per generare un nuovo file di informazioni (BSC) di visualizzazione poiché uno o più file SBR sono troncati. Per trovare i nomi dei file SBR troncati, leggere la [BK4502](../../error-messages/tool-errors/bscmake-warning-bk4502.md) avvisi che accompagnano l'errore.  
  
 BSCMAKE consente di aggiornare un file BSC con un file SBR troncato ma non di compilarne uno nuovo. BSCMAKE potrebbe creare un nuovo file BSC per i seguenti motivi:  
  
-   File BSC mancante.  
  
-   Nome file errato specificato per il file BSC.  
  
-   File BSC danneggiato.  
  
 Per risolvere il problema, eliminare i file SBR troncati, ricostruire o pulire la soluzione, quindi ricompilare. (Nell'IDE, scegliere **compilare**, **Pulisci soluzione**, quindi scegliere **compilare**, **Ricompila soluzione**.)