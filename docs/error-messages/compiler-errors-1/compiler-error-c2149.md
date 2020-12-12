---
description: 'Altre informazioni su: errore del compilatore C2149'
title: Errore del compilatore C2149
ms.date: 11/04/2016
f1_keywords:
- C2149
helpviewer_keywords:
- C2149
ms.assetid: 7a106dab-d79f-41b9-85be-f36e86e4d2ab
ms.openlocfilehash: c93efe0648ebe064024177d61acd9d07150a1a1d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97235346"
---
# <a name="compiler-error-c2149"></a>Errore del compilatore C2149

'identifier': un campo di bit denominato non può avere larghezza zero

I campi di bit possono avere larghezza zero solo se non sono denominati.

L'esempio seguente genera l'errore C2149:

```cpp
// C2149.cpp
// compile with: /c
struct C {
   int i : 0;   // C2149
   int j : 2;   // OK
};
```
