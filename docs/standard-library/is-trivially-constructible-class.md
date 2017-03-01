---
title: Classe is_trivially_constructible | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- is_trivially_constructible
- std.is_trivially_constructible
- std::is_trivially_constructible
- type_traits/std::is_trivially_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_constructible
ms.assetid: 3fa918c1-e66f-4d0e-a11b-be1fb2c02e7b
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.openlocfilehash: 4acc8f686d918391966949134a5c2b3c1a0a41a5
ms.lasthandoff: 02/24/2017

---
# <a name="istriviallyconstructible-class"></a>Classe is_trivially_constructible
Verifica se un tipo è facilmente costruibile quando vengono usati i tipi di argomento specificati.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, class... Args>  
struct is_trivially_constructible;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
 `Args`  
 Tipi di argomento per cui trovare la corrispondenza in un costruttore di `T`.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se il tipo `T` è facilmente costruibile mediante i tipi di argomento in `Args`; in caso contrario, contiene false. Il tipo `T` è facilmente costruibile se la definizione di variabile `T t(std::declval<Args>()...);` è nel formato corretto ed è nota per non chiamare operazioni complesse. `T` e tutti i tipi inclusi in `Args` devono essere tipi completi, `void`, o matrici di valori associati sconosciuti.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)




