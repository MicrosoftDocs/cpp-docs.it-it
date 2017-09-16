---
title: is_error_condition_enum Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- system_error/std::is_error_condition_enum
dev_langs:
- C++
helpviewer_keywords:
- is_error_condition_enum class
ms.assetid: 752bb87a-c61c-4304-9254-5aaf228b59c0
caps.latest.revision: 15
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
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 203a85a9fbd4759cff2b81a01eb4a1d071f22579
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="iserrorconditionenum-class"></a>is_error_condition_enum Class
Represents a type predicate that tests for the [error_condition](../standard-library/error-condition-class.md) enumeration.  
  
## <a name="syntax"></a>Syntax  
  
```
template <_Enum>
class is_error_condition_enum;
```  
  
## <a name="remarks"></a>Remarks  
 An instance of this [type predicate](../standard-library/type-traits.md) holds true if the type `_Enum` is an enumeration value suitable for storing in an object of type `error_condition`.  
  
 It is permissible to add specializations to this type for user-defined types.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<system_error>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [<system_error>](../standard-library/system-error.md)




