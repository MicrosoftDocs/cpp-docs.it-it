---
title: Errore del compilatore C2506
ms.date: 11/04/2016
f1_keywords:
- C2506
helpviewer_keywords:
- C2506
ms.assetid: cfed21cd-2404-46f2-985e-d0c2c3820830
ms.openlocfilehash: 02f0a81204c4bc1c41111d32bae1c6946dee09ac
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50575552"
---
# <a name="compiler-error-c2506"></a>Errore del compilatore C2506

'member': '__declspec(modifier)' non è possibile applicare a questo simbolo

È possibile dichiarare per processo o per ogni appdomain per i membri statici di una classe gestita.

Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2506.

```
// C2506.cpp
// compile with: /clr /c
ref struct R {
   __declspec(process) static int n;   // C2506
   int o;   // OK
};
```