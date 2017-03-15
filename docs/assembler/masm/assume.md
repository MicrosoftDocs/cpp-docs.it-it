---
title: "ASSUME | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ASSUME"
  - "_assume_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ASSUME directive"
ms.assetid: cd162070-aee9-4c65-babc-005c6cc73d7c
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# ASSUME
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente il controllo degli errori per i valori del registro.  
  
## Sintassi  
  
```  
  
      ASSUME segregister:name [[, segregister:name]]...  
ASSUME dataregister:type [[, dataregister:type]]...  
ASSUME register:ERROR [[, register:ERROR]]...  
ASSUME [[register:]] NOTHING [[, register:NOTHING]]...  
```  
  
## Note  
 dopo `ASSUME` viene attuato, le espressioni di controllo dell'assemblatore per le modifiche ai valori dei registri specificati.  **ERRORE** genera un errore se il log viene utilizzato.  **NIENTE** rimuove il controllo degli errori di log.  È possibile combinare più tipi diversi di presupposti in un'istruzione.  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)