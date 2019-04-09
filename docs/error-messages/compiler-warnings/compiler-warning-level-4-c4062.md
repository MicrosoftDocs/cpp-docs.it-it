---
title: Avviso del compilatore (livello 4) C4062
ms.date: 04/05/2019
f1_keywords:
- C4062
helpviewer_keywords:
- C4062
ms.assetid: 36d1c6ae-c917-4b08-bf30-2eb49ee94169
ms.openlocfilehash: 79658afc31565b708cdbd8a88f49b887cdd10cf3
ms.sourcegitcommit: 35c4b3478f8cc310ebbd932a18963ad8ab846ed9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/08/2019
ms.locfileid: "59237185"
---
# <a name="compiler-warning-level-4-c4062"></a>Avviso del compilatore (livello 4) C4062

> enumeratore '*identifier*'nell'istruzione switch dell'enum'*enumerazione*' non è gestito

L'enumeratore *identifier* non è associato `case` gestore in un `switch` istruzione ed è presente alcun `default` etichetta che possa intercettarla. Il case mancano può essere considerata una distrazione e un potenziale errore nel codice. Per un avviso correlato sugli enumeratori inutilizzati nella `switch` istruzione che ha un `default` case, vedere [C4061](compiler-warning-level-4-c4061.md).

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni su come abilitare avvisi disattivati per impostazione predefinita, vedere [del compilatore avvisi che vengono disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4062 e Mostra come risolverlo:

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

[Del compilatore (livello 4) Avviso C4061](compiler-warning-level-4-c4061.md)
