---
title: Errore del compilatore C2864
ms.date: 11/04/2016
f1_keywords:
- C2864
helpviewer_keywords:
- C2864
ms.assetid: d0ca2ad9-90a6-4aef-8511-98a3b414c102
ms.openlocfilehash: 9bfc18137df1a54530011a8ec3f7ea50b1d6c86a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50468393"
---
# <a name="compiler-error-c2864"></a>Errore del compilatore C2864

"variabile": un membro dati statico con un in-class initializer deve avere un tipo integrale const non volatile

Per inizializzare un membro dati `static` definito come `volatile`, non `const` o non come tipo integrale, utilizzare un'istruzione member-definition. Non è possibile inizializzarlo in una dichiarazione.

In questo esempio genera l'errore C2864:

```
// C2864.cpp
// compile with: /c
class B  {
private:
   int a = 3;   // OK
   static int b = 3;   // C2864
   volatile static int c = 3;   // C2864
   volatile static const int d = 3;   // C2864
   const static long long e = 3;   // OK
   static const double f = 3.33;   // C2864
};
```

In questo esempio viene illustrato come risolvere l'errore C2864:

```
// C2864b.cpp
// compile with: /c
class C  {
private:
   int a = 3;
   static int b; // = 3; C2864
   volatile static int c; // = 3; C2864
   volatile static const int d; // = 3; C2864
   static const long long e = 3;
   static const double f; // = 3.33; C2864
};

// Initialize static volatile, non-const, or non-integral
// data members when defined, not when declared:
int C::b = 3;
volatile int C::c = 3;
volatile const int C::d = 3;
const double C::f = 3.33;
```