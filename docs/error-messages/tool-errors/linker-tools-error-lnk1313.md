---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1313'
title: Errore degli strumenti del linker LNK1313
ms.date: 11/04/2016
f1_keywords:
- LNK1313
helpviewer_keywords:
- LNK1313
ms.assetid: 5df0b72e-bb3f-428c-8d84-6084238f9827
ms.openlocfilehash: 1c10038def9a448645e80ae10fc47d4372769b58
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97310723"
---
# <a name="linker-tools-error-lnk1313"></a>Errore degli strumenti del linker LNK1313

> rilevato modulo ijw/nativo; impossibile effettuare il collegamento con moduli pure

## <a name="remarks"></a>Commenti

La versione corrente di Visual C++ non supporta il collegamento di file obj nativi o misti gestiti/nativi con file obj compilati con **/CLR: pure**.

L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

## <a name="examples"></a>Esempio

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
