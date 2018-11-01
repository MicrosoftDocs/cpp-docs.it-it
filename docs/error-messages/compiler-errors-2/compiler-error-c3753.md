---
title: Errore del compilatore C3753
ms.date: 11/04/2016
f1_keywords:
- C3753
helpviewer_keywords:
- C3753
ms.assetid: a5b99e28-796c-4107-a673-97c2ae3bb2b9
ms.openlocfilehash: b6b1e8c3241a778b29045e734fffebb663554e62
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50498371"
---
# <a name="compiler-error-c3753"></a>Errore del compilatore C3753

proprietà generica non è consentita

Gli elenchi di parametri generici possono apparire solo in funzioni, struct o classi gestite.

Per altre informazioni, vedere [Generics](../../windows/generics-cpp-component-extensions.md) e [proprietà](../../windows/property-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3753.

```
// C3753.cpp
// compile with: /clr /c
ref struct A {
   generic <typename T>
   property int i;   // C3753 error
};
```