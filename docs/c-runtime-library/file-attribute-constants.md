---
title: "Costanti di attributi file | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "A_HIDDEN"
  - "_A_NORMAL"
  - "_A_SUBDIR"
  - "_A_RDONLY"
  - "A_NORMAL"
  - "A_SUBDIR"
  - "_A_SYSTEM"
  - "c.constants.file"
  - "_A_HIDDEN"
  - "A_RDONLY"
  - "_A_ARCH"
  - "A_ARCH"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_A_ARCH (costante)"
  - "_A_HIDDEN (costante)"
  - "_A_NORMAL (costante)"
  - "_A_RDONLY (costante)"
  - "_A_SUBDIR (costante)"
  - "_A_SYSTEM (costante)"
  - "costanti [C++], attributi dei file"
  - "costanti di attributi di file [C++]"
  - "file [C++], costanti di attributi di file"
ms.assetid: 8dc8ccb9-99f5-446b-876c-7ebecc2f764f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Costanti di attributi file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <io.h>  
```  
  
## Note  
 Queste costanti specificano gli attributi correnti del file o directory specificata dalla funzione.  
  
 Gli attributi sono rappresentati dalle seguenti costanti manifesto:  
  
 `_A_ARCH`  
 Archive.  Da impostare ogni volta che il file viene modificato e cancellato dal comando BACKUP.  Valore: 0x20  
  
 `_A_HIDDEN`  
 File nascosti.  Generalmente non visualizzato con il comando DIR, a meno che non venga utilizzata l'opzione \/AH.  Restituisce informazioni su file comuni oltre che su quelli con questo attributo.  Valore: 0x02  
  
 `_A_NORMAL`  
 Normale.  Il file può essere letto o scritto senza restrizioni.  Valore: 0x00  
  
 `_A_RDONLY`  
 Sola lettura.  Il file non può essere aperto per la scrittura e non può essere creato un file con lo stesso nome.  Valore: 0x01  
  
 `_A_SUBDIR`  
 Sottodirectory.  Valore: 0x10  
  
 `_A_SYSTEM`  
 File di sistema.  Generalmente non visualizzato con il comando DIR, a meno che non venga utilizzata l'opzione \/AS.  Valore: 0x04  
  
 Più costanti possono essere combinate con l'operatore OR \(&#124;\).  
  
## Vedere anche  
 [Funzioni di ricerca dei nomi file](../c-runtime-library/filename-search-functions.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)