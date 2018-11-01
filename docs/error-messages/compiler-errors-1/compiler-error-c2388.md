---
title: Errore del compilatore C2388
ms.date: 11/04/2016
f1_keywords:
- C2388
helpviewer_keywords:
- C2388
ms.assetid: 764ad2d7-cb04-425f-ba30-70989488c4a4
ms.openlocfilehash: 62afcb1fafc19d3d61a86f2fbc10cb99e095afc5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50459761"
---
# <a name="compiler-error-c2388"></a>Errore del compilatore C2388

'symbol': Impossibile dichiarare un simbolo con entrambi __declspec(appdomain) e \__declspec(process)

Non è possibile usare i modificatori `appdomain` e `process` `__declspec` sullo stesso simbolo. L'archiviazione per una variabile è disponibile per processo o per dominio applicazione.

Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).

L'esempio seguente genera l'errore C2388:

```
// C2388.cpp
// compile with: /clr /c
__declspec(process) __declspec(appdomain) int i;   // C2388
__declspec(appdomain) int i;   // OK
```