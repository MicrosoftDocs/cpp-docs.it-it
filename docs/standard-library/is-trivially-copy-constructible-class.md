---
title: "Classe is_trivially_copy_constructible | Microsoft Docs"
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
  - "is_trivially_copy_constructible"
  - "std.is_trivially_copy_constructible"
  - "std::is_trivially_copy_constructible"
  - "type_traits/std::is_trivially_copy_constructible"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_trivially_copy_constructible"
ms.assetid: 4274cef5-afdd-4f2d-bc83-7562e7944ddf
caps.latest.revision: 24
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe is_trivially_copy_constructible
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo ha un costruttore di copia semplice.  
  
## Sintassi  
  
```  
template<class T>  
    struct is_trivially_copy_constructible;  
```  
  
#### Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del predicato di tipo contiene true se il tipo `T` è una classe che ha un costruttore di copia semplice; in caso contrario, contiene false.  
  
 Un costruttore di copia per una classe `T` è semplice se si è dichiarato in modo implicito, la classe `T` non dispone di funzioni virtuali o basi virtuali, tutte le basi dirette della classe `T` dispongono di costruttori di copia semplice, le classi di tutti i membri di dati non statici di tipo classe dispongono di costruttori di copia semplice e le classi di tutti i membri di dati non statici di tipo matrice di classe dispongono di costruttori di copia semplice.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)