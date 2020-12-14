---
description: 'Altre informazioni su: errore del compilatore C3278'
title: Errore del compilatore C3278
ms.date: 11/04/2016
f1_keywords:
- C3278
helpviewer_keywords:
- C3278
ms.assetid: 56f818f5-85a6-4792-843b-54fe16327658
ms.openlocfilehash: cdbb53b4f11357ae9058d9a5ebc3882c8701fc88
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228963"
---
# <a name="compiler-error-c3278"></a>Errore del compilatore C3278

> la chiamata diretta del metodo di interfaccia o puro '*Method*' avrà esito negativo in fase di esecuzione

## <a name="remarks"></a>Commenti

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
