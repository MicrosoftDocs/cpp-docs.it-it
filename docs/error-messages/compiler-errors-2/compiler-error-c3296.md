---
title: Errore del compilatore C3296 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3296
dev_langs:
- C++
helpviewer_keywords:
- C3296
ms.assetid: fc4c9dcd-16cf-4eee-a1ac-c43e7c29e443
caps.latest.revision: 5
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 734f4e1e337833e26c60d4239a465818d8601ae5
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3296"></a>Errore del compilatore C3296
'property': esiste già una proprietà con questo nome  
  
 Sono state rilevate più proprietà con lo stesso nome. Ogni proprietà in un tipo deve avere un nome univoco.  
  
 Per altre informazioni, vedere [property](../../windows/property-cpp-component-extensions.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3296.  
  
```  
// C3296.cpp  
// compile with: /clr /c  
using namespace System;  
  
ref class R {  
public:  
   property int MyProp[int] { int get(int); }  
  
   property String^ MyProp[int] { void set(int, String^); }   // C3296  
};  
```
