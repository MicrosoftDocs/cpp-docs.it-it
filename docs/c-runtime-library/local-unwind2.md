---
title: "_local_unwind2 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_local_unwind2"
apilocation: 
  - "msvcr110_clr0400.dll"
  - "msvcrt.dll"
  - "msvcr100.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_local_unwind2"
  - "local_unwind2"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_local_unwind2 (funzione)"
  - "local_unwind2 (funzione)"
ms.assetid: 44f1fa82-e01e-490f-a6e6-18fc6811c28c
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _local_unwind2
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Funzione CRT interna.  Esegue tutti i gestori di terminazione elencati nella tabella di ambito indicata.  
  
## Sintassi  
  
```  
void _local_unwind2(    PEXCEPTION_REGISTRATION xr,    int stop );  
```  
  
#### Parametri  
 \[in\] `xr`  
 Un record di registrazione associato a una tabella di ambito.  
  
 \[in\] `stop`  
 Il livello lessicale che indica dove `_local_unwind2` verrà arrestata.  
  
## Note  
 Questo metodo viene usato solo dall'ambiente di runtime.  Non chiamare il metodo nel proprio codice.  
  
 Quando questo metodo esegue i gestori di terminazione, inizia al livello lessicale corrente e procede tra i livelli lessicali fino al raggiungimento del livello indicato da `stop`.  Non esegue i gestori di terminazione al livello che viene indicato da `stop`.  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)