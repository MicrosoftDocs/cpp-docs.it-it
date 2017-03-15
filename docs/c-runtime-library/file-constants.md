---
title: "Costanti file | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_O_EXCL"
  - "_O_RDWR"
  - "_O_APPEND"
  - "_O_RDONLY"
  - "_O_TRUNC"
  - "_O_CREAT"
  - "_O_WRONLY"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_O_APPEND (costante)"
  - "_O_CREAT (costante)"
  - "_O_EXCL (costante)"
  - "_O_RDONLY (costante)"
  - "_O_RDWR (costante)"
  - "_O_TRUNC (costante)"
  - "_O_WRONLY (costante)"
  - "O_APPEND (costante)"
  - "O_CREAT (costante)"
  - "O_EXCL (costante)"
  - "O_RDONLY (costante)"
  - "O_RDWR (costante)"
  - "O_TRUNC (costante)"
  - "O_WRONLY (costante)"
ms.assetid: c8fa5548-9ac2-4217-801d-eb45e86f2fa4
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Costanti file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <fcntl.h>  
  
```  
  
## Note  
 L'espressione intera formata da una o più di queste costanti determina il tipo di operazioni di lettura o scrittura consentite.  È formato dalla combinazione di uno o più costanti con una costante in modalità di conversione.  
  
 Le costanti di file sono le seguenti:  
  
 `_O_APPEND`  
 Riposiziona il puntatore a file alla fine del file prima di ogni operazione di scrittura.  
  
 `_O_CREAT`  
 Crea ed apre un nuovo file per la scrittura; ciò non ha effetto se esiste il file specificato dal *filename*.  
  
 `_O_EXCL`  
 Restituisce un errore se il file specificato da *filename* esiste.  Si applica solo se utilizzato con `_O_CREAT`.  
  
 `_O_RDONLY`  
 Apre il file in sola lettura; se questo flag viene fornito, né `_O_RDWR` né `_O_WRONLY` possono essere forniti.  
  
 `_O_RDWR`  
 Apre il file in lettura e scrittura; se questo flag viene fornito, né `_O_RDONLY` né `_O_WRONLY` possono essere forniti.  
  
 `_O_TRUNC`  
 Apre e tronca un file esistente a lunghezza zero; il file deve avere il permesso di scrittura.  Il contenuto del file viene eliminato.  Se questo flag viene fornito, non è possibile specificare `_O_RDONLY`.  
  
 `_O_WRONLY`  
 Apre il file in sola scrittura; se questo flag viene fornito, né `_O_RDONLY` né `_O_RDWR` possono essere forniti.  
  
## Vedere anche  
 [\_open, \_wopen](../c-runtime-library/reference/open-wopen.md)   
 [\_sopen, \_wsopen](../c-runtime-library/reference/sopen-wsopen.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)