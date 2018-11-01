---
title: Errore del compilatore C3365
ms.date: 11/04/2016
f1_keywords:
- C3365
helpviewer_keywords:
- C3365
ms.assetid: 875ec3a4-522c-4e3d-9b67-48808b857f6d
ms.openlocfilehash: fa11ac57205574da29c55344fedb0e996ab30557
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50449816"
---
# <a name="compiler-error-c3365"></a>Errore del compilatore C3365

operatore 'operator': operandi differenti di tipo 'type1' e 'type2'

Si è provato a creare delegati con tipi diversi.  Vedere [procedura: definire e usare delegati (C + + / CLI)](../../dotnet/how-to-define-and-use-delegates-cpp-cli.md) per altre informazioni sui delegati.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3365:

```cpp
// C3365.cpp
// compile with: /clr
delegate void D1();
delegate void D2(int);

ref class R {
public:
   void f(){}
   void g(int){}
};

int main() {
   D1^ d1 = gcnew D1(gcnew R, &R::f);
   D2^ d2 = gcnew D2(gcnew R, &R::g);
   D1^ d3 = gcnew D1(gcnew R, &R::f);

   d1 += d2;   // C3365
   d1 += d3;   // OK
   d1();
}
```