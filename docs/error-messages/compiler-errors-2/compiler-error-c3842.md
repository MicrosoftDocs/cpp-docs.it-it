---
title: Errore del compilatore C3842
ms.date: 11/04/2016
f1_keywords:
- C3842
helpviewer_keywords:
- C3842
ms.assetid: 41a1a44a-c618-40a2-8d26-7da27d14095d
ms.openlocfilehash: 881165a1100d1c8791ecd5f50eda6a2e9f1650eb
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74754914"
---
# <a name="compiler-error-c3842"></a>Errore del compilatore C3842

'function': qualificatori 'const' e 'volatile' non consentiti con funzioni membro di tipi WinRT o gestiti

[const](../../cpp/const-cpp.md) e [volatile](../../cpp/volatile-cpp.md) non sono supportati nelle funzioni membro di Windows Runtime o tipi gestiti.

L'esempio seguente genera l'errore C3842:

```cpp
// C3842a.cpp
// compile with: /clr /c
public ref struct A {
   void f() const {}   // C3842
   void f() volatile {}   // C3842

   void f() {}
};
```
