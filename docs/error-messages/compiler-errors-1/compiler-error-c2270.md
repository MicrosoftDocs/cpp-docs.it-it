---
title: Errore del compilatore C2270
ms.date: 11/04/2016
f1_keywords:
- C2270
helpviewer_keywords:
- C2270
ms.assetid: b52c068e-0b61-42e7-b775-4d57b3ddcba0
ms.openlocfilehash: 67dc970ffb5dac218072ff98046f88c31a9c2db9
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758723"
---
# <a name="compiler-error-c2270"></a>Errore del compilatore C2270

' Function ': modificatori non consentiti per funzioni non membro

Una funzione non membro viene dichiarata con [const](../../cpp/const-cpp.md), [volatile](../../cpp/volatile-cpp.md)o un altro modificatore del modello di memoria.

L'esempio seguente genera l'C2270:

```cpp
// C2270.cpp
// compile with: /c
void func1(void) const;   // C2270, nonmember function

void func2(void);

class CMyClass {
public:
   void func2(void) const;
};
```
