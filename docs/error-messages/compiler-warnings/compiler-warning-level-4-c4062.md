---
title: Avviso del compilatore (livello 4) C4062
ms.date: 11/04/2016
f1_keywords:
- C4062
helpviewer_keywords:
- C4062
ms.assetid: 36d1c6ae-c917-4b08-bf30-2eb49ee94169
ms.openlocfilehash: 6a7129f71eebb33e7bde333dfd90ed4ca173d44c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50602644"
---
# <a name="compiler-warning-level-4-c4062"></a>Avviso del compilatore (livello 4) C4062

l'enumeratore 'identifier' nell'istruzione switch dell'enum 'enumeration' non viene gestito

All'enumerazione non è associato un gestore in un'istruzione `switch` e non esiste un'etichetta **predefinito** .

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'errore C4062.

```
// C4062.cpp
// compile with: /W4
#pragma warning(default : 4062)
enum E { a, b, c };
void func ( E e ) {
   switch(e) {
      case a:
      case b:
      break;   // no default label
   }   // C4062, enumerate 'c' not handled
}

int main() {
}
```