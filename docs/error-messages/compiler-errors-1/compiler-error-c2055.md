---
title: Errore del compilatore C2055 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2055
dev_langs:
- C++
helpviewer_keywords:
- C2055
ms.assetid: 6cec79cc-6bec-443f-9897-fbf5452718c7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d6c63d79325417fbd9b1f451fb4a51f13957b4df
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46019342"
---
# <a name="compiler-error-c2055"></a>Errore del compilatore C2055

previsto elenco di parametri formali, non un elenco di tipi

Una definizione di funzione contiene un elenco di tipo di parametro anziché un elenco di parametri formali. ANSI C richiede i parametri formali chiamarsi a meno che non siano void o i puntini di sospensione (`...`).

L'esempio seguente genera l'errore C2055:

```
// C2055.c
// compile with: /c
void func(int, char) {}  // C2055
void func (int i, char c) {}   // OK
```