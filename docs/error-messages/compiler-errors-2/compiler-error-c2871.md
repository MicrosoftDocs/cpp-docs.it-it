---
title: Errore del compilatore C2871 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2871
dev_langs:
- C++
helpviewer_keywords:
- C2871
ms.assetid: 44aeb84d-61f0-45e0-8dad-22a3cd46b7f8
caps.latest.revision: 10
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
ms.sourcegitcommit: b551b1a7e0ae03a7de5108a1d114155786972847
ms.openlocfilehash: 7f26c189dc1e8b22d328c6fc65c6dd825f4720d7
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2871"></a>Errore del compilatore C2871
'nome': uno spazio dei nomi con questo nome non esiste  
  
Questo errore si verifica quando viene passato un identificatore che non è uno spazio dei nomi a un [utilizzando](../../cpp/namespaces-cpp.md#using_directives) (direttiva).  
  
## <a name="example"></a>Esempio  
Nell'esempio seguente viene generato l'errore C2871:  
  
```cpp  
// C2871.cpp  
// compile with: /c
namespace a {
   int fn(int i) { return i; }
} 
namespace b { 
   using namespace d;   // C2871 because d is not a namespace  
   using namespace a;   // OK
}  
```
