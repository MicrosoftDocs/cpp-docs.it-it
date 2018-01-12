---
title: Procedura di rimozione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 82c5d0ca-70be-4d1a-a306-bfe01c29159f
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8b8caa2be1528c26cf374637f3d0357847721de9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="unwind-procedure"></a>Procedura di rimozione
Matrice di codice di rimozione è disposta in ordine decrescente. Quando si verifica un'eccezione, il contesto completo viene archiviato dal sistema operativo in un record di contesto. Viene quindi richiamata la logica di invio di eccezione che viene eseguita ripetutamente la procedura seguente per trovare un gestore di eccezioni.  
  
1.  Utilizzare il RIP corrente archiviato nel record di contesto per cercare una voce della tabella RUNTIME_FUNCTION che descrive la funzione corrente (o parte della funzione, nel caso di voci UNWIND_INFO concatenate).  
  
2.  Se non viene trovata alcuna voce nella tabella di funzione, è una funzione foglia e RSP indirizzerà direttamente il puntatore restituito. Il puntatore restituito in [RSP] viene archiviato nel contesto aggiornato, RSP simulato viene incrementato di 8 e il passaggio 1 viene ripetuto.  
  
3.  Se viene trovata una voce della tabella di funzione, RIP può trovarsi in tre aree) in un epilogo, b) nel prologo o c) nel codice che può essere coperta da un gestore di eccezioni.  
  
    -   Caso un') se RIP è all'interno di un epilogo, quindi controllo esce dalla funzione, non può essere presente alcun gestore di eccezioni associati a questa eccezione per questa funzione e gli effetti dell'epilogo devono proseguire per calcolare il contesto della funzione chiamante. Viene esaminato per determinare se il RIP è all'interno di un epilogo, il flusso di codice da RIP su. Se il flusso di codice può essere associato alla parte finale di un epilogo, quindi si trova in un epilogo, e la parte restante dell'epilogo viene simulata, con il record di contesto aggiornato come ogni istruzione viene elaborato. Successivamente, passaggio 1 viene ripetuto.  
  
    -   Caso b) se il RIP si trova nel prologo, quindi il controllo non ha immesso la funzione, non può essere presente alcun gestore di eccezioni associati a questa eccezione per questa funzione e gli effetti del prologo devono essere annullati per calcolare il contesto della funzione chiamante. Se la distanza dall'inizio della funzione al RIP è minore o uguale alla dimensione del prologo codificata in UNWIND_INFO, RIP è all'interno del prologo. Gli effetti del prologo sono svuotati, l'analisi in avanti di matrice di codici di rimozione per la prima voce con un offset minore o uguale all'offset del RIP dall'inizio della funzione, quindi annullare l'effetto di tutti gli elementi rimanenti nella matrice di codice di rimozione. Passaggio 1 viene quindi ripetuto.  
  
    -   Caso c) se RIP non è presente all'interno di un prologo o epilogo e la funzione dispone di un gestore di eccezioni (UNW_FLAG_EHANDLER è impostato), quindi viene chiamato il gestore specifico del linguaggio. Il gestore analizza i dati e chiama le funzioni necessarie filtro. Gestore specifico del linguaggio può restituire che è stata gestita l'eccezione o che è Impossibile continuare la ricerca. Anche possibile avviare direttamente un'operazione di rimozione.  
  
4.  Se il gestore specifico del linguaggio restituisce uno stato gestito, quindi continuare l'esecuzione con il record di contesto originale.  
  
5.  Se non c'è alcun gestore specifico del linguaggio o il gestore restituisce uno stato "continua ricerca", il record di contesto deve essere rimosso per lo stato del chiamante. Questa operazione viene eseguita dall'elaborazione di tutti gli elementi di matrice codice di rimozione, annullando l'effetto di ogni. Passaggio 1 viene quindi ripetuto.  
  
 In caso di rimozione concatenate, i passaggi di base sono ancora validi. L'unica differenza è che, durante l'enumerazione della matrice di codice di rimozione per rimuovere gli effetti del prologo, quando viene raggiunta la fine della matrice, viene quindi collegato all'UNWIND_INFO padre e viene esaminata la rimozione intera matrice dei codici. Questo tipo di collegamento continua finché non arriva a un UNWIND_INFO senza il flag UNW_CHAINED_INFO e di fine relativa matrice di codici di rimozione.  
  
 Il più piccolo set di dati di rimozione sono di 8 byte. Rappresenta una funzione che solo allocati 128 byte di stack o meno e possibilmente salvata un registro non volatile. Si tratta anche della dimensione di un concatenate struttura per un prologo di lunghezza zero con codici di rimozione non UNWIND_INFO.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni (x64)](../build/exception-handling-x64.md)