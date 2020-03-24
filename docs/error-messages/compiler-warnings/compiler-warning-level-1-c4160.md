---
title: Avviso del compilatore (livello 1) C4160
ms.date: 08/27/2018
f1_keywords:
- C4160
helpviewer_keywords:
- C4160
ms.assetid: a9610cb7-cac4-4a74-8b4e-049030ebb92b
ms.openlocfilehash: 8eb53d3f00c717df0e657ede3de6dd71d4a0bb47
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80176169"
---
# <a name="compiler-warning-level-1-c4160"></a>Avviso del compilatore (livello 1) C4160

> #<a name="pragma-pop--did-not-find-previously-pushed-identifier-identifier"></a>pragma (pop,...): non è stato trovato l'identificatore '*Identifier*' precedentemente inserito

## <a name="remarks"></a>Osservazioni

Un'istruzione pragma nel codice sorgente tenta di estrarre un identificatore che non è stato inserito. Per evitare questo avviso, assicurarsi che l'identificatore estratto sia stato inserito correttamente.

## <a name="example"></a>Esempio

L'esempio seguente genera C4160 e Mostra come risolverlo:

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
