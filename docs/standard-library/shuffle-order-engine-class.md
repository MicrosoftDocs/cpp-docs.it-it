---
title: "Classe shuffle_order_engine | Microsoft Docs"
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
  - "shuffle_order_engine"
  - "std.tr1.shuffle_order_engine"
  - "tr1::shuffle_order_engine"
  - "tr1.shuffle_order_engine"
  - "std::tr1::shuffle_order_engine"
  - "random/std::tr1::shuffle_order_engine"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "shuffle_order_engine (classe)"
ms.assetid: 0bcd1fb0-44d7-4e59-bb1b-4a9b673a960d
caps.latest.revision: 17
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe shuffle_order_engine
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera una sequenza casuale riordinando i valori restituiti dal motore di base corrispondente.  
  
## Sintassi  
  
```  
template<class Engine, size_t K>  
class shuffle_order_engine;  
```  
  
#### Parametri  
 `Engine`  
 Tipo del motore di base.  
  
 `K`  
 **Dimensioni tabella**. Numero di elementi nel buffer \(tabella\).**Precondizione**: `0 < K`  
  
## Membri  
  
||||  
|-|-|-|  
|`shuffle_order_engine::shuffle_order_engine`|`shuffle_order_engine::base`|`shuffle_order_engine::discard`|  
|`shuffle_order_engine::operator()`|`shuffle_order_engine::base_type`|`shuffle_order_engine::seed`|  
  
 Per ulteriori informazioni sui membri del motore, vedere [\<random\>](../standard-library/random.md).  
  
## Note  
 Questa classe di modelli descrive un *adattatore del motore* che produce valori riordinando i valori restituiti dal rispettivo motore di base. Ogni costruttore inserisce nella tabella interna i valori `K` restituiti dal motore di base e un elemento casuale è selezionato dalla tabella quando viene richiesto un valore.  
  
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)