---
title: Errore del compilatore C2137
ms.date: 11/04/2016
f1_keywords:
- C2137
helpviewer_keywords:
- C2137
ms.assetid: 984687ee-7766-4f6b-ae15-0c9a010e2366
ms.openlocfilehash: 7051fbe788790f1e91a3f54720f72d8370d1e9a8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50464337"
---
# <a name="compiler-error-c2137"></a>Errore del compilatore C2137

costante carattere vuota

La costante carattere vuota (' ') non è consentita.

L'esempio seguente genera l'errore C2137:

```
// C2137.cpp
int main() {
   char c = '';   // C2137
   char d = ' ';   // OK
}
```