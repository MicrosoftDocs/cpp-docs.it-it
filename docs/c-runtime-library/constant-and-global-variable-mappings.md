---
title: "Mapping costanti e variabili globali | Microsoft Docs"
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
  - "_tenviron"
  - "_TEOF"
  - "_tfinddata_t"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_tenviron (funzione)"
  - "_TEOF (tipo)"
  - "_tfinddata_t (funzione)"
  - "mapping testo generico"
  - "tenviron (funzione)"
  - "TEOF (tipo)"
  - "tfinddatat (funzione)"
ms.assetid: 3af4fd3e-9ed5-4ed9-96fd-7031e5126fd1
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Mapping costanti e variabili globali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le costanti di testo generico, le variabili globali e i mapping di tipo standard sono definiti in TCHAR.H e dipendono dal fatto che la costante `_UNICODE` o `_MBCS` sia stato definita nel programma.  
  
### Mapping di costanti di testo generico e di variabili globali  
  
|Testo generico \- nome oggetto|SBCS \(\_UNICODE, \_MBCS non definito\)|\_MBCS definito|\_UNICODE definito|  
|------------------------------------|---------------------------------------------|---------------------|------------------------|  
|`_TEOF`|`EOF`|`EOF`|`WEOF`|  
|`_tenviron`|`_environ`|`_environ`|`_wenviron`|  
|`_tpgmptr`|`_pgmptr`|`_pgmptr`|`_wpgmptr`|  
  
## Vedere anche  
 [Mapping testo generico](../c-runtime-library/generic-text-mappings.md)   
 [Mapping dei tipi di dati](../c-runtime-library/data-type-mappings.md)   
 [Mapping di routine](../c-runtime-library/routine-mappings.md)   
 [Programma di testo generico di esempio](../c-runtime-library/a-sample-generic-text-program.md)   
 [Utilizzo di mapping testo generico](../c-runtime-library/using-generic-text-mappings.md)