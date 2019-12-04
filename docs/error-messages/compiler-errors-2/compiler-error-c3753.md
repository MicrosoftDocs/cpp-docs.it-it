---
title: Errore del compilatore C3753
ms.date: 11/04/2016
f1_keywords:
- C3753
helpviewer_keywords:
- C3753
ms.assetid: a5b99e28-796c-4107-a673-97c2ae3bb2b9
ms.openlocfilehash: 2970c4851d3e5cbbe9952c12a71c913c5e3ac656
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755330"
---
# <a name="compiler-error-c3753"></a>Errore del compilatore C3753

Proprietà generica non consentita

Gli elenchi di parametri generici possono essere visualizzati solo su classi, struct o funzioni gestite.

Per ulteriori informazioni, vedere [generics](../../extensions/generics-cpp-component-extensions.md) and [Property](../../extensions/property-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3753.

```cpp
// C3753.cpp
// compile with: /clr /c
ref struct A {
   generic <typename T>
   property int i;   // C3753 error
};
```
