---
title: Classe is_null_pointer | Microsoft Docs
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
- type_traits/std::is_null_pointer
dev_langs:
- C++
helpviewer_keywords:
- is_null_pointer
ms.assetid: f3b3601b-f162-4803-a6e9-dabf5c3876cc
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
ms.openlocfilehash: 8e4267dfd9cc612d1564a178e5d540e07cfa30d0
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="isnullpointer-class"></a>Classe is_null_pointer
Verifica se il tipo è std::nullptr_t.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>
struct is_null_pointer;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se il tipo `T` è `std::nullptr_t`; in caso contrario, contiene false.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)




