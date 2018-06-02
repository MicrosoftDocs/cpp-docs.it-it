---
title: ptr32, ptr64 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5746c8f54a51e24bad23dcb66f6648266e2e4b56
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34704815"
---
# <a name="ptr32-ptr64"></a>__ptr32, __ptr64

**Sezione specifica Microsoft**

`__ptr32` rappresenta un puntatore nativo in un sistema a 32 bit, mentre `__ptr64` rappresenta un puntatore nativo in un sistema a 64 bit.

Di seguito viene illustrato come dichiarare ognuno dei seguenti tipi di puntatore:

```cpp
int * __ptr32 p32;
int * __ptr64 p64;
```

 In un sistema a 32 bit, un puntatore dichiarato con `__ptr64` viene troncato per corrispondere a un puntatore a 32 bit. In un sistema a 64 bit, un puntatore dichiarato con `__ptr32` viene forzato per corrispondere a un puntatore a 64 bit.

> [!NOTE]
> Non è possibile utilizzare `__ptr32` o `__ptr64` durante la compilazione con **/clr: pure**. In caso contrario, verrà generato errore del compilatore C2472. Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

## <a name="example"></a>Esempio

Con il seguente esempio, viene illustrato come dichiarare e allocare i puntatori con le parole chiave `__ptr32` e `__ptr64`.

```cpp
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

- [Tipi fondamentali](../cpp/fundamental-types-cpp.md)