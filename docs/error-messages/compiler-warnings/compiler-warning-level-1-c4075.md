---
title: Avviso del compilatore (livello 1) C4075
ms.date: 11/04/2016
f1_keywords:
- C4075
helpviewer_keywords:
- C4075
ms.assetid: 19a700b6-f210-4b9d-a2f2-76cfe39ab178
ms.openlocfilehash: f69d91ee9335201029d6b566b7987df8c267f82b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80200226"
---
# <a name="compiler-warning-level-1-c4075"></a>Avviso del compilatore (livello 1) C4075

inizializzatori inseriti in un'area di inizializzazione non riconosciuta

[#pragma init_seg](../../preprocessor/init-seg.md) usa un nome di sezione non riconosciuto. Il compilatore ignora il comando **pragma** .

L'esempio seguente genera l'errore C4075:

```cpp
// C4075.cpp
// compile with: /W1
#pragma init_seg("mysegg")   // C4075

// try..
// #pragma init_seg(user)

int main() {
}
```
