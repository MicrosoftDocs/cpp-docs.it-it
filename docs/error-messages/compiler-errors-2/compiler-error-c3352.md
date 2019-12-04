---
title: Errore del compilatore C3352
ms.date: 11/04/2016
f1_keywords:
- C3352
helpviewer_keywords:
- C3352
ms.assetid: f233bed7-474e-425f-aad2-7801578169d4
ms.openlocfilehash: b679a89bb768ad7a50d0bbaa7b814c7a72f9f4c5
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74740429"
---
# <a name="compiler-error-c3352"></a>Errore del compilatore C3352

' Function ': la funzione specificata non corrisponde al tipo delegato ' type '

Gli elenchi di parametri per `function` e il delegato non corrispondono.

Per ulteriori informazioni, vedere [delegate (C++ estensioni del componente)](../../extensions/delegate-cpp-component-extensions.md).

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
