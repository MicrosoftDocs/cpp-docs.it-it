---
title: Errore del compilatore C3069
ms.date: 11/04/2016
f1_keywords:
- C3069
helpviewer_keywords:
- C3069
ms.assetid: ca94291b-2bb4-4e3f-9acf-534234b83513
ms.openlocfilehash: 230d2569ea314bde2ea9ef0c4fc58d1a9743807f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74749516"
---
# <a name="compiler-error-c3069"></a>Errore del compilatore C3069

'operator': non consentito per il tipo di enumerazione

Un operatore non è supportato per le enumerazioni CLR.  Per altre informazioni, vedere [procedura: definire e utilizzare enumerazioni in C++/CLI](../../dotnet/how-to-define-and-consume-enums-in-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3069:

```cpp
// C3069.cpp
// compile with: /clr
enum struct E { e1 };
enum F { f1 };

int main() {
   E e = E::e1;
   bool tf;
   tf = !e;   // C3069

   // supported for native enums
   F f = f1;
   tf = !f;
}
```
