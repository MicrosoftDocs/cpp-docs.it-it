---
description: 'Altre informazioni su: errore del compilatore C2055'
title: Errore del compilatore C2055
ms.date: 11/04/2016
f1_keywords:
- C2055
helpviewer_keywords:
- C2055
ms.assetid: 6cec79cc-6bec-443f-9897-fbf5452718c7
ms.openlocfilehash: 0692488b8e1ea91fe235ade512c5fbe5094cdaef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97174936"
---
# <a name="compiler-error-c2055"></a>Errore del compilatore C2055

è previsto un elenco di parametri formali, non un elenco di tipi

Una definizione di funzione contiene un elenco di tipi di parametro anziché un elenco di parametri formali. ANSI C richiede il nome dei parametri formali a meno che non siano vuoti o i puntini di sospensione ( `...` ).

L'esempio seguente genera l'C2055:

```c
// C2055.c
// compile with: /c
void func(int, char) {}  // C2055
void func (int i, char c) {}   // OK
```
