---
title: underlying_type Class | Microsoft Docs
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
- type_traits/std::underlying_type
dev_langs:
- C++
helpviewer_keywords:
- underlying_type
ms.assetid: 691ddce3-2677-4480-bd35-d933fab85d3e
caps.latest.revision: 13
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
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 9c70d546726ace71a2696f729da0506be028650d
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="underlyingtype-class"></a>underlying_type Class
Produces the underlying integral type for an enumeration type.  
  
## <a name="syntax"></a>Syntax  
  
```
template <class T>  
struct underlying_type;
```  
  
#### <a name="parameters"></a>Parameters  
 `T`  
 The type to modify.  
  
## <a name="remarks"></a>Remarks  
 The `type` member typedef of the template class names the underlying integral type of `T`, when `T` is an enumeration type, otherwise there is no member typedef `type`.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<type_traits>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [<type_traits>](../standard-library/type-traits.md)




