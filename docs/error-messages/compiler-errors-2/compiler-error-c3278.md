---
title: Errore del compilatore C3278 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3278
dev_langs:
- C++
helpviewer_keywords:
- C3278
ms.assetid: 56f818f5-85a6-4792-843b-54fe16327658
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b993aaaee0e50eacf47ce594b4c5efa47f83dd18
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34705075"
---
# <a name="compiler-error-c3278"></a>Errore del compilatore C3278

> indirizzare chiamata dell'interfaccia o metodo puro '*metodo*' avrà esito negativo in fase di esecuzione

## <a name="remarks"></a>Note

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