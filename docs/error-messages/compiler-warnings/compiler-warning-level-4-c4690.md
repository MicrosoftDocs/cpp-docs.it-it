---
title: Avviso del compilatore (livello 4) C4690
ms.date: 07/03/2018
f1_keywords:
- C4690
helpviewer_keywords:
- C4690
ms.assetid: 080a0ea1-458b-477b-a37a-4a34c94709ff
ms.openlocfilehash: c7facdde54b44ba2ce07db0447b251d7014f76c8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62324584"
---
# <a name="compiler-warning-level-4-c4690"></a>Avviso del compilatore (livello 4) C4690

> \[ emitidl (pop)]: più estrazioni che inserimenti

## <a name="remarks"></a>Note

Il numero di estrazioni dell'attributo [emitidl](../../windows/emitidl.md) supera di una volta il numero di inserimenti.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4690. Per risolvere questo problema, assicurarsi che l'attributo viene visualizzato esattamente come tutte le volte che viene eseguito il push.

```cpp
// C4690.cpp
// compile with: /c /W4
[emitidl(pop)];   // C4690
class x {};
```
