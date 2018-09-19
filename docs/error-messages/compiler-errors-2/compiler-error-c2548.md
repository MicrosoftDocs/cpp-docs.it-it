---
title: Errore del compilatore C2548 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2548
dev_langs:
- C++
helpviewer_keywords:
- C2548
ms.assetid: 01e9c835-9bf3-4020-9295-5ee448c519f3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b4fd5087613466ecb483ad4ec28018c9321453ff
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46050506"
---
# <a name="compiler-error-c2548"></a>Errore del compilatore C2548

'member': manca un parametro predefinito per il parametro parameter

Elenco di parametri predefinito manca un parametro. Se si specifica un parametro predefinito in un punto qualsiasi in un elenco di parametri, è necessario definire i parametri predefiniti per tutti i parametri successivi.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2548:

```
// C2548.cpp
// compile with: /c
void func( int = 1, int, int = 3);  // C2548

// OK
void func2( int, int, int = 3);
void func3( int, int = 2, int = 3);
```