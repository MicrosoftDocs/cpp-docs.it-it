---
title: __ptr32, __ptr64
ms.date: 10/09/2018
f1_keywords:
- __ptr32_cpp
- __ptr64_cpp
- __ptr32
- __ptr64
- _ptr32
- _ptr64
helpviewer_keywords:
- __ptr64 keyword [C++]
- _ptr32 keyword [C++]
- ptr32 keyword [C++]
- ptr64 keyword [C++]
- _ptr64 keyword [C++]
- __ptr32 keyword [C++]
ms.assetid: afb563d8-7458-4fe7-9c30-bd4b5385a59f
ms.openlocfilehash: 0e979ed51f9c34700cef75113018c23e69a304f9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62244463"
---
# <a name="ptr32-ptr64"></a>__ptr32, __ptr64

**Sezione specifica Microsoft**

**__ptr32** rappresenta un puntatore nativo in un sistema a 32 bit, mentre **__ptr64** rappresenta un puntatore nativo in un sistema a 64 bit.

Di seguito viene illustrato come dichiarare ognuno dei seguenti tipi di puntatore:

```cpp
int * __ptr32 p32;
int * __ptr64 p64;
```

In un sistema a 32 bit, un puntatore dichiarato con **__ptr64** viene troncato a un puntatore a 32 bit. In un sistema a 64 bit, un puntatore dichiarato con **__ptr32** viene assegnato a un puntatore a 64 bit.

> [!NOTE]
> Non è possibile usare **__ptr32** oppure **__ptr64** durante la compilazione con **/clr: pure**. In caso contrario, verrà generato errore del compilatore C2472. Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

Per garantire la compatibilità con versioni precedenti **_ptr32** e **_ptr64** sono sinonimi per **__ptr32** e **__ptr64** , a meno che l'opzione del compilatore [/Za \(Disabilita estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md) è specificato.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come dichiarare e allocare i puntatori con le **__ptr32** e **__ptr64** parole chiave.

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

[Tipi fondamentali](../cpp/fundamental-types-cpp.md)