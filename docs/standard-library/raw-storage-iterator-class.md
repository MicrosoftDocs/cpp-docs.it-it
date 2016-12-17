---
title: "Classe raw_storage_iterator | Microsoft Docs"
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
  - "std::raw_storage_iterator"
  - "raw_storage_iterator"
  - "std.raw_storage_iterator"
  - "memory/std::raw_storage_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "raw_storage_iterator (classe)"
ms.assetid: 6f033f15-f48e-452a-a326-647ea2cf346f
caps.latest.revision: 17
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe raw_storage_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe dell'adattatore fornita per consentire agli algoritmi di archiviare i rispettivi risultati nella memoria non inizializzata.  
  
## Sintassi  
  
```  
  
        template <class   
        OutputIterator,  
         class   
        Type>  
class raw_storage_iterator  
```  
  
#### Parametri  
 `OutputIterator`  
 Specifica l'iteratore di output per l'oggetto archiviato.  
  
 *Tipo*  
 Tipo di oggetto per cui viene allocata archiviazione.  
  
## Note  
 La classe descrive un iteratore di output che costruisce oggetti di tipo **Type** nella sequenza che genera.  Un oggetto della classe `raw_storage_iterator`\<**ForwardIterator**, **Type**\> accede all'archiviazione attraverso un oggetto iteratore in avanti della classe **ForwardIterator**, specificato quando si costruisce l'oggetto.  Per un oggetto che è il primo della classe **ForwardIterator**, l'espressione **&\*first** deve designare l'archiviazione non costruita per l'oggetto successivo \(di tipo**Type**\) nella sequenza generata.  
  
 Questa classe di adattatori viene usata quando è necessario separare allocazione di memoria e costruzione di oggetti.  L'oggetto `raw_storage_iterator` può essere usato per copiare oggetti nell'archiviazione non inizializzata, ad esempio la memoria allocata usando la funzione `malloc`.  
  
## Membri  
  
### Costruttori  
  
|||  
|-|-|  
|[raw\_storage\_iterator](../Topic/raw_storage_iterator::raw_storage_iterator.md)|Costruisce un iteratore di archiviazione non elaborato con un iteratore di output sottostante specificato.|  
  
### Typedef  
  
|||  
|-|-|  
|[element\_type](../Topic/raw_storage_iterator::element_type.md)|Fornisce un tipo che descrive un elemento da archiviare in un iteratore di archiviazione non elaborato.|  
|[iter\_type](../Topic/raw_storage_iterator::iter_type.md)|Fornisce un tipo che descrive un iteratore sottostante a un iteratore di archiviazione non elaborato.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\*](../Topic/raw_storage_iterator::operator*.md)|Operatore di dereferenziazione usato per implementare l'espressione dell'iteratore di output \*`ii` \= `x`.|  
|[operator \=](../Topic/raw_storage_iterator::operator=.md)|Operatore di assegnazione usato per implementare l'espressione dell'iteratore di archiviazione non elaborato \*`i` \= `x` per l'archiviazione in memoria.|  
|[operator\+\+](../Topic/raw_storage_iterator::operator++.md)|Operatori di incremento prefisso e incremento suffisso per iteratori di archiviazione non elaborati.|  
  
## Requisiti  
 **Intestazione:** \<memory\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)