---
description: 'Altre informazioni su: errore del compilatore C2472'
title: Errore del compilatore C2472
ms.date: 11/04/2016
f1_keywords:
- C2472
helpviewer_keywords:
- C2472
ms.assetid: 3b36bcdc-2ba5-4357-ab88-7545ba0551cd
ms.openlocfilehash: a1d4d668c1e7151771a2df85e888384c6c3ea028
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97164497"
---
# <a name="compiler-error-c2472"></a>Errore del compilatore C2472

> Impossibile generare '*Function*' in codice gestito:'*Message*'; compilare con/CLR per generare un'immagine mista

## <a name="remarks"></a>Commenti

Questo errore si verifica quando vengono usati tipi non supportati dal codice gestito all'interno di un ambiente Common Language Runtime (CLR). Compilare con **/clr** per risolvere l'errore.

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

## <a name="example"></a>Esempio

Il seguente codice di esempio genera l'errore C2472.

```cpp
// C2472.cpp
// compile with: /clr:pure
// C2472 expected

#include <cstdlib>

int main()
{
   int * __ptr32 p32;
   int * __ptr64 p64;

   p32 = (int * __ptr32)malloc(4);
   p64 = p32;
}
```

## <a name="see-also"></a>Vedi anche

- [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)
