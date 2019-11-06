---
title: Avviso del compilatore C4430
ms.date: 11/04/2016
f1_keywords:
- C4430
helpviewer_keywords:
- C4430
ms.assetid: 12efbfff-aa58-4a86-a7d6-2c6a12d01dd3
ms.openlocfilehash: 661b687373d6c72b9f40a05d1406bc89ce332133
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73623708"
---
# <a name="compiler-warning-c4430"></a>Avviso del compilatore C4430

identificatore di tipo mancante, verrà utilizzato int. Nota: C++ non supporta default-int

Questo errore può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio 2005: tutte le dichiarazioni devono specificare in modo esplicito il tipo. il valore int non viene più utilizzato.

C4430 viene sempre emesso come un errore.  È possibile disattivare questo avviso con il `#pragma warning` o **/WD.** ; Per ulteriori informazioni, vedere [warning](../../preprocessor/warning.md) o [/w,/W0,/W1,/W2,/W3,/W4,/W1,/W2,/W3,/W4,/Wall,/WD.,/we,/wo,/WV,/WX (livello di avviso)](../../build/reference/compiler-option-warning-level.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4430.

```cpp
// C4430.cpp
// compile with: /c
struct CMyClass {
   CUndeclared m_myClass;  // C4430
   int m_myClass;  // OK
};

typedef struct {
   POINT();   // C4430
   // try the following line instead
   // int POINT();
   unsigned x;
   unsigned y;
} POINT;
```