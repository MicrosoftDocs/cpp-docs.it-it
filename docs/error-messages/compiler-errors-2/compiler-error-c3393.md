---
title: Errore del compilatore C3393
ms.date: 11/04/2016
f1_keywords:
- C3393
helpviewer_keywords:
- C3393
ms.assetid: d57f7c69-0a02-4fe3-9e45-bc62644fd77c
ms.openlocfilehash: d2822d5a36b2091881d354131b2a28d386f787c0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50520467"
---
# <a name="compiler-error-c3393"></a>Errore del compilatore C3393

errore di sintassi nella clausola constraint: 'identifier' non è un tipo

L'identificatore passato a un vincolo non è un tipo, come richiesto obbligatoriamente.  Per altre informazioni, vedere [vincoli su parametri di tipo generico (C + + CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3393:

```
// C3393.cpp
// compile with: /clr /c
void MyInterface() {}
interface class MyInterface2 {};

generic<typename T>
where T : MyInterface   // C3393
// try the following line instead
// where T : MyInterface2
ref class R {};
```