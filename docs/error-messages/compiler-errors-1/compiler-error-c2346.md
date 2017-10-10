---
title: Errore del compilatore C2346 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2346
dev_langs:
- C++
helpviewer_keywords:
- C2346
ms.assetid: 246145be-5645-4cd6-867c-e3bc39e33dca
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: bf0133aba65b8477bd949cd90b51edbd407bcda7
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2346"></a>Errore del compilatore C2346
'funzione' non può essere compilata come nativa: motivo  
  
 Il compilatore non è riuscito a compilare una funzione in MSIL.  
  
 Per ulteriori informazioni, vedere [managed, unmanaged](../../preprocessor/managed-unmanaged.md) e [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Rimuovere il codice nella funzione che non può essere compilata in MSIL.  
  
2.  Non compilare il modulo con **/clr**, o contrassegnare la funzione non gestita con il pragma non gestito.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2346.  
  
```  
// C2346.cpp  
// processor: x86  
// compile with: /clr   
// C2346 expected  
struct S  
{  
   S()  
   {  
      { __asm { nop } }  
   }  
   virtual __clrcall ~S() { }  
};  
  
void main()  
{  
   S s;  
}  
```
