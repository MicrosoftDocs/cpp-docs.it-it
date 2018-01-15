---
title: Classe allocator&lt;void&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- memory/std::allocator<void>
- allocator<void>
dev_langs: C++
helpviewer_keywords: allocator<void> class
ms.assetid: abfb40f5-c600-46a6-b130-f42c6535b2bd
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9e6a457323d99ec36c019e099ebcd5fef4ab2f0b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="allocatorltvoidgt-class"></a>Classe allocator&lt;void&gt;
Specializzazione dell'allocatore della classe di modello per il tipo `void`, che definisce i tipi che hanno un significato in questo contesto.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <>
class allocator<void> {
    typedef void *pointer;
    typedef const void *const_pointer;
    typedef void value_type;
    template <class Other>
    struct rebind;
    allocator();
    allocator(const allocator<void>&);

    template <class Other>
    allocator(const allocator<Other>&);

    template <class Other>
    allocator<void>& operator=(const allocator<Other>&);
};
```  
  
## <a name="remarks"></a>Note  
 La classe rende esplicitamente specializzata la classe di modello [allocator](../standard-library/allocator-class.md) per il tipo *void.* I costruttori e l'operatore di assegnazione della classe hanno lo stesso comportamento che hanno per la classe di modello, sebbene definisca solo i tipi seguenti:  
  
- [const_pointer](../standard-library/allocator-class.md#const_pointer).  
  
- [pointer](../standard-library/allocator-class.md#pointer).  
  
- [value_type](../standard-library/allocator-class.md#value_type).  
  
- [rebind](../standard-library/allocator-class.md#rebind), una classe di modello annidata.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<memory>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Thread safety nella libreria standard C++)



