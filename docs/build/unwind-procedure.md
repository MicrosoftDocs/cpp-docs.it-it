---
title: Procedura di rimozione
ms.date: 11/04/2016
ms.assetid: 82c5d0ca-70be-4d1a-a306-bfe01c29159f
ms.openlocfilehash: 2d68a5c3fb1cc2d18b587d1419b0103d02b35a7f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50523104"
---
# <a name="unwind-procedure"></a>Procedura di rimozione

Matrice di codice di rimozione è disposta in ordine decrescente. Quando si verifica un'eccezione, il contesto completo verrà archiviato dal sistema operativo in un record di contesto. Viene quindi richiamata la logica di invio di eccezione, che viene eseguita ripetutamente la procedura seguente per trovare un gestore di eccezioni.

1. Usare RIP archiviato nel record del contesto corrente per cercare una voce della tabella RUNTIME_FUNCTION che descrive la funzione corrente (o parte della funzione, nel caso di voci UNWIND_INFO concatenate).

1. Se viene trovata alcuna voce di tabella (funzione), quindi è una funzione foglia e RSP riguarderanno direttamente il puntatore restituito. Il puntatore restituito in [RSP] viene archiviato nel contesto aggiornato, RSP simulato viene incrementato di 8 e il passaggio 1 viene ripetuto.

1. Se viene trovata una voce della tabella (funzione), RIP possono trovarsi in tre aree a) in un epilogo, b) nel prologo o c) nel codice che può essere nascosto da un gestore di eccezioni.

   - Case un) se RIP è all'interno di un epilogo, quindi controllo esce dalla funzione, non può essere presente alcun gestore di eccezioni associati a questa eccezione per questa funzione e gli effetti dell'epilogo devono proseguire per calcolare il contesto della funzione chiamante. Viene esaminato per determinare se RIP si trova all'interno di un epilogo, il flusso di codice da RIP in. Se tale flusso di codice può essere associato alla parte finale di un epilogo, quindi si trova in un epilogo, e viene simulata la parte rimanente dell'epilogo, con il record di contesto aggiornato come ogni istruzione viene elaborato. Al termine, il passaggio 1 viene ripetuto.

   - Caso b) se RIP si trova all'interno di prologo, controllo non ha immesso la funzione, non può essere presente alcun gestore di eccezioni associati a questa eccezione per questa funzione e gli effetti del prologo devono essere annullati per calcolare il contesto della funzione chiamante. RIP rientra il prologo della query se la distanza dall'inizio della funzione a RIP è minore o uguale alla dimensione del prologo con codificata in UNWIND_INFO. Gli effetti del prologo sono svuotati l'analisi in avanti attraverso la matrice di codici di rimozione per la prima voce con un offset inferiore o uguale all'offset del RIP dall'inizio della funzione e quindi annullare l'effetto di tutti gli elementi rimanenti nella matrice di codice di rimozione. Passaggio 1 viene quindi ripetuto.

   - Caso c) se RIP non all'interno di un prologo o epilogo e la funzione con un gestore di eccezioni (UNW_FLAG_EHANDLER è impostato), quindi viene chiamato il gestore specifico del linguaggio. Il gestore esegue l'analisi dei dati e chiama filtro funzioni come appropriato. Gestore specifico del linguaggio può restituire che venisse gestita l'eccezione o che la ricerca deve essere ripreso. Anche possibile avviare direttamente un'operazione di rimozione.

1. Se il gestore specifico del linguaggio restituisce uno stato gestito, l'esecuzione viene continuata utilizzando i record di contesto originale.

1. Se non c'è alcun gestore specifico del linguaggio o il gestore restituisce uno stato "continua ricerca", il record di contesto deve essere reimpostato nello stato del chiamante. Questa operazione viene eseguita attraverso l'elaborazione di tutti gli elementi di matrice codice di rimozione, annullando l'effetto della ognuno. Passaggio 1 viene quindi ripetuto.

In caso di rimozione concatenate, le operazioni di base sono ancora validi. L'unica differenza è che, mentre walking la matrice di codice di rimozione per rimuovere gli effetti del prologo, quando viene raggiunta la fine della matrice, viene quindi collegato UNWIND_INFO padre e la matrice di codice di rimozione intero trovata viene esaminata. Questo tipo di collegamento continua fino a quando in arrivo presso un UNWIND_INFO senza il flag UNW_CHAINED_INFO e completare la matrice di codici di rimozione.

Il set più piccolo di dati di rimozione è di 8 byte. Rappresenta una funzione che solo allocati 128 byte di stack o meno e possibilmente salvato un registro non volatile. Si tratta anche le dimensioni di un concatenate struttura di informazioni per un prologo di lunghezza zero con nessun codici di rimozione di rimozione.

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni (x64)](../build/exception-handling-x64.md)