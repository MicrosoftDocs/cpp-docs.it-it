---
description: 'Altre informazioni su: errore del compilatore C3799'
title: Errore del compilatore C3799
ms.date: 11/04/2016
f1_keywords:
- C3799
helpviewer_keywords:
- C3799
ms.assetid: 336a2811-9370-4e6e-b03b-325bda470805
ms.openlocfilehash: 31ada62b9bc347ce4d4889eca72d8d8e9c2987e4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97291623"
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
