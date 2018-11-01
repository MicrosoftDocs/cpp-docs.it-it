---
title: Errore del compilatore C3156
ms.date: 11/04/2016
f1_keywords:
- C3156
helpviewer_keywords:
- C3156
ms.assetid: 1876da78-b94e-4af7-9795-28f72b209b3e
ms.openlocfilehash: 115e8cd63562964b19e4a67f7a649ecfab2596c1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50465260"
---
# <a name="compiler-error-c3156"></a>Errore del compilatore C3156

'class': impossibile avere una definizione locale di un tipo gestito o WinRT

Una funzione non può contenere la definizione, o dichiarazione, di una classe, struct o interfaccia gestita o WinRT.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3156.

```
// C3156.cpp
// compile with: /clr /c
void f() {
   ref class X {};   // C3156
   ref class Y;   // C3156
}
```
