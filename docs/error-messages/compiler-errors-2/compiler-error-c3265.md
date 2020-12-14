---
description: 'Altre informazioni su: errore del compilatore C3265'
title: Errore del compilatore C3265
ms.date: 11/04/2016
f1_keywords:
- C3265
helpviewer_keywords:
- C3265
ms.assetid: 10ab3e17-4a9f-4120-bab5-21473869b70f
ms.openlocfilehash: 6c45dfb9642fa7cba98fbc38bfe74336f3232aa1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97223412"
---
# <a name="compiler-error-c3265"></a>Errore del compilatore C3265

non è possibile dichiarare un costrutto gestito ' gestito ' in un costrutto ' unmanaged ' non gestito

Non è possibile includere un oggetto gestito in un contesto non gestito.

Nell'esempio seguente viene riprodotto C3265:

```cpp
// C3265_2.cpp
// compile with: /clr /LD
#include <vcclr.h>

ref class A { };

class B
// try the following line instead
// ref class B
{
   A ^a;   // C3265
   // or embed the managed handle using gcroot
   // try the following line instead
   // gcroot<A^> a;
};
```
