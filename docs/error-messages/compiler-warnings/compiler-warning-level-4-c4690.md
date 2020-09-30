---
title: Avviso del compilatore (livello 4) C4690
ms.date: 07/03/2018
f1_keywords:
- C4690
helpviewer_keywords:
- C4690
ms.assetid: 080a0ea1-458b-477b-a37a-4a34c94709ff
ms.openlocfilehash: de996128c68ebf96b4a00f6206cbaf54d97ca275
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91509966"
---
# <a name="compiler-warning-level-4-c4690"></a>Avviso del compilatore (livello 4) C4690

> \[ emitidl (pop)]: più estrazioni che push

## <a name="remarks"></a>Osservazioni

Il numero di estrazioni dell'attributo [emitidl](../../windows/attributes/emitidl.md) supera di una volta il numero di inserimenti.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4690. Per risolvere questo problema, assicurarsi che l'attributo venga estratto esattamente il numero di volte in cui viene eseguito il push.

```cpp
// C4690.cpp
// compile with: /c /W4
[emitidl(pop)];   // C4690
class x {};
```
