---
description: 'Altre informazioni su: errore del compilatore C2272'
title: Errore del compilatore C2272
ms.date: 11/04/2016
f1_keywords:
- C2272
helpviewer_keywords:
- C2272
ms.assetid: 1517706a-9c27-452e-9b10-3424b3d232bc
ms.openlocfilehash: 5a46c68a09eaec9fc33ef4eaa64afaebea411659
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336256"
---
# <a name="compiler-error-c2272"></a>Errore del compilatore C2272

' Function ': modificatori non consentiti per funzioni membro statiche

Una **`static`** funzione membro è dichiarata con un identificatore di modello di memoria, ad esempio [const](../../cpp/const-cpp.md) o [volatile](../../cpp/volatile-cpp.md), e tali modificatori non sono consentiti per le **`static`** funzioni membro.

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
