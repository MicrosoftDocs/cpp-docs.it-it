---
description: 'Altre informazioni su: __ptr32, __ptr64'
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
ms.openlocfilehash: 3393cdfddf08ba2ae5366cacae8554faa7c4a50c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97299033"
---
# <a name="__ptr32-__ptr64"></a>__ptr32, __ptr64

**Specifico di Microsoft**

**`__ptr32`** rappresenta un puntatore nativo in un sistema a 32 bit, mentre **`__ptr64`** rappresenta un puntatore nativo in un sistema a 64 bit.

Di seguito viene illustrato come dichiarare ognuno dei seguenti tipi di puntatore:

```cpp
int * __ptr32 p32;
int * __ptr64 p64;
```

In un sistema a 32 bit, un puntatore dichiarato con **`__ptr64`** viene troncato a un puntatore a 32 bit. In un sistema a 64 bit, un puntatore dichiarato con **`__ptr32`** viene assegnato a un puntatore a 64 bit.

> [!NOTE]
> Non è possibile usare **`__ptr32`** o quando si esegue **`__ptr64`** la compilazione con **/CLR: pure**. In caso contrario, verrà generato un errore del compilatore C2472. Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Per compatibilità con le versioni precedenti, **_ptr32** e **_ptr64** sono sinonimi per **`__ptr32`** e, **`__ptr64`** a meno che non sia specificata l'opzione del compilatore [/za \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come dichiarare e allocare i puntatori con le **`__ptr32`** **`__ptr64`** parole chiave e.

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Tipi incorporati](../cpp/fundamental-types-cpp.md)
