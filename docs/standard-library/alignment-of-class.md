---
title: "Classe alignment_of | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.alignment_of"
  - "std::tr1::alignment_of"
  - "alignment_of"
  - "std.alignment_of"
  - "std::alignment_of"
  - "type_traits/std::alignment_of"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "alignment_of (classe) [TR1]"
  - "alignment_of"
ms.assetid: 4141c59a-f94e-41c4-93fd-9ea578b27387
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe alignment_of
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene l'allineamento del tipo specificato.  Questo struct viene implementato in ermini di [alignof](../cpp/alignof-and-alignas-cpp.md).  Usare `alignof` direttamente quando è sufficiente eseguire una query di un valore di allineamento.  Usare alignment\_of quando è necessaria una costante integrale, ad esempio quando si esegue l'invio di tag.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct alignment_of;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 La query di tipo contiene il valore dell'allineamento del tipo `Ty`.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Classe aligned\_storage](../standard-library/aligned-storage-class.md)