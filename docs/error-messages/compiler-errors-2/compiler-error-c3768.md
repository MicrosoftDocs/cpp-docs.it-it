---
title: Errore del compilatore C3768
ms.date: 11/04/2016
f1_keywords:
- C3768
helpviewer_keywords:
- C3768
ms.assetid: 091f0d53-1dff-43fd-813d-5c43c85b6ab0
ms.openlocfilehash: e9c385fd178dc967e72f5e0ca7fab27b28ad962f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50676734"
---
# <a name="compiler-error-c3768"></a>Errore del compilatore C3768

> non è possibile accettare l'indirizzo di una funzione vararg virtuale in codice gestito pure

## <a name="remarks"></a>Note

Il **/clr: pure** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017.

Durante la compilazione con **/clr: pure**, è possibile accettare l'indirizzo di una macchina `vararg` (funzione).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3768:

```cpp
// C3768.cpp
// compile with: /clr:pure
struct A
{
   virtual void f(...);
};

int main()
{
   &(A::f);   // C3768
}
```