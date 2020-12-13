---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4690'
title: Avviso del compilatore (livello 4) C4690
ms.date: 07/03/2018
f1_keywords:
- C4690
helpviewer_keywords:
- C4690
ms.assetid: 080a0ea1-458b-477b-a37a-4a34c94709ff
ms.openlocfilehash: 1f6d3ee3f6ba20207a355350edda99861d10b5f8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97133846"
---
# <a name="compiler-warning-level-4-c4690"></a>Avviso del compilatore (livello 4) C4690

> \[ emitidl (pop)]: più estrazioni che push

## <a name="remarks"></a>Commenti

Il numero di estrazioni dell'attributo [emitidl](../../windows/attributes/emitidl.md) supera di una volta il numero di inserimenti.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4690. Per risolvere questo problema, assicurarsi che l'attributo venga estratto esattamente il numero di volte in cui viene eseguito il push.

```cpp
// C4690.cpp
// compile with: /c /W4
[emitidl(pop)];   // C4690
class x {};
```
