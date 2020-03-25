---
title: Errore del compilatore C3799
ms.date: 11/04/2016
f1_keywords:
- C3799
helpviewer_keywords:
- C3799
ms.assetid: 336a2811-9370-4e6e-b03b-325bda470805
ms.openlocfilehash: 980683ebc2e086e4c16180f04466af9dbdd49d02
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80165652"
---
# <a name="compiler-error-c3799"></a>Errore del compilatore C3799

la proprietà indicizzata non può avere un elenco di parametri vuoto

Una proprietà indicizzata è stata dichiarata in modo non corretto. Per altre informazioni, vedere [procedura: usare le proprietà in C++/CLI](../../dotnet/how-to-use-properties-in-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera C3799 e Mostra come risolverlo.

```cpp
// C3799.cpp
// compile with: /clr /c
ref struct C {
   property int default[] {   // C3799
   // try the following line instead
   // property int default[int] {
      int get(int index) { return 0; }
      void set(int index, int value) {}
   }
};
```
