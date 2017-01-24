---
title: "Classe allocator_unbounded | Microsoft Docs"
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
  - "stdext::allocators::allocator_unbounded"
  - "allocator_unbounded"
  - "allocators/stdext::allocator_unbounded"
  - "allocators::allocator_unbounded"
  - "allocators/stdext::allocators::allocator_unbounded"
  - "allocators.allocator_unbounded"
  - "stdext.allocators.allocator_unbounded"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "allocator_unbounded (classe)"
ms.assetid: facbaea1-b320-4d99-96da-039b2642f352
caps.latest.revision: 17
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe allocator_unbounded
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene descritto un oggetto che gestisce l'allocazione di archiviazione e liberare per oggetti di tipo `Type` utilizzando una cache di tipo [cache\_freelist](../standard-library/cache-freelist-class.md) con una lunghezza gestita da [max\_unbounded](../standard-library/max-unbounded-class.md).  
  
## Sintassi  
  
```  
template <class Type>  
    class allocator_unbounded;  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Type`|Il tipo di elementi allocati da allocatore.|  
  
## Note  
 La macro di [ALLOCATOR\_DECL](../Topic/ALLOCATOR_DECL%20\(%3Callocators%3E\).md) passa questa classe come parametro di `name` la seguente istruzione: `ALLOCATOR_DECL(CACHE_FREELIST(stdext::allocators::max_unbounded), SYNC_DEFAULT, allocator_unbounded);`  
  
## Requisiti  
 allocatori \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<allocators\>](../standard-library/allocators-header.md)