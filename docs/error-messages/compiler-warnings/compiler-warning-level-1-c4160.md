---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4160'
title: Avviso del compilatore (livello 1) C4160
ms.date: 08/27/2018
f1_keywords:
- C4160
helpviewer_keywords:
- C4160
ms.assetid: a9610cb7-cac4-4a74-8b4e-049030ebb92b
ms.openlocfilehash: afb9a0a30376a0e0b1c59b89e98a131ab5889017
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97267196"
---
# <a name="compiler-warning-level-1-c4160"></a>Avviso del compilatore (livello 1) C4160

> #<a name="pragma-pop--did-not-find-previously-pushed-identifier-identifier"></a>pragma (pop,...): non è stato trovato l'identificatore '*Identifier*' precedentemente inserito

## <a name="remarks"></a>Commenti

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
