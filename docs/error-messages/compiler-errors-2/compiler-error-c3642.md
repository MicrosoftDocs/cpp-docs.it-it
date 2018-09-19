---
title: Errore del compilatore C3642 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3642
dev_langs:
- C++
helpviewer_keywords:
- C3642
ms.assetid: 429790c2-9614-4d85-b31c-687c8d8f83ff
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: febd6f1a9a3b4bac8bbee59cbf8c5bead93c3fb3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46047720"
---
# <a name="compiler-error-c3642"></a>Errore del compilatore C3642

' return_type/args': non è possibile chiamare una funzione con clrcall convenzione di chiamata da codice nativo

Una funzione contrassegnata con il [clrcall](../../cpp/clrcall.md) convenzione di chiamata non può essere chiamato da codice nativo (non gestito).

*return_type/args* è il nome della funzione o il tipo del `__clrcall` (funzione) si intende chiamare.  Un tipo viene usato quando si chiamano tramite un puntatore a funzione.

Per chiamare una funzione gestita da un contesto nativo, è possibile aggiungere una funzione "wrapper" che verrà usato il `__clrcall` (funzione). In alternativa, utilizzare il meccanismo di marshalling CLR; visualizzare [procedura: effettuare il marshalling funzione puntatori tramite PInvoke](../../dotnet/how-to-marshal-function-pointers-using-pinvoke.md) per altre informazioni.

L'esempio seguente genera l'errore C3642:

```
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