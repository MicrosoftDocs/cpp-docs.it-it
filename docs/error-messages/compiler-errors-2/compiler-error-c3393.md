---
description: 'Altre informazioni su: errore del compilatore C3393'
title: Errore del compilatore C3393
ms.date: 11/04/2016
f1_keywords:
- C3393
helpviewer_keywords:
- C3393
ms.assetid: d57f7c69-0a02-4fe3-9e45-bc62644fd77c
ms.openlocfilehash: d870498fe235fa1336ea784b7da1dcdd12f8c7cc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316317"
---
# <a name="compiler-error-c3393"></a>Errore del compilatore C3393

errore di sintassi nella clausola constraint: 'identifier' non è un tipo

L'identificatore passato a un vincolo non è un tipo, come richiesto obbligatoriamente.  Per altre informazioni, vedere [Vincoli su parametri di tipo generico (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3393:

```cpp
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
