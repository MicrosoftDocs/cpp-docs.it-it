---
title: "Procedura di rimozione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 82c5d0ca-70be-4d1a-a306-bfe01c29159f
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura di rimozione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La matrice dei codici di rimozione è disposta in ordine decrescente.  Quando si verifica un'eccezione, l'intero contesto viene archiviato dal sistema operativo in un record di contesto.  Viene quindi richiamata la logica per l'invio delle eccezioni, che esegue ripetutamente i seguenti passaggi per individuare un gestore eccezioni.  
  
1.  Viene utilizzato il RIP corrente archiviato nel record di contesto per cercare una voce RUNTIME\_FUNCTION nella tabella delle funzioni che descriva la funzione corrente, o una parte della funzione nel caso di voci UNWIND\_INFO concatenate.  
  
2.  Se non viene trovata alcuna voce nella tabella delle funzioni, significa che si tratta di una funzione foglia e RSP indirizzerà direttamente al puntatore di ritorno.  Il puntatore di ritorno in \[RSP\] viene archiviato nel contesto aggiornato, il registro RSP simulato viene incrementato di 8, quindi viene ripetuto il passaggio 1.  
  
3.  Se viene trovata una voce nella tabella delle funzioni, il RIP può trovarsi in tre aree: a\) in un epilogo, b\) nel prologo, c\) in un blocco di codice eventualmente nascosto da un gestore eccezioni.  
  
    -   Caso a\). Se il RIP si trova in un epilogo, significa che il controllo sta lasciando la funzione. In questo caso, non può esistere alcun gestore eccezioni associato a questa eccezione della funzione corrente e occorre continuare gli effetti dell'epilogo per calcolare il contesto della funzione chiamante.  Per determinare se il RIP si trova all'interno di un epilogo, viene esaminato il flusso di codice dal RIP in poi.  Se tale flusso di codice può essere associato alla parte finale di un epilogo valido, si tratta di un epilogo e la parte restante dell'epilogo viene simulata, aggiornando il record di contesto ogni volta che viene elaborata un'istruzione.  Al termine, viene ripetuto il passaggio 1.  
  
    -   Caso b\) Se il RIP si trova nel prologo, significa che il controllo non è entrato nella funzione. In questo caso, non può esistere alcun gestore eccezioni associato a questa eccezione della funzione corrente e occorre annullare gli effetti del prologo per calcolare il contesto della funzione chiamante.  Il RIP si trova all'interno del prologo se la distanza dall'inizio della funzione al RIP è minore o uguale alla dimensione del prologo codificata in UNWIND\_INFO.  Viene innanzitutto eseguita un'analisi all'indietro nella matrice dei codici di rimozione per individuare la prima voce con un offset minore o uguale all'offset del RIP dall'inizio della funzione, quindi vengono annullati gli effetti di tutti gli elementi restanti nella matrice dei codici di rimozione.  Viene quindi ripetuto il passaggio 1.  
  
    -   Caso c\). Se il RIP non si trova all'interno del prologo o di un epilogo e la funzione dispone di un gestore eccezioni \(l'attributo UNW\_FLAG\_EHANDLER è impostato\), viene chiamato il gestore specifico del linguaggio,  che esegue un'analisi dei dati e, se necessario, chiama le funzioni filtro.  Il gestore specifico del linguaggio può restituire che l'eccezione è stata gestita o che la ricerca deve essere continuata.  Può inoltre avviare direttamente una procedura di rimozione.  
  
4.  Se il gestore specifico del linguaggio restituisce uno stato di eccezione gestita, l'esecuzione viene continuata utilizzando il record di contesto originale.  
  
5.  Se non è disponibile alcun gestore specifico del linguaggio o il gestore restituisce uno stato di continuazione ricerca, il record di contesto deve essere reimpostato in base allo stato del chiamante.  A questo scopo, vengono esaminati tutti gli elementi della matrice dei codici di rimozione e vengono quindi annullati gli effetti di ciascun elemento.  Viene quindi ripetuto il passaggio 1.  
  
 In caso di voci UNWIND\_INFO concatenate, questi passaggi sono ancora validi.  L'unica differenza consiste nel fatto che, durante la scansione della matrice dei codici di rimozione per l'annullamento degli effetti del prologo, una volta raggiunta la fine della matrice, questa viene collegata alla struttura UNWIND\_INFO padre e viene quindi esaminata l'intera matrice dei codici di rimozione.  Questo collegamento viene proseguito finché non si arriva a una voce UNWIND\_INFO senza il flag UNW\_CHAINED\_INFO e si termina la scansione della matrice dei codici di rimozione.  
  
 L'insieme più piccolo di dati di rimozione è costituito da 8 byte  e rappresenta una funzione che ha allocato al massimo 128 byte dello stack ed ha eventualmente salvato un unico registro non volatile.  Corrisponde inoltre alla dimensione di una struttura UNWIND\_INFO concatenata relativa a un prologo di lunghezza zero senza codici di rimozione.  
  
## Vedere anche  
 [Gestione delle eccezioni \(x64\)](../build/exception-handling-x64.md)