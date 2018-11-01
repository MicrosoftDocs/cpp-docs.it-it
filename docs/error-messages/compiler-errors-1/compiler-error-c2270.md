---
title: Errore del compilatore C2270
ms.date: 11/04/2016
f1_keywords:
- C2270
helpviewer_keywords:
- C2270
ms.assetid: b52c068e-0b61-42e7-b775-4d57b3ddcba0
ms.openlocfilehash: 704d397f06432575b7db531039b4454d4716c54e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50431995"
---
# <a name="compiler-error-c2270"></a>Errore del compilatore C2270

'function': modificatori non consentiti per funzioni non membro

Una funzione non membro è dichiarata con [const](../../cpp/const-cpp.md), [volatile](../../cpp/volatile-cpp.md), o un altro modificatore del modello di memoria.

L'esempio seguente genera l'errore C2270:

```
// C2270.cpp
// compile with: /c
void func1(void) const;   // C2270, nonmember function

void func2(void);

class CMyClass {
public:
   void func2(void) const;
};
```