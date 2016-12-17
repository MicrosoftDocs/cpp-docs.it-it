---
title: "Classe rts_alloc | Microsoft Docs"
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
  - "stdext::rts_alloc"
  - "allocators/stdext::rts_alloc"
  - "rts_alloc"
  - "stdext.rts_alloc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rts_alloc (classe)"
ms.assetid: ab41bffa-83d1-4a1c-87b9-5707d516931f
caps.latest.revision: 19
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe rts_alloc
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello rts\_alloc descrive un [filtro](../standard-library/allocators-header.md) che contiene una matrice di istanze cache e determina quale istanza usare per l'allocazione e la deallocazione in fase di esecuzione piuttosto che in quella di compilazione.  
  
## Sintassi  
  
```  
template <class Cache> class rts_alloc  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Cache`|Il tipo delle istanze cache contenuto nell'array.  Può essere [Classe cache\_chunklist](../standard-library/cache-chunklist-class.md), [cache\_freelist](../standard-library/cache-freelist-class.md) o [cache\_suballoc](../standard-library/cache-suballoc-class.md).|  
  
## Note  
 Questa classe modello contiene più istanze allocator di blocchi e determina quale istanza usare per l'allocazione e la deallocazione in fase di esecuzione piuttosto che in quella di compilazione.  Viene usata con i compilatori e non può compilare la riassociazione.  
  
### Funzioni membro  
  
|||  
|-|-|  
|[allocate](../Topic/rts_alloc::allocate.md)|Alloca un blocco di memoria.|  
|[deallocate](../Topic/rts_alloc::deallocate.md)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|  
|[uguale a](../Topic/rts_alloc::equals.md)|Confronta due cache per stabilirne l'uguaglianza.|  
  
## Requisiti  
 **Intestazione:** \<allocators\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [ALLOCATOR\_DECL](../Topic/ALLOCATOR_DECL%20\(%3Callocators%3E\).md)   
 [\<allocators\>](../standard-library/allocators-header.md)