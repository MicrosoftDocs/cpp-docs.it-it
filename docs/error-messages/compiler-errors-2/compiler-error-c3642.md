---
description: 'Altre informazioni su: errore del compilatore C3642'
title: Errore del compilatore C3642
ms.date: 11/04/2016
f1_keywords:
- C3642
helpviewer_keywords:
- C3642
ms.assetid: 429790c2-9614-4d85-b31c-687c8d8f83ff
ms.openlocfilehash: 77d65d2bb2c426fe78671328b0eccab739b9dabe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340307"
---
# <a name="compiler-error-c3642"></a>Errore del compilatore C3642

' return_type/args ': Impossibile chiamare una funzione con __clrcall convenzione di chiamata dal codice nativo

Una funzione contrassegnata con la convenzione di chiamata [__clrcall](../../cpp/clrcall.md) non può essere chiamata dal codice nativo (non gestito).

*return_type/args* è il nome della funzione o il tipo della `__clrcall` funzione che si sta tentando di chiamare.  Un tipo viene usato quando si esegue una chiamata tramite un puntatore a funzione.

Per chiamare una funzione gestita da un contesto nativo, è possibile aggiungere una funzione "wrapper" che chiamerà la `__clrcall` funzione. In alternativa, è possibile utilizzare il meccanismo di marshalling CLR; Per ulteriori informazioni, vedere [procedura: effettuare il marshalling di puntatori a funzione utilizzando PInvoke](../../dotnet/how-to-marshal-function-pointers-using-pinvoke.md) .

L'esempio seguente genera l'C3642:

```cpp
// C3642.cpp
// compile with: /clr
using namespace System;
struct S {
   void Test(String ^ s) {   // CLR type in signature, implicitly __clrcall
      Console::WriteLine(s);
   }
   void Test2(char * s) {
      Test(gcnew String(s));
   }
};

#pragma unmanaged
int main() {
   S s;
   s.Test("abc");   // C3642
   s.Test2("abc");   // OK
}
```
