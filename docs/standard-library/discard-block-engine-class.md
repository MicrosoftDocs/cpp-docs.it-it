---
title: "Classe discard_block_engine | Microsoft Docs"
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
  - "tr1.discard_block_engine"
  - "std.tr1.discard_block_engine"
  - "std::tr1::discard_block_engine"
  - "random/std::tr1::discard_block_engine"
  - "discard_block_engine"
  - "tr1::discard_block_engine"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "discard_block_engine (classe)"
ms.assetid: aa84808e-38fe-4fa0-9f73-d5b9a653345b
caps.latest.revision: 18
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe discard_block_engine
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera una sequenza casuale, eliminando i valori restituiti dal motore di base corrispondente.  
  
## Sintassi  
  
```  
template<class Engine, size_t P, size_t R> class discard_block_engine;  
```  
  
#### Parametri  
 `Engine`  
 Tipo del motore di base.  
  
 `P`  
 **Dimensioni del blocco**.  Numero di valori in ogni blocco.  
  
 `R`  
 **Blocco usato**.  Numero di valori usati in ogni blocco.  Il resto viene scartato \(`P` \- `R`\).  **Precondizione**: `0 < R ≤ P`  
  
## Membri  
  
||||  
|-|-|-|  
|`discard_block_engine::discard_block_engine`|`discard_block_engine::base`|`discard_block_engine::discard`|  
|`discard_block_engine::operator()`|`discard_block_engine::base_type`|`discard_block_engine::seed`|  
  
 Per altre informazioni sui membri del motore, vedere [\<random\>](../standard-library/random.md).  
  
## Note  
 Questa classe modello descrive un adattatore del motore che produce valori scartando alcuni dei valori restituiti dal rispettivo motore di base.  
  
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)