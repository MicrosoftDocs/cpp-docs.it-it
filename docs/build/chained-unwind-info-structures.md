---
title: Strutture UNWIND_INFO concatenate
ms.date: 11/04/2016
ms.assetid: 176835bf-f118-45d9-9128-9db4b7571864
ms.openlocfilehash: 19d0beb8c3438183fa594d7ec3cab4929b3a491a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50502141"
---
# <a name="chained-unwind-info-structures"></a>Strutture UNWIND_INFO concatenate

Se è impostato il flag UNW_FLAG_CHAININFO, significa che una struttura di informazioni di rimozione è uno secondario e il campo indirizzo eccezione gestore/concatenate-info condiviso contiene le informazioni di rimozione primario. Il codice seguente recupera informazioni, supponendo che di rimozione primario `unwindInfo` è la struttura che contiene il UNW_FLAG_CHAININFO flag impostato.

```
PRUNTIME_FUNCTION primaryUwindInfo = (PRUNTIME_FUNCTION)&(unwindInfo->UnwindCode[( unwindInfo->CountOfCodes + 1 ) & ~1]);
```

Questa struttura è utile in due situazioni. In primo luogo, può essere utilizzato per segmenti di codice non contigui. Con questa struttura, è possibile ridurre le dimensioni delle informazioni di rimozione necessarie, perché non è necessario duplicare la matrice di codici di rimozione dalla UNWIND_INFO principale.

È anche possibile usare UNWIND_INFO per raggruppare i salvataggi dei registri volatili. Il compilatore può ritardare il salvataggio alcuni registri volatili fino a quando non è di fuori di prologo di ingresso della funzione. È possibile registrare la voce UNWIND_INFO principale per la parte della funzione prima del codice raggruppato e configurando UNWIND_INFO con una dimensione diversa da zero di prologo, in cui i codici di rimozione in tale struttura riflettono i salvataggi dei registri non volatili. In tal caso, i codici di rimozione sono tutte le istanze di UWOP_SAVE_NONVOL. Un raggruppamento che consente di salvare i registri non volatili tramite un'operazione PUSH o modifica il registro RSP usando un'allocazione fissa aggiuntiva dello stack non è supportato.

Un elemento UNWIND_INFO con UNW_FLAG_CHAININFO set può contenere una voce RUNTIME_FUNCTION il cui elemento UNW_FLAG_CHAININFO dispone anche di impostare (senza Shrink). Saranno successivamente concatenati UNWIND_INFO puntatori arriverà a un elemento UNWIND_INFO con UNW_FLAG_CHAININFO cancellato; si tratta dell'elemento UNWIND_INFO principale, che fa riferimento al punto di ingresso di procedura effettiva.

## <a name="see-also"></a>Vedere anche

[Dati di rimozione per la gestione delle eccezioni, supporto del debugger](../build/unwind-data-for-exception-handling-debugger-support.md)