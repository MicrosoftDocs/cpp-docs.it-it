---
title: no_smart_pointers | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- no_search_pointers
dev_langs:
- C++
helpviewer_keywords:
- no_smart_pointers attribute
ms.assetid: d69dd71e-08a8-4446-a3d0-a062dc29cb17
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8e4503ab027589f54c5b5bce60dc405a570dcc59
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="nosmartpointers"></a>no_smart_pointers
**Sezione specifica C++**  
  
 Elimina la creazione dei puntatori intelligenti per tutte le interfacce nella libreria dei tipi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
no_smart_pointers  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, quando si utilizza `#import`, si ottiene una dichiarazione del puntatore intelligente per tutte le interfacce nella libreria dei tipi. Questi puntatori intelligenti sono di tipo [com_ptr_t Class](../cpp/com-ptr-t-class.md).  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)