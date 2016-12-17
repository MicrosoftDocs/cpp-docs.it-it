---
title: "File e flussi | Microsoft Docs"
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
  - "file [C++]"
  - "flussi"
ms.assetid: f61e712b-eac9-4c28-bb18-97c3786ef387
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# File e flussi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un programma comunica con l'ambiente di destinazione tramite la lettura e scrittura dei file.  Un file può essere:  
  
-   Un set di dati che è possibile leggere e scrivere più volte.  
  
-   Un flusso di byte generati da un programma \(ad esempio una pipeline\).  
  
-   Un flusso di byte ricevuti da una periferica o inviati a una periferica.  
  
 Gli ultimi due elementi sono file interattivi.  I file sono in genere i metodi principali tramite i quali interagire con un programma.  Manipolare tutti questi tipi di file per la maggior parte allo stesso modo, richiamando funzioni di libreria.  Includere l'intestazione standard STDIO.H per dichiarare la maggior parte di queste funzioni.  
  
 Prima di poter eseguire molte delle operazioni in un file, il file deve essere aperto.  Aprire un file comporta la sua associazione ad un flusso, una struttura di dati all'interno della libreria standard C che maschera molte differenze tra i file di vario genere.  La libreria mantiene lo stato di ogni flusso in un oggetto di tipo FILE.  
  
 L'ambiente di destinazione apre tre file prima dell'avvio del programma.  È possibile aprire un file chiamando la funzione di libreria [fopen, \_wfopen](../c-runtime-library/reference/fopen-wfopen.md) con due argomenti. \(La funzione `fopen` è deprecata, utilizzare invece [fopen\_s, \_wfopen\_s](../c-runtime-library/reference/fopen-s-wfopen-s.md)\). Il primo argomento è un nome di file.  Il secondo argomento è una stringa C che specifica:  
  
-   Se si desidera leggere i dati dal file o scrivere dati nel file o entrambe le cose.  
  
-   Se si desidera generare nuovi contenuti per il file \(o creare un file se in precedenza non esisteva\) oppure lasciare inalterato il contenuto esistente.  
  
-   Se si scrive in un file il contenuto esistente potrebbe venire alterato esistenti oppure potrebbe semplicemente aggiungere byte alla fine del file.  
  
-   Se si desidera modificare un flusso di testo o un flusso binario.  
  
 Una volta aperto il file con successo, è possibile determinare se il flusso è orientato ai byte \(un flusso di byte\) o orientato ai caratteri wide \(un flusso di caratteri wide\).  Un flusso inizialmente è privo di associazione.  Richiamare alcune funzioni sullo stream lo rendono orientato ai byte, mentre altre funzioni lo rendono orientato ai caratteri wide.  Una volta stabilito, un flusso mantiene il proprio orientamento fino alla chiusura della chiamata a [fclose](../c-runtime-library/reference/fclose-fcloseall.md) o a [freopen](../c-runtime-library/reference/freopen-wfreopen.md).  
  
 © 1989\-2001 da P.J.  Plauger e JIM Brodie.  Tutti i diritti sono riservati.  
  
## Vedere anche  
 [Flussi di testo e binari](../c-runtime-library/text-and-binary-streams.md)   
 [Flussi di byte e "wide"](../c-runtime-library/byte-and-wide-streams.md)   
 [Controllo dei flussi](../c-runtime-library/controlling-streams.md)   
 [Stati di flusso](../c-runtime-library/stream-states.md)