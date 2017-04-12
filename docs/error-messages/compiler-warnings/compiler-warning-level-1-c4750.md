---
title: Avviso (livello 1) del compilatore C4750 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4750
dev_langs:
- C++
helpviewer_keywords:
- C4750
ms.assetid: b0b2c938-7d2a-4c36-8270-7daee15ffee3
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
translationtype: Machine Translation
ms.sourcegitcommit: 84f0628de933344eb23dc6325679abdcd3699c3a
ms.openlocfilehash: 6e22ef89b92a5b584979abbd370f82b482cf74e0
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-1-c4750"></a>Avviso del compilatore (livello 1) C4750
'identifier': funzione con _alloca() resa inline in un ciclo  
  
 La funzione 'identificatore' impone l'espansione inline del [alloca](../../c-runtime-library/reference/alloca.md) funzione all'interno di un ciclo, che potrebbe causare un overflow dello stack quando viene eseguito il ciclo.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Assicurarsi che la funzione 'identificatore' non è modificata con la [forceinline](../../cpp/inline-functions-cpp.md) identificatore.  
  
2.  Assicurarsi che la funzione 'identificatore' non contiene un [alloca](../../c-runtime-library/reference/alloca.md) funzione contenuta in un ciclo.  
  
3.  Non si specifica il [/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md), [/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md), [/Ox](../../build/reference/ox-full-optimization.md), o [/Og](../../build/reference/og-global-optimizations.md) opzione di compilazione.  
  
4.  Sul posto di [alloca](../../c-runtime-library/reference/alloca.md) funzione un [provare-ad eccezione di istruzione](../../cpp/try-except-statement.md) che intercetterà un overflow dello stack.  
  
## <a name="example"></a>Esempio  
 Nell'esempio di codice seguente viene chiamato `MyFunction` in un ciclo e `MyFunction` chiama la funzione `_alloca` . Il modificatore `__forceinline` provoca l'espansione inline della funzione `_alloca` .  
  
```  
// c4750.cpp  
// compile with: /O2 /W1 /c  
#include <intrin.h>  
  
char * volatile newstr;  
  
__forceinline void myFunction(void) // C4750 warning  
{  
// The _alloca function does not require a __try/__except   
// block because the example uses compiler option /c.  
    newstr = (char * volatile) _alloca(1000);  
}  
  
int main(void)  
{  
    for (int i=0; i<50000; i++)  
       myFunction();  
    return 0;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [_alloca](../../c-runtime-library/reference/alloca.md)
