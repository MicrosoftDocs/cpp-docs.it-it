---
title: ReturnAddress | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: _ReturnAddress
dev_langs: C++
helpviewer_keywords:
- _ReturnAddress intrinsic
- ReturnAddress intrinsic
ms.assetid: 7f4a5811-35e6-4f64-ba7c-21203380eeda
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d207fcba6846d0a5e599d6273f5b35bb554bda40
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="returnaddress"></a>_ReturnAddress
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Il `_ReturnAddress` intrinseco fornisce l'indirizzo dell'istruzione nella funzione chiamante che verrà eseguita dopo il controllo viene restituito al chiamante.  
  
 Compilare il seguente programma e scorrerlo nel debugger. Mentre si esegue il programma, prendere nota dell'indirizzo restituito da `_ReturnAddress`. Quindi, immediatamente dopo aver restituito dalla funzione in cui `_ReturnAddress` è stato utilizzato, aprire il [procedura: utilizzare la finestra Disassembly](/visualstudio/debugger/how-to-use-the-disassembly-window) e notare che l'indirizzo della successiva istruzione da eseguire corrisponda all'indirizzo restituito da `_ReturnAddress`.  
  
 Le ottimizzazioni, ad esempio potrebbe essere l'incorporamento interessano l'indirizzo del mittente. Ad esempio, se il programma di esempio seguente viene compilato con [/Ob1](../build/reference/ob-inline-function-expansion.md), `inline_func` verrà resa inline in una funzione chiamante, `main`. Pertanto, le chiamate a `_ReturnAddress` da `inline_func` e `main` ciascuna delle quali produce lo stesso valore.  
  
 Quando `_ReturnAddress` viene utilizzato in un programma compilato con [/clr](../build/reference/clr-common-language-runtime-compilation.md), la funzione contenente il `_ReturnAddress` chiamata verrà compilata come una funzione nativa. Quando una funzione compilata come gestito chiama la funzione contenente `_ReturnAddress`, `_ReturnAddress` potrebbe non comportarsi come previsto.  
  
## <a name="requirements"></a>Requisiti  
 **File di intestazione** \<intrin. h >  
  
## <a name="example"></a>Esempio  
  
```  
// compiler_intrinsics__ReturnAddress.cpp  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(_ReturnAddress)  
  
__declspec(noinline)  
void noinline_func(void)  
{  
   printf("Return address from %s: %p\n", __FUNCTION__, _ReturnAddress());  
}  
  
__forceinline  
void inline_func(void)  
{  
   printf("Return address from %s: %p\n", __FUNCTION__, _ReturnAddress());  
}  
  
int main(void)  
{  
   noinline_func();   
   inline_func();  
   printf("Return address from %s: %p\n", __FUNCTION__, _ReturnAddress());  
  
   return 0;  
}  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [AddressOfReturnAddress](../intrinsics/addressofreturnaddress.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Parole chiave](../cpp/keywords-cpp.md)