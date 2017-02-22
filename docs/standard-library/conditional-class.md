---
title: "Classe conditional | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::conditional"
  - "std.tr1.conditional"
  - "conditional"
  - "std.conditional"
  - "std::conditional"
  - "type_traits/std::conditional"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "conditional (classe) [TR1]"
  - "conditional"
ms.assetid: ece9f539-fb28-4e26-a79f-3264bc984493
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe conditional
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Seleziona uno dei tipi, a seconda della condizione specificata.  
  
## Sintassi  
  
```  
template <bool B, class T1, class T2>  
    struct conditional;  
  
template <bool _Test, class _T1, class _T2>  
    using conditional_t = typename conditional<_Test, _T1, _T2>::type;  
```  
  
#### Parametri  
 `B`  
 Valore che determina il tipo selezionato.  
  
 `T1`  
 Il risultato di tipo quando B è true.  
  
 `T2`  
 Il risultato di tipo quando B è false.  
  
## Note  
 L'oggetto typedef `conditional<B, T1, T2>::type` del membro del modello restituisce `T1` quando `B` restituisce `true` e restituisce `T2` quando `B` restituisce `false`.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)