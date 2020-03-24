---
title: Avviso del compilatore (livello 3) C4159
ms.date: 11/04/2016
f1_keywords:
- C4159
helpviewer_keywords:
- C4159
ms.assetid: e2cf964e-f4b8-4b2c-9569-1abb94307232
ms.openlocfilehash: 20d6010cb83107946c00f2f7b00cda771b2e70b9
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80199017"
---
# <a name="compiler-warning-level-3-c4159"></a>Avviso del compilatore (livello 3) C4159

> #<a name="pragma-pragmapop--has-popped-previously-pushed-identifier-identifier"></a>pragma pragma (pop,...): ha estratto l'identificatore '*Identifier*' precedentemente inserito

## <a name="remarks"></a>Osservazioni

Il codice sorgente contiene un'istruzione **push** con un identificatore per un pragma seguito da un'istruzione **pop** senza un identificatore. Di conseguenza, l' *identificatore* viene estratto e gli utilizzi successivi dell' *identificatore* possono causare un comportamento imprevisto.

## <a name="example"></a>Esempio

Per evitare questo avviso, assegnare un identificatore nell'istruzione **pop** . Ad esempio:

```cpp
// C4159.cpp
// compile with: /W3
#pragma pack(push, f)
#pragma pack(pop)   // C4159

// using the identifier resolves the warning
// #pragma pack(pop, f)

int main()
{
}
```
