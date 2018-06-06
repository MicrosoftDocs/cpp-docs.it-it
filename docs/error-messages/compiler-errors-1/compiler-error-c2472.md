---
title: Errore del compilatore C2472 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2472
dev_langs:
- C++
helpviewer_keywords:
- C2472
ms.assetid: 3b36bcdc-2ba5-4357-ab88-7545ba0551cd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 43279190847322fa2154c6faababdcd41b490eef
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34704860"
---
# <a name="compiler-error-c2472"></a>Errore del compilatore C2472

> '*funzione*' non possono essere generati in codice gestito: '*messaggio*'; compilare con /clr per generare un'immagine mista

## <a name="remarks"></a>Note

Questo errore si verifica quando vengono usati tipi non supportati dal codice gestito all'interno di un ambiente Common Language Runtime (CLR). Compilare con **/clr** per risolvere l'errore.

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

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

## <a name="see-also"></a>Vedere anche

- [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)
