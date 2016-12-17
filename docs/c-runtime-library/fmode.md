---
title: "_fmode | Microsoft Docs"
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
  - "fmode"
  - "_fmode"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "conversione di file [C++], modalità predefinita"
  - "fmode (funzione)"
  - "_fmode (funzione)"
ms.assetid: ac6df9eb-e5cc-4c54-aff3-373c21983118
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _fmode
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La variabile `_fmode` imposta la modalità predefinita per la conversione di un file binario o di testo.  Questa variabile globale è stata deprecata a favore di versioni funzionali più sicure, [\_get\_fmode](../c-runtime-library/reference/get-fmode.md) e [\_set\_fmode](../c-runtime-library/reference/set-fmode.md), che devono essere utilizzate al suo posto.  Viene dichiarato in Stdlib.h come segue.  
  
## Sintassi  
  
```  
extern int _fmode;  
```  
  
## Note  
 L'impostazione predefinita di `_fmode` è `_O_TEXT` per la conversione della modalità testuale.  `_O_BINARY` è l'impostazione per la modalità binaria.  
  
 È possibile modificare il valore di `_fmode` in tre modi:  
  
-   Collegamento con Binmode.obj.  In questo modo viene modificata la configurazione iniziale di `_fmode` a `_O_BINARY`, modificando tutti i file a meno di `stdin`, `stdout` e `stderr` da aprire in modalità binaria.  
  
-   Fare una chiamata a `_get_fmode` o a `_set_fmode` per ottenere o impostare rispettivamente la variabile globale di `_fmode`.  
  
-   Modificare il valore di `_fmode` impostandolo direttamente nel programma.  
  
## Vedere anche  
 [Variabili globali](../c-runtime-library/global-variables.md)   
 [\_get\_fmode](../c-runtime-library/reference/get-fmode.md)   
 [\_set\_fmode](../c-runtime-library/reference/set-fmode.md)