---
title: Errore del compilatore C2272
ms.date: 11/04/2016
f1_keywords:
- C2272
helpviewer_keywords:
- C2272
ms.assetid: 1517706a-9c27-452e-9b10-3424b3d232bc
ms.openlocfilehash: 1a5a1e47a721cb6edd795012cc45943e63708936
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50537423"
---
# <a name="compiler-error-c2272"></a>Errore del compilatore C2272

'function': modificatori non consentiti per le funzioni membro statiche

Oggetto `static` funzione membro è dichiarata con un identificatore del modello di memoria, ad esempio [const](../../cpp/const-cpp.md) oppure [volatile](../../cpp/volatile-cpp.md), e questi modificatori non sono consentiti in `static` funzioni membro.

L'esempio seguente genera l'errore C2272:

```
// C2272.cpp
// compile with: /c
class CMyClass {
public:
   static void func1() const volatile;   // C2272  func1 is static
   void func2() const volatile;   // OK
};
```