---
title: Errore degli strumenti del linker LNK1313
ms.date: 11/04/2016
f1_keywords:
- LNK1313
helpviewer_keywords:
- LNK1313
ms.assetid: 5df0b72e-bb3f-428c-8d84-6084238f9827
ms.openlocfilehash: 380df2bff305acc47e423d69ea702d77c4eafdfd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160432"
---
# <a name="linker-tools-error-lnk1313"></a>Errore degli strumenti del linker LNK1313

> rilevato modulo ijw/nativo; impossibile effettuare il collegamento con moduli pure

## <a name="remarks"></a>Note

La versione corrente di Visual C++ non supporta il collegamento dei file con estensione obj gestito/nativo misto o nativo con i file con estensione obj compilati con **/clr: pure**.

Il **/clr: pure** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017.

## <a name="example"></a>Esempio

```cpp
// LNK1313.cpp
// compile with: /c /clr:pure
// a pure module
int main() {}
```

## <a name="example"></a>Esempio

```cpp
// LNK1313_b.cpp
// compile with: /c /clr
// an IJW module
void test(){}
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore LNK1313.

```cpp
// LNK1313_c.cpp
// compile with: /link LNK1313.obj LNK1313_b.obj
// LNK1313 warning expected
```