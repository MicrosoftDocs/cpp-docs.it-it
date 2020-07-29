---
title: Avviso del compilatore (livello 4) C4062
ms.date: 04/05/2019
f1_keywords:
- C4062
helpviewer_keywords:
- C4062
ms.assetid: 36d1c6ae-c917-4b08-bf30-2eb49ee94169
ms.openlocfilehash: efe021c9994e20f2630e31537bcc6099783b4308
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220002"
---
# <a name="compiler-warning-level-4-c4062"></a>Avviso del compilatore (livello 4) C4062

> l'enumeratore '*Identifier*' nell'opzione '*Enumeration*' dell'enumerazione non è gestito

All' *identificatore* dell'enumeratore non è associato alcun `case` gestore in un' **`switch`** istruzione e non esiste alcuna **`default`** etichetta che possa intercettarla. Il caso mancante può essere una supervisione e rappresenta un potenziale errore nel codice. Per un avviso correlato sugli enumeratori non utilizzati nelle **`switch`** istruzioni che presentano un **`default`** case, vedere [C4061](compiler-warning-level-4-c4061.md).

Per impostazione predefinita, questo avviso non è attivo. Per ulteriori informazioni su come abilitare gli avvisi disattivati per impostazione predefinita, vedere [avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## <a name="example"></a>Esempio

L'esempio seguente genera C4062 e Mostra come risolverlo:

```cpp
// C4062.cpp
// compile with: /EHsc /W4
#pragma warning(default : 4062)
enum E { a, b, c };
void func ( E e ) {
   switch(e) {
      case a:
      case b:
   // case c:  // to fix, uncomment this line
      break;   // no default label
   }   // C4062, enumerator 'c' not handled
}

int main() {
}
```

## <a name="see-also"></a>Vedere anche

[Avviso del compilatore (livello 4) C4061](compiler-warning-level-4-c4061.md)
