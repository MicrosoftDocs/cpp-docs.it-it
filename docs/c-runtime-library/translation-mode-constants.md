---
title: "Costanti modalit&#224; di conversione | Microsoft Docs"
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
  - "_O_BINARY"
  - "_O_TEXT"
  - "_O_RAW"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_O_BINARY (costante)"
  - "_O_RAW (costante)"
  - "_O_TEXT (costante)"
  - "O_BINARY (costante)"
  - "O_RAW (costante)"
  - "O_TEXT (costante)"
  - "costanti di conversione"
  - "modalità di conversione (I/O file)"
  - "conversione, costanti"
  - "conversione, modalità"
ms.assetid: a5993bf4-7e7a-47f9-83c3-e46332b85579
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Costanti modalit&#224; di conversione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <fcntl.h>  
  
```  
  
## Note  
 Le costanti del manifest `_O_BINARY` e `_O_TEXT` determinano la modalità di traduzione per i file \(`_open` e `_sopen`\) o la modalità di traduzione per i flussi \(`_setmode`\).  
  
 Di seguito sono elencati i valori consentiti:  
  
 `_O_TEXT`  
 Apre un file in modalità testo \(convertito\).  I Carriage return–line feed \(CR\-LF\) vengono convertiti in un unico singolo avanzamento riga su un input.  I caratteri di avanzamento riga vengono convertiti in combinazioni di CR\-LF su output.  Inoltre, CTRL\+Z viene interpretato nell'input come carattere di fine file.  Nei file aperti per la lettura\/scrittura, `fopen` verifica la presenza della combinazione CTRL\+Z alla fine del file e la rimuove, se possibile.  Questa operazione viene eseguita perché l'utilizzo delle funzioni `fseek` e `ftell` per spostarsi all'interno di un file che termina con CTRL\+Z può causare un comportamento non corretto di `fseek` in prossimità della fine del file.  
  
 `_O_BINARY`  
 Apre un file in modalità binaria \(non tradotta\).  Le conversioni in precedenza vengono eliminate.  
  
 `_O_RAW`  
 Uguale a `_O_BINARY`.  Supportato per la compatibilità con C 2.0.  
  
 \(Per ulteriori informazioni, consultare [File I\/O modalità testo e binaria](../c-runtime-library/text-and-binary-mode-file-i-o.md) e [Traduzione di File](../c-runtime-library/file-translation-constants.md)\).  
  
## Vedere anche  
 [\_open, \_wopen](../c-runtime-library/reference/open-wopen.md)   
 [\_pipe](../c-runtime-library/reference/pipe.md)   
 [\_sopen, \_wsopen](../c-runtime-library/reference/sopen-wsopen.md)   
 [\_setmode](../c-runtime-library/reference/setmode.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)