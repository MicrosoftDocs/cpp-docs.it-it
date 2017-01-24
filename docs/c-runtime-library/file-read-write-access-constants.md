---
title: "Costanti di accesso in lettura/scrittura file | Microsoft Docs"
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
  - "c.constants.file"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "costanti di accesso per lettura/scrittura file"
  - "costanti [C++], attributi dei file"
  - "accesso in lettura/scrittura file (costanti)"
  - "accesso in lettura/scrittura (costanti)"
  - "accesso in scrittura (costanti)"
ms.assetid: 56cd1d22-39a5-4fcf-bea2-7046d249e8ee
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Costanti di accesso in lettura/scrittura file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <stdio.h>  
```  
  
## Note  
 Queste costanti specificano il tipo di accesso \("a", "r", o "w"\) richiesto per il file.  Sia [modalità di conversione](../c-runtime-library/file-translation-constants.md) \("b" o "t"\) che [modalità di commit su disco](../c-runtime-library/commit-to-disk-constants.md) \("c" o "n"\) possono essere specificati con il tipo di accesso.  
  
 I tipi di accesso vengono descritti di seguito.  
  
 **"a"**  
 Verrà aperto per la scrittura alla fine del file \(aggiunta\); crea prima il file se non esiste.  Tutte le operazioni di scrittura si verificano alla fine del file.  Sebbene il puntatore del file può essere riposizionato utilizzando `fseek` o **rewind**, viene sempre spostato di nuovo alla fine del file prima dell'esecuzione di qualsiasi operazione di scrittura.  
  
 **"a\+"**  
 Uguale al precedente, ma consente la lettura.  
  
 **"r"**  
 Viene aperto per la lettura.  Se il file non esiste o non può essere trovato, la chiamata per aprire il file avrà esito negativo.  
  
 **"r\+"**  
 Viene aperto per la lettura e la scrittura.  Se il file non esiste o non può essere trovato, la chiamata per aprire il file avrà esito negativo.  
  
 **"w"**  
 Apre un file vuoto per la scrittura.  Se il file specificato esiste, il contenuto viene eliminato in modo permanente.  
  
 **"w\+"**  
 Apre un file vuoto per la lettura e la scrittura.  Se il file specificato esiste, il contenuto viene eliminato in modo permanente.  
  
 Quando il tipo di accesso "r\+", "w\+" o "a\+" viene specificato, sono consentite sia la lettura che la scrittura \(il file viene definito aperto per "l'aggiornamento"\).  Tuttavia, quando si passa da lettura e scrittura, devono esserci delle operazione intermedie `fflush`, `fsetpos`, `fseek` o **rewind**.  La posizione corrente può essere specificata per l'operazione `fseek` o `fsetpos`.  
  
## Vedere anche  
 [\_fdopen, \_wfdopen](../c-runtime-library/reference/fdopen-wfdopen.md)   
 [fopen, \_wfopen](../c-runtime-library/reference/fopen-wfopen.md)   
 [freopen, \_wfreopen](../c-runtime-library/reference/freopen-wfreopen.md)   
 [\_fsopen, \_wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)   
 [\_popen, \_wpopen](../c-runtime-library/reference/popen-wpopen.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)