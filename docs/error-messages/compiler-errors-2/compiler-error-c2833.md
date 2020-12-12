---
description: 'Altre informazioni su: errore del compilatore C2833'
title: Errore del compilatore C2833
ms.date: 11/04/2016
f1_keywords:
- C2833
helpviewer_keywords:
- C2833
ms.assetid: b9418ce1-e2ee-4599-8959-6fde89c27569
ms.openlocfilehash: 3c1bd2cc60478dc5868c74d4bfeac1d7d3a4d9a1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97194488"
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
