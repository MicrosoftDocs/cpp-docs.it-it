---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4159'
title: Avviso del compilatore (livello 3) C4159
ms.date: 11/04/2016
f1_keywords:
- C4159
helpviewer_keywords:
- C4159
ms.assetid: e2cf964e-f4b8-4b2c-9569-1abb94307232
ms.openlocfilehash: 153bd7ee7bc634ab10e0e6eb872a8f055e6470e9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326463"
---
# <a name="compiler-warning-level-3-c4159"></a>Avviso del compilatore (livello 3) C4159

> #<a name="pragma-pragmapop--has-popped-previously-pushed-identifier-identifier"></a>pragma pragma (pop,...): ha estratto l'identificatore '*Identifier*' precedentemente inserito

## <a name="remarks"></a>Commenti

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
