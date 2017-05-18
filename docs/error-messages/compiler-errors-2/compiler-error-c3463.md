---
title: Errore del compilatore C3463 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3463
dev_langs:
- C++
helpviewer_keywords:
- C3463
ms.assetid: 153efcc0-085c-4615-84ea-d22942618bdf
caps.latest.revision: 3
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: f1d148a21e532863315470366820cc825c45f782
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3463"></a>Errore del compilatore C3463
'type': tipo non consentito nell'attributo 'implements'  
  
 È stato passato un tipo non valido per il [implementa](../../windows/implements-cpp.md) attributo. Ad esempio, è possibile passare un'interfaccia a `implements`, ma non è possibile passare un puntatore a un'interfaccia.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3463.  
  
```  
// C3463.cpp  
// compile with: /c  
#include <windows.h>  
[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface X {};  
  
typedef X* PX;  
  
[ coclass, uuid("00000000-0000-0000-0000-000000000002"), implements(interfaces=PX) ]   // C3463  
// try the following line instead  
// [ coclass, uuid("00000000-0000-0000-0000-000000000002"), implements(interfaces=X) ]  
class CMyClass : public X {};  
```
