---
title: Errore del compilatore C2107 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2107
dev_langs:
- C++
helpviewer_keywords:
- C2107
ms.assetid: 2866a121-884e-4bb5-8613-36de5817000e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: df81df38758cfdd9b3f62d9e0d241f0bf8578746
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46097900"
---
# <a name="compiler-error-c2107"></a>Errore del compilatore C2107

indice non valido. riferimento indiretto non consentito

Un indice viene applicato a un'espressione che restituisce un puntatore.

## <a name="example"></a>Esempio

C2107 può verificarsi se si usa in modo errato il `this` puntatore di un tipo di valore per accedere all'indicizzatore del tipo predefinito. Per altre informazioni, vedere [semantica di questo puntatore](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Semantics_of_the_this_pointer).

L'esempio seguente genera l'errore C2107.

```
// C2107.cpp
// compile with: /clr
using namespace System;

value struct B {
   property String ^ default[String ^] {
      String ^ get(String ^ data) {
         return "abc";
      }
   }
   void Test() {
      Console::WriteLine("{0}", this["aa"]);   // C2107
      Console::WriteLine("{0}", this->default["aa"]);   // OK
   }
};

int main() {
   B ^ myb = gcnew B();
   myb->Test();
}
```