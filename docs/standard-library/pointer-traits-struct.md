---
title: Struct pointer_traits | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- memory/std::pointer_traits::element_type
- memory/std::pointer_traits::pointer
- memory/std::pointer_traits
- memory/std::pointer_traits::difference_type
- memory/std::pointer_traits::rebind
- xmemory0/std::pointer_traits::element_type
- xmemory0/std::pointer_traits::pointer
- xmemory0/std::pointer_traits
- xmemory0/std::pointer_traits::difference_type
- xmemory0/std::pointer_traits::rebind
dev_langs:
- C++
ms.assetid: 545aecf1-3561-4859-8b34-603c079fe1b3
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 3a5633fa4c9f45629d655edf922d40b02b68aaca
ms.lasthandoff: 02/24/2017

---
# <a name="pointertraits-struct"></a>Struct pointer_traits
Fornisce le informazioni necessarie per un oggetto della classe modello `allocator_traits` per descrivere un allocatore con il tipo di puntatore `Ptr`.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <class Ptr>
struct pointer_traits;
```  
  
## <a name="remarks"></a>Note  
 Ptr può essere un puntatore non elaborato di tipo `Ty *` o una classe con le proprietà seguenti.  
```  
struct Ptr
   { // describes a pointer type usable by allocators
   typedef Ptr pointer;
   typedef T1 element_type; // optional
   typedef T2 difference_type; // optional
   template <class Other>
   using rebind = typename Ptr<Other, Rest...>; // optional
   static pointer pointer_to(element_type& obj);
   // optional
   };  
```
### <a name="typedefs"></a>Typedef  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`typedef T2 difference_type`|Il tipo `T2` è `Ptr::difference_type` se quel tipo esiste; in caso contrario `ptrdiff_t`. Se `Ptr` è un puntatore non elaborato, il tipo è `ptrdiff_t`.|  
|`typedef T1 element_type`|Il tipo `T1` è `Ptr::element_type` se quel tipo esiste; in caso contrario `Ty`. Se `Ptr` è un puntatore non elaborato, il tipo è `Ty`.|  
|`typedef Ptr pointer`|Il tipo è `Ptr`.|  
  
### <a name="structs"></a>Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`pointer_traits::rebind`|Tenta di convertire il tipo di puntatore sottostante in un tipo specificato.|  
  
### <a name="methods"></a>Metodi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[pointer_to](#pointer_traits__pointer_to_method)|Converte un riferimento arbitrario a un oggetto della classe `Ptr`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<memory>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namepointertraitspointertomethoda--pointerto"></a><a name="pointer_traits__pointer_to_method"></a>  pointer_to  
 Metodo statico che restituisce `Ptr::pointer_to(obj)`, se tale funzione esiste. In caso contrario, non è possibile convertire un riferimento arbitrario a un oggetto della classe `Ptr`. Se `Ptr` è un puntatore non elaborato, il metodo restituisce `addressof(obj)`.  
  
```cpp  
static pointer pointer_to(element_type& obj);
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<memory>](../standard-library/memory.md)   
 [Classe allocator_traits](../standard-library/allocator-traits-class.md)


