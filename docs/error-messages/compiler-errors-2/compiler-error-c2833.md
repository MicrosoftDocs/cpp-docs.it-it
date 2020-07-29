---
title: Errore del compilatore C2833
ms.date: 11/04/2016
f1_keywords:
- C2833
helpviewer_keywords:
- C2833
ms.assetid: b9418ce1-e2ee-4599-8959-6fde89c27569
ms.openlocfilehash: a6ffcb13d04f3c7c5ac62e147a2b6b2b305e11e1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218169"
---
# <a name="compiler-error-c2833"></a>Errore del compilatore C2833

> ' operator *-operator-Name*' non è un operatore o un tipo riconosciuto

La parola **`operator`** deve essere seguita da un *nome di operatore* di cui si vuole eseguire l'override o da un tipo che si vuole convertire.

Per un elenco degli operatori che è possibile definire in un tipo gestito, vedere [operatori definiti dall'utente](../../dotnet/user-defined-operators-cpp-cli.md).

L'esempio seguente genera l'C2833:

```cpp
// C2833.cpp
// compile with: /c
class A {};

void operator ::* ();   // C2833
void operator :: ();   // OK
```
