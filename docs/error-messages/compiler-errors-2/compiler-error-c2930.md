---
title: Errore del compilatore C2930
ms.date: 11/04/2016
f1_keywords:
- C2930
helpviewer_keywords:
- C2930
ms.assetid: f07eecd1-e5d1-4518-bd89-b1fd2a003a17
ms.openlocfilehash: b30e614236298cf9a07cbc29e028039903f9748f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760980"
---
# <a name="compiler-error-c2930"></a>Errore del compilatore C2930

'class': id-classe-tipo ridefinito come enumeratore di 'enum identifier'

Non è possibile usare una classe modello o generica come membro di un'enumerazione.

Questo errore può verificarsi quando le parentesi graffe non corrispondono.

L'esempio seguente genera l'errore C2930:

```cpp
// C2930.cpp
// compile with: /c
template<class T>
class x{};
enum SomeEnum { x };   // C2930

class y{};
enum SomeEnum { y };
```

L'errore C2930 può verificarsi anche quando si usano i generics:

```cpp
// C2930c.cpp
// compile with: /clr /c
generic<class T>
ref struct GC {};
enum SomeEnum { GC };   // C2930

ref struct GC2 {};
enum SomeEnum2 { GC2 };
```
