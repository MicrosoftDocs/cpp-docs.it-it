---
title: time_base Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- locale/std::time_base
dev_langs:
- C++
helpviewer_keywords:
- time_base class
ms.assetid: 9ae37f0b-9a42-496e-9870-3d9b71bab8fb
caps.latest.revision: 19
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
ms.openlocfilehash: 6342dfcacd83a83a39877b39328e5c2563205a25
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="timebase-class"></a>time_base Class
The class serves as a base class for facets of template class time_get, defining just the enumerated type **dateorder** and several constants of this type.  
  
## <a name="syntax"></a>Syntax  
  
```
class time_base : public locale::facet {
public:
    enum dateorder {no_order,
    dmy,
 mdy,
    ymd,
 ydm};
    time_base(
 size_t _Refs = 0)
 ~time_base();

};
```  
  
## <a name="remarks"></a>Remarks  
 Each constant characterizes a different way to order the components of a date. The constants are:  
  
- **no_order** specifies no particular order.  
  
- **dmy** specifies the order day, month, then year, as in 2 December 1979.  
  
- **mdy** specifies the order month, day, then year, as in December 2, 1979.  
  
- **ymd** specifies the order year, month, then day, as in 1979/12/2.  
  
- **ydm** specifies the order year, day, then month, as in 1979: 2 Dec.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)




