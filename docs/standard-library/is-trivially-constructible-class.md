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
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 109e119100a3cb561159cca9bce95f793922e58d
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

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




