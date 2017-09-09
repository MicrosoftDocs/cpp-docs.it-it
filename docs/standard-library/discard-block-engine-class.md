---
title: discard_block_engine Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- random/std::discard_block_engine
dev_langs:
- C++
helpviewer_keywords:
- discard_block_engine class
ms.assetid: aa84808e-38fe-4fa0-9f73-d5b9a653345b
caps.latest.revision: 18
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
ms.openlocfilehash: f98da1248f00e34f3660f613e5a95b8ffc101c56
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="discardblockengine-class"></a>discard_block_engine Class
Generates a random sequence by discarding values returned by its base engine.  
  
## <a name="syntax"></a>Syntax  
  
```  
template <class Engine, size_t P, size_t R>  
class discard_block_engine;  
```  
  
#### <a name="parameters"></a>Parameters  
 `Engine`  
 The base engine type.  
  
 `P`  
 **Block size**. The number of values in each block.  
  
 `R`  
 **Used block**. The number of values in each block that are used. The rest are discarded ( `P` - `R`). **Precondition**: `0 < R ≤ P`  
  
## <a name="members"></a>Members  
  
||||  
|-|-|-|  
|`discard_block_engine::discard_block_engine`|`discard_block_engine::base`|`discard_block_engine::discard`|  
|`discard_block_engine::operator()`|`discard_block_engine::base_type`|`discard_block_engine::seed`|  
  
 For more information about engine members, see [\<random>](../standard-library/random.md).  
  
## <a name="remarks"></a>Remarks  
 This template class describes an engine adaptor that produces values by discarding some of the values returned by its base engine.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [\<random>](../standard-library/random.md)


