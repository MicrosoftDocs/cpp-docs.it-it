---
title: "Flussi di testo e binari | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "flussi binari"
  - "flussi di testo"
ms.assetid: 57035e4a-955d-4e04-a560-fcf67ce68b4e
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Flussi di testo e binari
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un flusso di testo è costituito da uno o più righe di testo che possono essere scritte in una visualizzazione orientata al testo in modo da poter essere letto.  Durante la lettura da un flusso di testo, il programma legge un `NL` \(nuova riga\) alla fine di ogni riga.  Quando si scrive in un flusso di testo, il programma scrive un `NL` per segnalare la fine di una riga.  Per soddisfare le convenzioni diverse tra ambiente di destinazione per la rappresentazione di testo nei file, le funzioni di libreria possono alterare il numero e le rappresentazioni di caratteri trasmessi tra il programma e un flusso di testo.  
  
 Pertanto, il posizionamento all'interno di un flusso di testo è limitato.  È possibile ottenere l'indicatore di posizione corrente chiamando [fgetpos](../c-runtime-library/reference/fgetpos.md) o [ftell](../c-runtime-library/reference/ftell-ftelli64.md).  È possibile inserire un flusso di testo ad una posizione ottenuta in questo modo, o all'inizio o alla fine del flusso, chiamando [fsetpos](../c-runtime-library/reference/fsetpos.md) o [fseek](../c-runtime-library/reference/fseek-fseeki64.md).  Qualsiasi altra modifica della posizione potrebbe non essere supportata correttamente.  
  
 Per la massima portabilità, il programma non deve scrivere:  
  
-   File vuoti.  
  
-   Spazi alla fine di una riga.  
  
-   Righe parziali \(omettendo il `NL` alla fine di un file\).  
  
-   caratteri diversi dai caratteri stampabili, NL e `HT` \(tabulazione orizzontale\).  
  
 Seguendo queste regole, la sequenza dei caratteri letti da un flusso di testo \(ad esempio byte o caratteri multibyte\) corrisponderà alla sequenza di caratteri scritta nel flusso di testo quando si è creato il file.  In caso contrario, le funzioni di libreria possono rimuovere il file creato se il file è vuoto quando lo si chiude.  Oppure possono modificare o cancellare i caratteri scritti nel file.  
  
 Un flusso binario è costituito da uno o più byte di informazioni arbitrarie.  È possibile scrivere il valore memorizzato in un oggetto arbitrario in un flusso binario \(byte\-oriented\) e leggere esattamente ciò che è stato archiviato nell'oggetto quando è stato scritto.  Le funzioni di libreria non modificano i byte trasmessi tra il programma ed un flusso binario.  Tuttavia possono accodare un numero arbitrario di byte null al file scritto con un flusso binario.  Il programma deve gestire questi byte null aggiuntivi alla fine di ogni flusso binario.  
  
 Pertanto, il posizionamento in un flusso binario è ben definito, eccetto per il posizionamento relativo alla fine del flusso.  È possibile ottenere e modificare l'indicatore di posizione corrente del file allo stesso modo di un flusso di testo.  Inoltre, gli offset utilizzati da [ftell](../c-runtime-library/reference/ftell-ftelli64.md) e da [fseek](../c-runtime-library/reference/fseek-fseeki64.md) contano i byte dall'inizio del flusso \(ovvero al byte zero\), pertanto l'aritmetica basata su interi in questi offset restituisce risultati significativi.  
  
 Un flusso di byte considera un file come sequenza di byte.  Nel programma, il flusso è simile alla sequenza di byte stessa, ad eccezione delle possibili modifiche descritte in precedenza.  
  
## Vedere anche  
 [File e flussi](../c-runtime-library/files-and-streams.md)