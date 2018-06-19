---
title: Errore del compilatore C3530 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3530
dev_langs:
- C++
helpviewer_keywords:
- C3530
ms.assetid: 21be81ce-b699-4c74-81bc-80a0c34d2d5a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b6514d655ab813ae21ecb440415f87bce63f3591
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33253518"
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