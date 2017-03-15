---
title: "I/O file modalit&#224; testo e binaria | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.io"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "accesso binario"
  - "accesso binario, I/O file modalità binaria"
  - "file [C++], funzioni aperte"
  - "funzioni [CRT], accesso ai file"
  - "I/O [CRT], binaria"
  - "I/O [CRT], testo (file)"
  - "I/O [CRT], modalità di conversione"
  - "testo (file), I/O"
  - "modalità di conversione (I/O file)"
  - "conversione, modalità"
ms.assetid: 3196e321-8b87-4609-b302-cd6f3c516051
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# I/O file modalit&#224; testo e binaria
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le operazioni di I\/O dei file sono espresse tramite due modalità di conversione, testo o binario, in base alla modalità in cui il file è aperto.  I file di dati in genere vengono elaborati in modalità testo.  Per controllare la modalità di conversione del file, è possibile:  
  
-   Mantenere il valore predefinito corrente e specificare la modalità alternativa solo quando i file selezionati vengono aperti.  
  
-   Utilizzare la funzione [\_set\_fmode](../c-runtime-library/reference/set-fmode.md) per modificare la modalità predefinita per i file aperti di recente.  Utilizzare [\_get\_fmode](../c-runtime-library/reference/get-fmode.md) per trovare la modalità predefinita corrente.  L'impostazione predefinita iniziale è la modalità di testo \(`_O_TEXT`\).  
  
-   Modificare la modalità di conversione predefinita direttamente impostando la variabile globale [\_fmode](../c-runtime-library/fmode.md) nel programma.  La funzione `_set_fmode` imposta il valore della variabile, ma può anche essere impostata direttamente.  
  
 Quando si chiama una funzione che apre dei file come [\_open](../c-runtime-library/reference/open-wopen.md), [fopen](../c-runtime-library/reference/fopen-wfopen.md), [fopen\_s](../c-runtime-library/reference/fopen-s-wfopen-s.md), [freopen](../c-runtime-library/reference/freopen-wfreopen.md), [freopen\_s](../c-runtime-library/reference/freopen-s-wfreopen-s.md), [\_fsopen](../c-runtime-library/reference/fsopen-wfsopen.md) o [\_sopen\_s](../c-runtime-library/reference/sopen-s-wsopen-s.md), è possibile eseguire l'override dell'impostazione predefinita corrente di `_fmode` specificando l'argomento appropriato per la funzione [\_set\_fmode](../c-runtime-library/reference/set-fmode.md).  I flussi `stdin`, `stdout` e `stderr` verranno sempre aperti in modalità testo per impostazione predefinita; è inoltre possibile effettuare l'override di questa impostazione predefinita quando si apre uno di questi file.  Utilizzare [\_setmode](../c-runtime-library/reference/setmode.md) per modificare la modalità di conversione utilizzando il descrittore del file dopo che il file viene aperto.  
  
## Vedere anche  
 [Input e output](../c-runtime-library/input-and-output.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)