---
title: independent_bits_engine Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- random/std::independent_bits_engine
dev_langs:
- C++
helpviewer_keywords:
- independent_bits_engine class
ms.assetid: 889e9a82-f457-49a7-9d2e-26e0fc3cd907
caps.latest.revision: 17
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
ms.openlocfilehash: e223c95051ed4452c81c3ef0cc83be33f1b446f5
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="independentbitsengine-class"></a>independent_bits_engine Class
Generates a random sequence of numbers with a specified number of bits by repacking bits from the values returned by its base engine.  
  
## <a name="syntax"></a>Syntax  
  
```  
template <class Engine, size_t W, class UIntType>  
class independent_bits_engine;  
```  
  
### <a name="parameters"></a>Parameters  
 `Engine`  
 The base engine type.  
  
 `W`  
 **Word size**. Size, in bits, of each number generated. **Precondition**: `0 < W ≤ numeric_limits<UIntType>::digits`  
  
 `UIntType`  
 The unsigned integer result type. For possible types, see [\<random>](../standard-library/random.md).  
  
## <a name="members"></a>Members  
  
||||  
|-|-|-|  
|`independent_bits_engine::independent_bits_engine`|`independent_bits_engine::base`|`independent_bits_engine::discard`|  
|`independent_bits_engine::operator()`|`independent_bits_engine::base_type`|`independent_bits_engine::seed`|  
  
 For more information about engine members, see [\<random>](../standard-library/random.md).  
  
## <a name="remarks"></a>Remarks  
 This template class describes an *engine adaptor* that produces values by repacking bits from the values returned by its base engine, resulting in `W`-bit values.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [\<random>](../standard-library/random.md)


