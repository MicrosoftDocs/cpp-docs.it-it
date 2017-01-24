---
title: "Classe independent_bits_engine | Microsoft Docs"
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
  - "std.tr1.independent_bits_engine"
  - "std::tr1::independent_bits_engine"
  - "tr1::independent_bits_engine"
  - "tr1.independent_bits_engine"
  - "independent_bits_engine"
  - "random/std::tr1::independent_bits_engine"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "independent_bits_engine (classe)"
ms.assetid: 889e9a82-f457-49a7-9d2e-26e0fc3cd907
caps.latest.revision: 17
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe independent_bits_engine
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera una sequenza casuale di numeri con un numero specificato di bit tramite la creazione di nuovi pacchetti di bit dai valori restituiti dal motore di base corrispondente.  
  
## Sintassi  
  
```  
template<class Engine, size_t W, class UIntType> class independent_bits_engine;  
```  
  
#### Parametri  
 `Engine`  
 Tipo del motore di base.  
  
 `W`  
 **Dimensione parola**.  Dimensione, in bit, di ogni numero generato.  **Precondizione**: `0 < W ≤ numeric_limits<UIntType>::digits`  
  
 `UIntType`  
 Tipo di risultato Unsigned Integer.  Per informazioni sui tipi possibili, vedere [\<random\>](../standard-library/random.md).  
  
## Membri  
  
||||  
|-|-|-|  
|`independent_bits_engine::independent_bits_engine`|`independent_bits_engine::base`|`independent_bits_engine::discard`|  
|`independent_bits_engine::operator()`|`independent_bits_engine::base_type`|`independent_bits_engine::seed`|  
  
 Per altre informazioni sui membri del motore, vedere [\<random\>](../standard-library/random.md).  
  
## Note  
 Questa classe di modello descrive un *adattatore del motore* che produce valori tramite la creazione di nuovi pacchetti di bit dai valori restituiti dal rispettivo motore di base, ottenendo valori a `W` bit.  
  
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)