---
title: Avviso del compilatore (livello 4) C4365
ms.date: 11/04/2016
f1_keywords:
- C4365
helpviewer_keywords:
- C4365
ms.assetid: af4b4191-bdfd-4dbb-8229-3ba4405df257
ms.openlocfilehash: 554ead2d26a090eb1ffc86e532841143483b365a
ms.sourcegitcommit: d0504e2337bb671e78ec6dd1c7b05d89e7adf6a7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/02/2019
ms.locfileid: "74683030"
---
# <a name="compiler-warning-level-4-c4365"></a>Avviso del compilatore (livello 4) C4365

' Action ': conversione da' type_1' a' type_2', mancata corrispondenza tra signed e unsigned

Ad esempio, si è provato a convertire un valore senza segno in un valore con segno.

C4365 è disattivato per impostazione predefinita.  Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4365.

```cpp
// C4365.cpp
// compile with: /W4
#pragma warning(default:4365)

int f(int) { return 0; }
void Test(size_t i) {}

int main() {
   unsigned int n = 10;
   int o = 10;
   n++;
   f(n);   // C4365
   f(o);   // OK

   Test( -19 );   // C4365
}
```