---
title: Errore del compilatore C3289
ms.date: 11/04/2016
f1_keywords:
- C3289
helpviewer_keywords:
- C3289
ms.assetid: 3c1c623b-7fcf-43ab-a89a-8722532a8d29
ms.openlocfilehash: d234ad4b7c48a66352e52d3517dfd675f27b002c
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781562"
---
# <a name="compiler-error-c3289"></a>Errore del compilatore C3289

'property': impossibile indicizzare una proprietà semplice

Una proprietà è stata dichiarata in modo non corretto. Le funzioni di accesso devono essere definite per una proprietà indicizzata. Per altre informazioni, vedere [property](../../extensions/property-cpp-component-extensions.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3289.

```
// C3289.cpp
// compile with: /clr
public ref struct C {
   // user-defined simple indexer
   property int indexer1[int];   // C3289

   // user-defined indexer
   property int indexer2[int] {
      int get(int i) { return 0; }
      void set(int i, int j) {}
   }
};

int main() {
   C ^ MyC = gcnew C();
   MyC->indexer2[0] = 1;
}
```