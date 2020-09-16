---
title: Errore degli strumenti del linker LNK1313
ms.date: 11/04/2016
f1_keywords:
- LNK1313
helpviewer_keywords:
- LNK1313
ms.assetid: 5df0b72e-bb3f-428c-8d84-6084238f9827
ms.openlocfilehash: 03ff61a1f3501b3ea106138e957a657ed064e645
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90683442"
---
# <a name="linker-tools-error-lnk1313"></a>Errore degli strumenti del linker LNK1313

> rilevato modulo ijw/nativo; impossibile effettuare il collegamento con moduli pure

## <a name="remarks"></a>Osservazioni

La versione corrente di Visual C++ non supporta il collegamento di file obj nativi o misti gestiti/nativi con file obj compilati con **/CLR: pure**.

L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

## <a name="examples"></a>Esempi

```cpp
// LNK1313.cpp
// compile with: /c /clr:pure
// a pure module
int main() {}
```

```cpp
// LNK1313_b.cpp
// compile with: /c /clr
// an IJW module
void test(){}
```

L'esempio seguente genera l'errore LNK1313.

```cpp
// LNK1313_c.cpp
// compile with: /link LNK1313.obj LNK1313_b.obj
// LNK1313 warning expected
```
