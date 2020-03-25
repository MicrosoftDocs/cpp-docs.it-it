---
title: Errore del compilatore C3278
ms.date: 11/04/2016
f1_keywords:
- C3278
helpviewer_keywords:
- C3278
ms.assetid: 56f818f5-85a6-4792-843b-54fe16327658
ms.openlocfilehash: ec51064853afa37f75022042c8c6121b6c5248a4
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80201435"
---
# <a name="compiler-error-c3278"></a>Errore del compilatore C3278

> la chiamata diretta del metodo di interfaccia o puro '*Method*' avrà esito negativo in fase di esecuzione

## <a name="remarks"></a>Osservazioni

È stata effettuata una chiamata a un metodo di interfaccia o a un metodo puro, che non è consentita.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3278:

```cpp
// C3278_2.cpp
// compile with: /clr
using namespace System;
interface class I
{
   void vmf();
};

public ref class C: public I
{
public:
   void vmf()
   {
      Console::WriteLine( "In C::vmf()" );
      I::vmf(); // C3278
   }

};

int main()
{
   C^ pC = gcnew C;
   pC->vmf();
}
```
