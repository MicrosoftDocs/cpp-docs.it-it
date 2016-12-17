---
title: "unchecked_uninitialized_copy | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.unchecked_uninitialized_copy"
  - "unchecked_uninitialized_copy"
  - "std::unchecked_uninitialized_copy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unchecked_uninitialized_copy (funzione)"
ms.assetid: 38568841-314e-446b-91d0-92cc231e3b3c
caps.latest.revision: 9
caps.handback.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "douge"
---
# unchecked_uninitialized_copy
Equivale a [uninitialized\_copy](../Topic/uninitialized_copy.md), ma consente l'utilizzo di un iteratore non verificato come iteratore di output quando viene definito \_SECURE\_SCL\=1. Questa funzione è definita nel [Spazio dei nomi stdext](../standard-library/stdext-namespace.md) dello spazio dei nomi.  
  
> [!NOTE]
>  Questo algoritmo è un'estensione Microsoft della libreria C\+\+ standard. Il codice implementato mediante questo algoritmo non sarà portabile.  
  
## Sintassi  
  
```  
template<class InputIterator, class ForwardIterator>  
   ForwardIterator unchecked_uninitialized_copy(  
      InputIterator _First,  
      InputIterator _Last,  
      ForwardIterator _Dest  
   );  
  
template<class InputIterator, class ForwardIterator, class Allocator>  
   ForwardIterator unchecked_uninitialized_copy(  
      InputIterator _First,  
      InputIterator _Last,  
      ForwardIterator _Dest,  
      Allocator& _Al  
   );  
```  
  
#### Parametri  
 `_First`  
 Iteratore di input che punta al primo elemento dell'intervallo di origine da copiare.  
  
 `_Last`  
 Iteratore di input che punta all'ultimo elemento dell'intervallo di origine da copiare.  
  
 `_Dest`  
 Iteratore in avanti che punta al primo elemento dell'intervallo di destinazione da copiare.  
  
 `_Al`  
 Classe Allocator da usare con questo oggetto.[vector::get\_allocator](../Topic/vector::get_allocator.md) Restituisce la classe dell'allocatore per l'oggetto.  
  
## Valore restituito  
 Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento dell'intervallo di destinazione che riceve la copia.  
  
## Note  
 Vedere [uninitialized\_copy](../Topic/uninitialized_copy.md) per un esempio di codice.  
  
 Per ulteriori informazioni sugli iteratori verificati, vedere [Iteratori verificati](../standard-library/checked-iterators.md).  
  
## Requisiti  
 **Intestazione:** \<memory\>  
  
 **Spazio dei nomi:** stdext