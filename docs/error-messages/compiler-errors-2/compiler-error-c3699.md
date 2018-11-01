---
title: Errore del compilatore C3699
ms.date: 11/04/2016
f1_keywords:
- C3699
helpviewer_keywords:
- C3699
ms.assetid: 47c29afc-ab8b-4238-adfe-788dd6e00b3b
ms.openlocfilehash: e413e4a08ce22ef109179ff0f98baf32ebba41c2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50525843"
---
# <a name="compiler-error-c3699"></a>Errore del compilatore C3699

'operator': non è possibile usare questo riferimento indiretto nel tipo 'type'

È stato effettuato un tentativo per utilizzare un riferimento indiretto non consentito su `type`.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3699.

```
// C3699.cpp
// compile with: /clr /c
using namespace System;
int main() {
   String * s;   // C3699
   // try the following line instead
   // String ^ s2;
}
```

## <a name="example"></a>Esempio

Una proprietà trivial non può avere tipo di riferimento. Per altre informazioni, vedere [property](../../windows/property-cpp-component-extensions.md) . L'esempio seguente genera l'errore C3699.

```
// C3699_b.cpp
// compile with: /clr /c
ref struct C {
   property System::String % x;   // C3699
   property System::String ^ y;   // OK
};
```

## <a name="example"></a>Esempio

L'equivalente di una sintassi di "puntatore a un puntatore" è un handle per un riferimento di traccia. L'esempio seguente genera l'errore C3699.

```
// C3699_c.cpp
// compile with: /clr /c
using namespace System;
void Test(String ^^ i);   // C3699
void Test2(String ^% i);
```