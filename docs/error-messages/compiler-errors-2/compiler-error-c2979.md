---
title: Errore del compilatore C2979
ms.date: 11/04/2016
f1_keywords:
- C2979
helpviewer_keywords:
- C2979
ms.assetid: 98bd9043-ec44-451e-a482-3a8e35fc7464
ms.openlocfilehash: e9b0af0d17ef57f19e051165b16632e3180159cd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62395313"
---
# <a name="compiler-error-c2979"></a>Errore del compilatore C2979

le specializzazioni esplicite non sono supportate in generics

Una classe generica è stata dichiarata in modo non corretto.  Visualizzare [Generics](../../extensions/generics-cpp-component-extensions.md) per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2979.

```
// C2979.cpp
// compile with: /clr /c
generic <>
ref class Utils {};   // C2979 error

generic <class T>
ref class Utils2 {};   // OK
```