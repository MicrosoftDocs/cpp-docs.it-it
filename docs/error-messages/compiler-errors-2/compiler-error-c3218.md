---
title: Errore del compilatore C3218
ms.date: 11/04/2016
f1_keywords:
- C3218
helpviewer_keywords:
- C3218
ms.assetid: 0eea19e0-503e-4e07-ae8b-2cb2e95922cd
ms.openlocfilehash: 386a0c180dd01161ebccdd2b04e899e0cc999614
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74737985"
---
# <a name="compiler-error-c3218"></a>Errore del compilatore C3218

' type ': tipo non consentito come vincolo

Affinché un tipo sia un vincolo, è necessario che sia un tipo di valore o un riferimento a una classe o a un'interfaccia gestita.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3218.

```cpp
// C3218.cpp
// compile with: /clr /c
class A {};
ref class B {};

// Delete the following 3 lines to resolve.
generic <class T>
where T : A   // C3218
ref class C {};

// OK
generic <class T>
where  T : B
ref class D {};
```
