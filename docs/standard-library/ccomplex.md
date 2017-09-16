---
title: '&lt;ccomplex&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <ccomplex>
dev_langs:
- C++
ms.assetid: a9fcb5f0-88e3-464b-a5fd-d1afb8cd7e6f
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
ms.openlocfilehash: 77310f892a3705cd30901cb53b58db34b5b4cfc1
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltccomplexgt"></a>&lt;ccomplex&gt;
Includes the C++ Standard Library header [\<complex>](../standard-library/complex.md), which effectively includes the Standard C library header \<complex.h> and adds the associated names to the `std` namespace.  
  
## <a name="syntax"></a>Syntax  
  
```cpp  
#include <ccomplex>  
  
```  
  
## <a name="remarks"></a>Remarks  
 Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.  
  
 The name `clog`, which is declared in \<complex.h>, is not defined in the `std` namespace because of potential conflicts with the `clog` that is declared in [\<iostream>](../standard-library/iostream.md).  
  
## <a name="see-also"></a>See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)




