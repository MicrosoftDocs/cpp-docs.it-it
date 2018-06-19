---
title: Errore del compilatore C2886 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2886
dev_langs:
- C++
helpviewer_keywords:
- C2886
ms.assetid: c01588a1-484c-4dc9-a3f1-f900c6e44543
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1472c475a89fc219f8fe94fdbc69ae7c8a176f24
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33243463"
---
# <a name="compiler-error-c2886"></a>Errore del compilatore C2886
'identificatore': simbolo non può essere utilizzato in una dichiarazione using di membri  
  
 Oggetto `using` dichiarazione Usa un simbolo, ad esempio uno spazio dei nomi. Oggetto `using` dichiarazione consente di dichiarare i membri della classe base.  
  
 L'esempio seguente genera l'errore C2886:  
  
```  
// C2886.cpp  
// compile with: /c  
namespace Z {  
    int i;  
}  
  
class B {  
protected:  
    int i;  
};  
  
class D : public B {  
    // Error: Z is a namespace  
    using Z::i;   // C2886  
  
    // OK: B is a base class  
    using B::i;  
};  
```