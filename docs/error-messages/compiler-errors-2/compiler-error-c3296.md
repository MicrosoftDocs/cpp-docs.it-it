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
ms.openlocfilehash: 75facf4bbc92481db12c3254e2035a39b7310a6b
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3296"></a>Errore del compilatore C3296
'property': esiste già una proprietà con questo nome  
  
 Sono state rilevate più proprietà con lo stesso nome. Ogni proprietà in un tipo deve avere un nome univoco.  
  
 Per ulteriori informazioni, vedere [proprietà](../../windows/property-cpp-component-extensions.md).  
  
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
