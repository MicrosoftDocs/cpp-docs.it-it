---
title: "Classe cache_chunklist | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "allocators/stdext::cache_chunklist"
  - "stdext.cache_chunklist"
  - "stdext::cache_chunklist"
  - "cache_chunklist"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cache_chunklist (classe)"
ms.assetid: af19eccc-4ae7-4a34-bbb2-81e397424cb9
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# Classe cache_chunklist
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce [allocatore di blocco](../standard-library/allocators-header.md) che per allocare e liberare blocchi di memoria di una singola dimensione.  
  
## Sintassi  
  
```  
template <std::size_t Sz, std::size_t Nelts = 20> class cache_chunklist  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Sz`|Il numero di elementi nella matrice da allocare.|  
  
## Note  
 Questa classe modello utilizza `operator new` per allocare i blocchi di memoria non elaborata, suballocating blocchi per allocare la memoria per un blocco di memoria quando è necessario; archivia i blocchi di memoria eliminati in free list separate per ogni blocco e utilizza `operator delete` per rilasciare un blocco quando nessuno dei blocchi di memoria viene utilizzato.  
  
 Ciascun blocco di memoria utilizza i byte di `Sz` di memoria utilizzabile e di un puntatore al blocco a cui appartiene.  Ciascun blocco utilizza blocchi di memoria di `Nelts`, tre puntatori, un int e i dati che `operator new` e `operator delete` richiedono.  
  
### Costruttori  
  
|||  
|-|-|  
|[cache\_chunklist](../Topic/cache_chunklist::cache_chunklist.md)|Crea un oggetto di tipo `cache_chunklist`.|  
  
### Funzioni del membro  
  
|||  
|-|-|  
|[allocare](../Topic/cache_chunklist::allocate.md)|Alloca un blocco di memoria.|  
|[rilasciare](../Topic/cache_chunklist::deallocate.md)|Libera un numero specificato di oggetti dall'inizio di archiviazione a una posizione specificata.|  
  
## Requisiti  
 allocatori \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<allocators\>](../standard-library/allocators-header.md)