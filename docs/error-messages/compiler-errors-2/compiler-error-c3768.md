---
title: Errore del compilatore C3768 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3768
dev_langs:
- C++
helpviewer_keywords:
- C3768
ms.assetid: 091f0d53-1dff-43fd-813d-5c43c85b6ab0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5e6b7a2d1617591609f75b2b07f1a94983ee22f4
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34704958"
---
# <a name="compiler-error-c3768"></a>Errore del compilatore C3768

> Impossibile accettare l'indirizzo di una funzione vararg virtuale in codice gestito pure

## <a name="remarks"></a>Note

Il **/clr: pure** opzione del compilatore è deprecato in Visual Studio 2015 e non supportata in Visual Studio 2017.

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