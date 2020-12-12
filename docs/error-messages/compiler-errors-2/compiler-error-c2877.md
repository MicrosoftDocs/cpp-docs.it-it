---
description: 'Altre informazioni su: errore del compilatore C2877'
title: Errore del compilatore C2877
ms.date: 11/04/2016
f1_keywords:
- C2877
helpviewer_keywords:
- C2877
ms.assetid: 0b54837e-fcae-4d90-9658-623250435e24
ms.openlocfilehash: fd5a122cfed34c59e4a597bb6371a026a90c2ebb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320486"
---
# <a name="compiler-error-c2877"></a>Errore del compilatore C2877

' symbol ' non è accessibile da' Class '

Tutti i membri derivati da una classe base devono essere accessibili nella classe derivata.

L'esempio seguente genera l'C2877:

```cpp
// C2877.cpp
// compile with: /c
class A {
private:
   int a;
};

class B : public A {
   using A::a;   // C2877
};
```
