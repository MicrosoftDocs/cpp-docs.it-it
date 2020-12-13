---
description: 'Altre informazioni su: avviso del compilatore C4430'
title: Avviso del compilatore C4430
ms.date: 11/04/2016
f1_keywords:
- C4430
helpviewer_keywords:
- C4430
ms.assetid: 12efbfff-aa58-4a86-a7d6-2c6a12d01dd3
ms.openlocfilehash: af214bb0e9d373ee319008f509ba78f5d7ade38b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344302"
---
# <a name="compiler-warning-c4430"></a>Avviso del compilatore C4430

identificatore di tipo mancante, verrà utilizzato int. Nota: C++ non supporta default-int

Questo errore può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio 2005: tutte le dichiarazioni devono specificare in modo esplicito il tipo. il valore int non viene più utilizzato.

C4430 viene sempre emesso come un errore.  È possibile disattivare questo avviso con `#pragma warning` o **/WD.**. per ulteriori informazioni, vedere l' [avviso](../../preprocessor/warning.md) o [/W,/W0,/W1,/W2,/W3,/W4,/W1,/W2,/W3,/W4,/Wall,/WD.,/we,/wo,/WV,/WX (livello di avviso)](../../build/reference/compiler-option-warning-level.md) .

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
