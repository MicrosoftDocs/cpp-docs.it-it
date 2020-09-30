---
title: Errore del compilatore C3507
ms.date: 11/04/2016
f1_keywords:
- C3507
helpviewer_keywords:
- C3507
ms.assetid: 75f89767-f6f9-40f6-9820-81a49e09abdf
ms.openlocfilehash: a38efcc0d74bbea0e0bf767cb9e5a11561ab4fb8
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91507119"
---
# <a name="compiler-error-c3507"></a>Errore del compilatore C3507

un ProgID non può contenere più di 39 caratteri:' ID '; né contengono segni di punteggiatura oltre a' .'; né iniziare con una cifra

L'attributo [ProgID](../../windows/attributes/progid.md) presenta restrizioni sui valori che possono essere accettati.

L'esempio seguente genera l'C3507:

```cpp
// C3507.cpp
[module(name="x")];
[
coclass,
progid("0123456789012345678901234567890123456789"),
uuid("00000000-0000-0000-0000-000000000001") // C3507 expected
]
struct CMyStruct {
};
int main() {
}
```
