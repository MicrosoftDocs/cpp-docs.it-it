---
title: Errore del compilatore C2346 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2346
dev_langs:
- C++
helpviewer_keywords:
- C2346
ms.assetid: 246145be-5645-4cd6-867c-e3bc39e33dca
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9459d7330738180e92776e93fcba9a07bfd39640
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33222293"
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