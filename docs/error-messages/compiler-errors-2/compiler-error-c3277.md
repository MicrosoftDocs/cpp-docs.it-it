---
title: Errore del compilatore C3277 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3277
dev_langs:
- C++
helpviewer_keywords:
- C3277
ms.assetid: 8ac5f476-e30c-4879-92c6-f03cdbd74045
caps.latest.revision: 7
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
translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: b52f33b8d671c839fbeae249a1c2d728543e9cb3
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3277"></a>Errore del compilatore C3277
non è possibile definire un enum non gestito 'enum' in 'tipo' gestito  
  
 Un'enumerazione è stata definita correttamente all'interno di un tipo gestito.  
  
 Nell'esempio seguente viene generato l'errore C3277:  
  
```  
// C3277a.cpp  
// compile with: /clr  
ref class A  
{  
   enum E {e1,e2};   // C3277  
   // try the following line instead  
   // enum class E {e1,e2};  
};  
  
int main()  
{  
}  
```  

