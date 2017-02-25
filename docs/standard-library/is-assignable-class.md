---
title: "is_assignable (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_assignable"
  - "std.is_assignable"
  - "std::is_assignable"
  - "type_traits/std::is_assignable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_assignable"
ms.assetid: 53444287-c8be-4ad2-9487-a85c066a4f84
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# is_assignable (classe)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se un valore di `From` tipo può essere assegnato a un `To` tipo.  
  
## Sintassi  
  
```  
template <class To, class From>  
    struct is_assignable;  
```  
  
#### Parametri  
 Per  
 Il tipo di oggetto che riceve l'assegnazione.  
  
 Da  
 Il tipo di oggetto che fornisce il valore.  
  
## Note  
 L'espressione non valutata `declval<To>() = declval<From>()` deve essere corretto. Entrambi `From` e `To` devono essere tipi completi, `void`, o matrici di associazione sconosciuto.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)