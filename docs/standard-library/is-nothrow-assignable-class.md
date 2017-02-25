---
title: "is_nothrow_assignable (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "is_nothrow_assignable"
  - "std.is_nothrow_assignable"
  - "std::is_nothrow_assignable"
  - "type_traits/std::is_nothrow_assignable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_nothrow_assignable"
ms.assetid: aa3aca92-308b-4b1d-b3f3-c54216c48fe7
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# is_nothrow_assignable (classe)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se un valore di `From` tipo può essere assegnato a `To` tipo e l'assegnazione è noto per non generare.  
  
## Sintassi  
  
```  
template <class To, class From>   
    struct is_nothrow_assignable;  
```  
  
#### Parametri  
 Per  
 Il tipo di oggetto che riceve l'assegnazione.  
  
 Da  
 Il tipo di oggetto che fornisce il valore.  
  
## Note  
 L'espressione `declval<To>() = declval<From>()` deve essere corretto e deve essere noto al compilatore di non generare. Entrambi `From` e `To` devono essere tipi completi, `void`, o matrici di associazione sconosciuto.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)