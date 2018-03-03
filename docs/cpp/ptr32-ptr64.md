---
title: ptr32, ptr64 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- __ptr32_cpp
- __ptr64_cpp
dev_langs:
- C++
helpviewer_keywords:
- __ptr64 keyword [C++]
- _ptr32 keyword [C++]
- ptr32 keyword [C++]
- ptr64 keyword [C++]
- _ptr64 keyword [C++]
- __ptr32 keyword [C++]
ms.assetid: afb563d8-7458-4fe7-9c30-bd4b5385a59f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3e811999bacada521d77bc14b19eb86d660b5901
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ptr32-ptr64"></a>__ptr32, __ptr64
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 `__ptr32` rappresenta un puntatore nativo in un sistema a 32 bit, mentre `__ptr64` rappresenta un puntatore nativo in un sistema a 64 bit.  
  
 Di seguito viene illustrato come dichiarare ognuno dei seguenti tipi di puntatore:  
  
```  
int * __ptr32 p32;  
int * __ptr64 p64;  
```  
  
 In un sistema a 32 bit, un puntatore dichiarato con `__ptr64` viene troncato per corrispondere a un puntatore a 32 bit. In un sistema a 64 bit, un puntatore dichiarato con `__ptr32` viene forzato per corrispondere a un puntatore a 64 bit.  
  
> [!NOTE]
>  Non è possibile utilizzare `__ptr32` o `__ptr64` durante la compilazione con **/clr: pure**. In caso contrario, verrà generato un `Compiler Error C2472`. Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
## <a name="example"></a>Esempio  
 Con il seguente esempio, viene illustrato come dichiarare e allocare i puntatori con le parole chiave `__ptr32` e `__ptr64`.  
  
```  
#include <cstdlib>  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
  
    int * __ptr32 p32;  
    int * __ptr64 p64;  
  
    p32 = (int * __ptr32)malloc(4);  
    *p32 = 32;  
    cout << *p32 << endl;  
  
    p64 = (int * __ptr64)malloc(4);  
    *p64 = 64;  
    cout << *p64 << endl;  
}  
```  
  
```Output  
32  
64  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi fondamentali](../cpp/fundamental-types-cpp.md)