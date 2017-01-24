---
title: "I/O a basso livello | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
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
  - "C"
helpviewer_keywords: 
  - "handle di file [C++]"
  - "handle di file [C++], funzioni I/O"
  - "I/O [CRT], funzioni"
  - "I/O [CRT], basso livello"
  - "routine I/O a basso livello"
ms.assetid: 53e11bdd-6720-481c-8b2b-3a3a569ed534
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# I/O a basso livello
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Queste funzioni richiamano direttamente il sistema operativo per operazioni di livello inferiore rispetto a quelle fornite dallo stream I\/O.  Le chiamate a basso livello di input e output non vengono memorizzate nel buffer o nei dati formattati.  
  
 Le routine di basso livello possono accedere ai flussi standard aperti all'avvio del programma utilizzando i seguenti descrittori di file predefiniti.  
  
|Stream|Descrittore di file|  
|------------|-------------------------|  
|`stdin`|0|  
|`stdout`|1|  
|`stderr`|2|  
  
 Le routine di basso livello di I\/O impostano la variabile globale [errno](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) quando si verifica un errore.  È necessario importare STDIO.H quando si utilizzano le funzioni di basso livello solo se il programma richiede una costante che sia definita in STDIO.H, come l'indicatore di fine file \(`EOF`\).  
  
### Funzioni I\/O di basso livello  
  
|Funzione|Utilizzo|  
|--------------|--------------|  
|[\_close](../c-runtime-library/reference/close.md)|Chiudere un file|  
|[\_commit](../c-runtime-library/reference/commit.md)|Svuotare un file su disco|  
|[\_creat, \_wcreat](../c-runtime-library/reference/creat-wcreat.md)|Creare un file|  
|[\_dup](../c-runtime-library/reference/dup-dup2.md)|Ritorna il descrittore del file successivo disponibile per il file specificato|  
|[\_dup2](../c-runtime-library/reference/dup-dup2.md)|Creare il secondo descrittore per il file specificato|  
|[\_eof](../c-runtime-library/reference/eof.md)|Test per EOF|  
|[\_lseek, \_lseeki64](../c-runtime-library/reference/lseek-lseeki64.md)|Riposizionare il puntatore del file nel percorso specificato|  
|[\_open, \_wopen](../c-runtime-library/reference/open-wopen.md)|Apri file|  
|[\_read](../c-runtime-library/reference/read.md)|Leggere dati da un file|  
|[\_sopen, \_wsopen](../c-runtime-library/reference/sopen-wsopen.md), [\_sopen\_s, \_wsopen\_s](../c-runtime-library/reference/sopen-s-wsopen-s.md)|Aprire un file per la condivisione|  
|[\_tell, \_telli64](../c-runtime-library/reference/tell-telli64.md)|Ottenere la posizione corrente del puntatore del file|  
|[\_umask](../c-runtime-library/reference/umask.md), [\_umask\_s](../c-runtime-library/reference/umask-s.md)|Impostare la maschera di autorizzazione del file|  
|[\_write](../c-runtime-library/reference/write.md)|Scrivere dati nel file|  
  
 `_dup` e `_dup2` in genere vengono utilizzati per associare i descrittori del file predefiniti con diversi file.  
  
## Vedere anche  
 [Input e output](../c-runtime-library/input-and-output.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)   
 [Chiamate di sistema](../c-runtime-library/system-calls.md)