---
title: Errore del compilatore C3530 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3530
dev_langs:
- C++
helpviewer_keywords:
- C3530
ms.assetid: 21be81ce-b699-4c74-81bc-80a0c34d2d5a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a71820e6303c67e3d247c7da6dddc184e5cb41a1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3530"></a>Errore del compilatore C3530
'auto' non può essere combinato con qualsiasi altro identificatore di tipo  
  
 Un identificatore di tipo viene utilizzato con il `auto` (parola chiave).  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Non utilizzare un identificatore di tipo in una dichiarazione di variabile che utilizza il `auto` (parola chiave).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3530 perché variabile `x` è dichiarato con entrambi i `auto` parola chiave e tipo `int`, e poiché nell'esempio viene compilato con **/Zc: Auto**.  
  
```  
// C3530.cpp  
// Compile with /Zc:auto  
int main()  
{  
   auto int x;   // C3530  
   return 0;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Auto (parola chiave)](../../cpp/auto-keyword.md)