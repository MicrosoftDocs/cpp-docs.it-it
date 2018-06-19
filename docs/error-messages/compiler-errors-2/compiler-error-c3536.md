---
title: Errore del compilatore C3536 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3536
dev_langs:
- C++
helpviewer_keywords:
- C3536
ms.assetid: 8d866075-866b-49eb-9979-ee27b308f7e3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0f88e656b0d63b6a7a4d60ace2f4cd5e2347d188
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33250287"
---
# <a name="compiler-error-c3536"></a>Errore del compilatore C3536
'symbol': non può essere utilizzato prima di essere inizializzata  
  
 Impossibile utilizzare il simbolo indicato prima di essere inizializzata. In pratica, ciò significa che una variabile non può essere usata per inizializzare se stessa.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Inizializza una variabile con se stesso.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3536 perché ogni variabile viene inizializzata con se stesso.  
  
```  
// C3536.cpp  
// Compile with /Zc:auto  
int main()  
{  
   auto a = a;     //C3536  
   auto b = &b;    //C3536  
   auto c = c + 1; //C3536  
   auto* d = &d;   //C3536  
   auto& e = e;    //C3536  
   return 0;  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Auto (parola chiave)](../../cpp/auto-keyword.md)