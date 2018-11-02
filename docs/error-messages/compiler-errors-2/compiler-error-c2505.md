---
title: Errore del compilatore C2505
ms.date: 11/04/2016
f1_keywords:
- C2505
helpviewer_keywords:
- C2505
ms.assetid: b19f5c53-399d-425e-90db-fe3ca9b40858
ms.openlocfilehash: bf5ffb9b6bad3db1d264941a6aefa391be521c98
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50610210"
---
# <a name="compiler-error-c2505"></a>Errore del compilatore C2505

'symbol': '__declspec(modifer)' può essere applicato solo a dichiarazioni o definizioni di oggetti globali o membri dati statici

Oggetto `__declspec` modificatore che è progettato per essere usato solo in ambito globale è stato usato in una funzione.

Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).

L'esempio seguente genera l'errore C2505:

```
// C2505.cpp
// compile with: /clr

// OK
__declspec(process) int ii;
__declspec(appdomain) int jj;

int main() {
   __declspec(process) int i;   // C2505
   __declspec(appdomain) int j;   // C2505
}
```