---
title: Errore del compilatore C3185
ms.date: 11/04/2016
f1_keywords:
- C3185
helpviewer_keywords:
- C3185
ms.assetid: 5bf96279-043c-4981-9d02-b4550071b192
ms.openlocfilehash: db448b462cd3a3f325c529e730e5c8f65e2b8f51
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50598809"
---
# <a name="compiler-error-c3185"></a>Errore del compilatore C3185

'typeid' utilizzato nel tipo gestito o WinRT 'type'; utilizzare 'operator'

Non è possibile applicare il [typeid](../../cpp/typeid-operator.md) operatore in un oggetto gestito o WinRT tipo; utilizzare [typeid](../../windows/typeid-cpp-component-extensions.md) invece.

L'esempio seguente genera l'errore C3185 e mostra come risolverlo:

```
// C3185a.cpp
// compile with: /clr
ref class Base {};
ref class Derived : public Base {};

int main() {
   Derived ^ pd = gcnew Derived;
   Base ^pb = pd;
   const type_info & t1 = typeid(pb);   // C3185
   System::Type ^ MyType = Base::typeid;   // OK
};
```
