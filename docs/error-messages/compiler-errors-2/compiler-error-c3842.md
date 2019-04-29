---
title: Errore del compilatore C3842
ms.date: 11/04/2016
f1_keywords:
- C3842
helpviewer_keywords:
- C3842
ms.assetid: 41a1a44a-c618-40a2-8d26-7da27d14095d
ms.openlocfilehash: a61a69aca53f7f8996d0261a57b749930ecc01cc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62385511"
---
# <a name="compiler-error-c3842"></a>Errore del compilatore C3842

'function': qualificatori 'const' e 'volatile' non consentiti con funzioni membro di tipi WinRT o gestiti

[const](../../cpp/const-cpp.md) e [volatile](../../cpp/volatile-cpp.md) non sono supportati nelle funzioni membro di Windows Runtime o di tipi gestiti.

L'esempio seguente genera l'errore C3842:

```
// C3842a.cpp
// compile with: /clr /c
public ref struct A {
   void f() const {}   // C3842
   void f() volatile {}   // C3842

   void f() {}
};
```