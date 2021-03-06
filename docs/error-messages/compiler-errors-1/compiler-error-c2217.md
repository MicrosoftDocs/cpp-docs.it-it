---
description: 'Altre informazioni su: errore del compilatore C2217'
title: Errore del compilatore C2217
ms.date: 11/04/2016
f1_keywords:
- C2217
helpviewer_keywords:
- C2217
ms.assetid: 1ce1e3f5-4171-4376-804d-967f7e612935
ms.openlocfilehash: 4cd67cb56cb988aa005725435f1829312ee57a31
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97245538"
---
# <a name="compiler-error-c2217"></a>Errore del compilatore C2217

' attribute1' richiede ' attribute2'

Il primo attributo funzione richiede il secondo attributo.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Funzione interrupt ( `__interrupt` ) dichiarata come `near` . Le funzioni di interrupt devono essere `far` .

1. Funzione interrupt dichiarata con **`__stdcall`** , o **`__fastcall`** . Le funzioni di interrupt devono usare le convenzioni di chiamata C.

## <a name="example"></a>Esempio

C2217 può anche verificarsi se si tenta di associare un delegato a una funzione CLR che accetta un numero variabile di argomenti. Se per la funzione è presente anche l'overload della matrice param e, usare invece tale funzione. L'esempio seguente genera l'C2217.

```cpp
// C2217.cpp
// compile with: /clr
using namespace System;
delegate void MyDel(String^, Object^, Object^, ...);   // C2217
delegate void MyDel2(String ^, array<Object ^> ^);   // OK

int main() {
   MyDel2^ wl = gcnew MyDel2(Console::WriteLine);
   array<Object ^ > ^ x = gcnew array<Object ^>(2);
   x[0] = safe_cast<Object^>(0);
   x[1] = safe_cast<Object^>(1);

   // wl("{0}, {1}", 0, 1);
   wl("{0}, {1}", x);
}
```
