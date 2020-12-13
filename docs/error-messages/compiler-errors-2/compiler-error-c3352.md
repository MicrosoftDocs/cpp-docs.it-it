---
description: 'Altre informazioni su: errore del compilatore C3352'
title: Errore del compilatore C3352
ms.date: 11/04/2016
f1_keywords:
- C3352
helpviewer_keywords:
- C3352
ms.assetid: f233bed7-474e-425f-aad2-7801578169d4
ms.openlocfilehash: 66d6921c86c6b7a30026880f01ab2a5dada11a65
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97150943"
---
# <a name="compiler-error-c3352"></a>Errore del compilatore C3352

' Function ': la funzione specificata non corrisponde al tipo delegato ' type '

Gli elenchi di parametri per `function` e il delegato non corrispondono.

Per altre informazioni, vedere [delegate (estensioni del componente C++)](../../extensions/delegate-cpp-component-extensions.md).

L'esempio seguente genera l'C3352:

```cpp
// C3352.cpp
// compile with: /clr
delegate int D( int, int );
ref class C {
public:
   int mf( int ) {
      return 1;
   }

   // Uncomment the following line to resolve.
   // int mf(int, int) { return 1; }
};

int main() {
   C^ pC = gcnew C;
   System::Delegate^ pD = gcnew D( pC, &C::mf );   // C3352
}
```
