---
title: Errore del compilatore C2930
ms.date: 11/04/2016
f1_keywords:
- C2930
helpviewer_keywords:
- C2930
ms.assetid: f07eecd1-e5d1-4518-bd89-b1fd2a003a17
ms.openlocfilehash: 20fa3e81e66bb30bd63e579a863b6071de4ef871
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50434827"
---
# <a name="compiler-error-c2930"></a>Errore del compilatore C2930

'class': id-classe-tipo ridefinito come enumeratore di 'enum identifier'

Non è possibile usare una classe modello o generica come membro di un'enumerazione.

Questo errore può verificarsi quando le parentesi graffe non corrispondono.

L'esempio seguente genera l'errore C2930:

```
// C2930.cpp
// compile with: /c
template<class T>
class x{};
enum SomeEnum { x };   // C2930

class y{};
enum SomeEnum { y };
```

L'errore C2930 può verificarsi anche quando si usano i generics:

```
// C2930c.cpp
// compile with: /clr /c
generic<class T>
ref struct GC {};
enum SomeEnum { GC };   // C2930

ref struct GC2 {};
enum SomeEnum2 { GC2 };
```