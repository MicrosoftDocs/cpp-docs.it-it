---
title: "Controllo dei flussi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Controlling Streams"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controllo di flussi"
  - "flussi"
  - "flussi, controllo"
ms.assetid: 267e9013-9afc-45f6-91e3-ca093230d9d9
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Controllo dei flussi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[fopen](../c-runtime-library/reference/fopen-wfopen.md) restituisce l'indirizzo di un oggetto di tipo `FILE`.  Si utilizza questo indirizzo come argomento `stream` in diverse funzioni di libreria per eseguire diverse operazioni in un file aperto.  Per un flusso di byte, qualsiasi input è espresso come se ogni carattere venga letto chiamando [fgetc](../c-runtime-library/reference/fgetc-fgetwc.md) e tutto l'output è espresso come se ogni carattere sia scritto chiamando [fputc](../c-runtime-library/reference/fputc-fputwc.md).  Per un flusso di caratteri wide, qualsiasi input è espresso come se ogni carattere venga letto chiamando [fgetwc](../c-runtime-library/reference/fgetc-fgetwc.md) e tutto l'output è espresso come se ogni carattere sia scritto chiamando [fputwc](../c-runtime-library/reference/fputc-fputwc.md).  
  
 È possibile chiudere un file chiamando [fclose](../c-runtime-library/reference/fclose-fcloseall.md), dopo questa operazione l'indirizzo dell'oggetto di `FILE` non sarà valido.  
  
 Un oggetto `FILE` memorizza lo stato di un flusso, tra cui:  
  
-   Un indicatore di errore impostato ad un valore diverso da zero da una funzione che rileva un errore in lettura o in scrittura.  
  
-   Un indicatore di fine file impostato ad un valore diverso da zero da una funzione che rileva la fine di un file in lettura.  
  
-   Un indicatore di posizione specifica il byte successivo nel flusso da leggere o scrivere, se il file può supportare il posizionamento delle richieste.  
  
-   Uno [stato del flusso](../c-runtime-library/stream-states.md) specifica se il flusso accetterà letture e\/o scritture e se il flusso sia non associato, orientato ai byte, o orientato ai caratteri wide.  
  
-   Uno stato di conversione mantiene lo stato di ogni carattere multibyte generalizzato parzialmente generato o assemblato, nonché ogni stato di spostamento per la sequenza di byte nel file\).  
  
-   Un buffer di file specifica l'indirizzo e la dimensione di un oggetto array che le funzioni di libreria possono utilizzare per migliorare le prestazioni delle operazioni di lettura e scrittura nel flusso.  
  
 Non alterare nessun valore memorizzato in un oggetto `FILE` o in un buffer di file designato per essere utilizzato con tale oggetto.  Non è possibile copiare un oggetto di `FILE` e utilizzare in modo portabile l'indirizzo della copia come argomento di `stream` di una funzione di libreria.  
  
## Vedere anche  
 [File e flussi](../c-runtime-library/files-and-streams.md)