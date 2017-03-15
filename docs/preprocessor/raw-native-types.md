---
title: "raw_native_types | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "raw_native_types"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "raw_native_types (attributo)"
ms.assetid: 9f38daa8-8dc0-46a5-aff9-f1ff9c1e6f48
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# raw_native_types
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Disabilita l'utilizzo delle classi di supporto COM nelle funzioni wrapper di alto livello e applica l'utilizzo dei tipi di dati di basso livello.  
  
## Sintassi  
  
```  
raw_native_types  
```  
  
## Note  
 Per impostazione predefinita, i metodi di gestione degli errori di livello elevato [\_bstr\_t](../cpp/bstr-t-class.md) e [\_variant\_t](../cpp/variant-t-class.md) utilizzano le classi di supporto COM, anziché i tipi di dati **VARIANT** e `BSTR` e i puntatori all'interfaccia COM non elaborati.  Tali classi includono i dettagli di allocazione e deallocazione dell'archiviazione di memoria per questi tipi di dati e semplificano notevolmente il cast dei tipi e le operazioni di conversione.  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)