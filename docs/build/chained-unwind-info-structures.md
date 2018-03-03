---
title: Concatenate strutture Unwind_info | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 176835bf-f118-45d9-9128-9db4b7571864
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3ac09c1f107b51542b7a17c8661eb784b4abf14a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="chained-unwind-info-structures"></a>Strutture UNWIND_INFO concatenate
Se è impostato il flag UNW_FLAG_CHAININFO, una struttura di informazioni sulla rimozione viene e uno secondario, il campo indirizzo eccezione-gestore UNWIND_INFO concatenata condiviso contiene le informazioni di rimozione primarie. Il codice seguente recupera informazioni, supponendo che di rimozione primario `unwindInfo` è la struttura con il UNW_FLAG_CHAININFO flag impostato.  
  
```  
PRUNTIME_FUNCTION primaryUwindInfo = (PRUNTIME_FUNCTION)&(unwindInfo->UnwindCode[( unwindInfo->CountOfCodes + 1 ) & ~1]);  
```  
  
 Questa struttura è utile in due situazioni. In primo luogo, può essere utilizzato per i segmenti di codice non contigui. Utilizzando questa struttura, è possibile ridurre le dimensioni delle informazioni di rimozione necessarie, poiché non è necessario duplicare la matrice di codici di rimozione dalla UNWIND_INFO principale.  
  
 È inoltre possibile utilizzare UNWIND_INFO per raggruppare i salvataggi dei registri volatili. Il compilatore può ritardare il salvataggio di alcuni registri volatili fino a quando non è di fuori del prologo di ingresso della funzione. È possibile registrare la voce UNWIND_INFO principale per la parte della funzione prima del codice raggruppato e quindi impostare la UNWIND_INFO con una dimensione diversa da zero di prologo, in cui i codici di rimozione in tale struttura riflettono i salvataggi dei registri non volatili. In tal caso, i codici di rimozione sono tutte le istanze di UWOP_SAVE_NONVOL. Un raggruppamento che consente di salvare i registri non volatili tramite un PUSH o modifica il registro RSP tramite un'allocazione dello stack fissa aggiuntiva non è supportato.  
  
 Un elemento UNWIND_INFO con UNW_FLAG_CHAININFO set può contenere una voce RUNTIME_FUNCTION il cui elemento UNW_FLAG_CHAININFO dispone anche di impostare (senza Shrink). Infine, concatenati UNWIND_INFO puntatori arriverà a un elemento UNWIND_INFO con UNW_FLAG_CHAININFO deselezionata. si tratta dell'elemento UNWIND_INFO principale, che fa riferimento al punto di ingresso effettivo della procedura.  
  
## <a name="see-also"></a>Vedere anche  
 [Dati di rimozione per la gestione delle eccezioni, supporto del debugger](../build/unwind-data-for-exception-handling-debugger-support.md)