---
title: Avviso del compilatore (livello 1) C4160
ms.date: 08/27/2018
f1_keywords:
- C4160
helpviewer_keywords:
- C4160
ms.assetid: a9610cb7-cac4-4a74-8b4e-049030ebb92b
ms.openlocfilehash: 988c1fcbe0826582dceaa527811c688711fd8906
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50428042"
---
# <a name="compiler-warning-level-1-c4160"></a>Avviso del compilatore (livello 1) C4160

> #<a name="pragma-pop--did-not-find-previously-pushed-identifier-identifier"></a>pragma (pop,...): non è stato trovato l'identificatore '*identificatore*'

## <a name="remarks"></a>Note

Un'istruzione pragma nel codice sorgente tenta di estrarre un identificatore che non è stato inserito. Per evitare questo avviso, assicurarsi che l'identificatore estratto sia stato inserito correttamente.

## <a name="example"></a>Esempio

Nell'esempio seguente genera l'errore C4160 e Mostra come risolverlo:

```cpp
// C4160.cpp
// compile with: /W1
#pragma pack(push)

#pragma pack(pop, id)   // C4160
// use identifier when pushing to resolve the warning
// #pragma pack(push, id)

int main() {
}
```