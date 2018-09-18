---
title: Errore del compilatore C2833 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2833
dev_langs:
- C++
helpviewer_keywords:
- C2833
ms.assetid: b9418ce1-e2ee-4599-8959-6fde89c27569
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 53360c1eaf81ad407589fbdb125d9e6fe017708e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46070171"
---
# <a name="compiler-error-c2833"></a>Errore del compilatore C2833

'operator operator' non è un tipo o un operatore riconosciuta

La parola `operator` deve essere seguita da un operatore che si desidera eseguire l'override o un tipo da convertire.

Per un elenco degli operatori che è possibile definire in un tipo gestito, vedere [operatori definiti dall'utente](../../dotnet/user-defined-operators-cpp-cli.md).

L'esempio seguente genera l'errore C2833:

```
// C2833.cpp
// compile with: /c
class A {};

void operator ::* ();   // C2833
void operator :: ();   // OK
```