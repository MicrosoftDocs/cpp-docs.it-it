---
title: "is_trivially_move_constructible (classe) | Microsoft Docs"
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
  - "is_trivially_move_constructible"
  - "std.is_trivially_move_constructible"
  - "std::is_trivially_move_constructible"
  - "type_traits/std::is_trivially_move_constructible"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_trivially_move_constructible"
ms.assetid: 740bdec7-65e5-47b3-b94f-a2479ceac3ec
caps.latest.revision: 11
caps.handback.revision: 1
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_trivially_move_constructible (classe)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo ha un costruttore di spostamento semplice.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_trivially_move_constructible;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` è una classe che ha un costruttore di spostamento semplice; in caso contrario, contiene false.  
  
 Un costruttore di spostamento per una classe `Ty` è piuttosto semplice se:  
  
 viene dichiarato in modo implicito  
  
 i tipi di parametro sono equivalenti a quelli di una dichiarazione implicita  
  
 la classe `Ty` non ha funzioni virtuali  
  
 la classe `Ty` non ha basi virtuali  
  
 la classe non ha alcun membro dati non statici volatili  
  
 tutte le basi dirette della classe `Ty` hanno costruttori di spostamento semplici  
  
 le classi di tutti i membri dati non statici del tipo di classe hanno costruttori di spostamento semplici  
  
 le classi di tutti i membri dati non statici di tipo matrice della classe hanno costruttori di spostamento semplici  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)