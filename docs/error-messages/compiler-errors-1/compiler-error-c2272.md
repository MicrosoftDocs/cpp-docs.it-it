---
title: Errore del compilatore C2272
ms.date: 11/04/2016
f1_keywords:
- C2272
helpviewer_keywords:
- C2272
ms.assetid: 1517706a-9c27-452e-9b10-3424b3d232bc
ms.openlocfilehash: fd6fdecd3a491ce5f068f4d51d413e6767aabe2f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758697"
---
# <a name="compiler-error-c2272"></a>Errore del compilatore C2272

' Function ': modificatori non consentiti per funzioni membro statiche

Una funzione membro `static` viene dichiarata con un identificatore di modello di memoria, ad esempio [const](../../cpp/const-cpp.md) o [volatile](../../cpp/volatile-cpp.md), e tali modificatori non sono consentiti nelle funzioni membro `static`.

L'esempio seguente genera l'C2272:

```cpp
// C2272.cpp
// compile with: /c
class CMyClass {
public:
   static void func1() const volatile;   // C2272  func1 is static
   void func2() const volatile;   // OK
};
```
