---
description: 'Altre informazioni su: errore del compilatore C3218'
title: Errore del compilatore C3218
ms.date: 11/04/2016
f1_keywords:
- C3218
helpviewer_keywords:
- C3218
ms.assetid: 0eea19e0-503e-4e07-ae8b-2cb2e95922cd
ms.openlocfilehash: 9b8b3ed9fdd0fa2632435f4afd9d6ef9bb39b49b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97173701"
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
