---
title: Errore del compilatore C3085 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3085
dev_langs:
- C++
helpviewer_keywords:
- C3085
ms.assetid: 1ac40bf2-f63e-439e-8921-47e6dadc8354
caps.latest.revision: 6
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
ms.openlocfilehash: abe87e08241a5bb0115878173d354d33b1773257
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3085"></a>Errore del compilatore C3085
'constructor': un costruttore non può essere 'keyword'  
  
 Un costruttore è stato dichiarato in modo non corretto. Vedere [gli identificatori di Override](../../windows/override-specifiers-cpp-component-extensions.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3085.  
  
```  
// C3085.cpp  
// compile with: /c /clr  
ref struct S {  
   S() abstract;   // C3085  
   S(S%) abstract;   // C3085  
};  
  
ref struct T {  
   T() sealed {}   // C3085  
   T(T%) sealed {}   // C3085  
};  
```
