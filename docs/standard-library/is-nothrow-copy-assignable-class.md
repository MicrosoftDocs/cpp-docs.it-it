---
title: Classe is_nothrow_copy_assignable | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- is_nothrow_copy_assignable
- std.is_nothrow_copy_assignable
- std::is_nothrow_copy_assignable
- type_traits/std::is_nothrow_copy_assignable
dev_langs:
- C++
helpviewer_keywords:
- is_nothrow_copy_assignable
ms.assetid: baa8abd6-4f53-489f-abba-8d5d5c53bbbc
caps.latest.revision: 23
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
ms.sourcegitcommit: 51fbd09793071631985720550007dddbe16f598f
ms.openlocfilehash: 64502f44f46280317028fc2e7092e28cfc75f343
ms.lasthandoff: 02/24/2017

---
# <a name="isnothrowcopyassignable-class"></a>Classe is_nothrow_copy_assignable
Verifica se il tipo ha un operatore di assegnazione mediante copia che è noto al compilatore come elemento che non genera eccezioni.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>
struct is_nothrow_copy_assignable;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se `T` è un tipo referenziabile dove `is_nothrow_assignable<T&, const T&>` contiene true; in caso contrario, contiene false.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [Classe is_nothrow_assignable](../standard-library/is-nothrow-assignable-class.md)   






