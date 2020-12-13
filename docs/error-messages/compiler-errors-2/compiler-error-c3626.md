---
description: 'Altre informazioni su: errore del compilatore C3626'
title: Errore del compilatore C3626
ms.date: 11/04/2016
f1_keywords:
- C3626
helpviewer_keywords:
- C3626
ms.assetid: 43926e2b-1ba9-4a43-9343-c58449cbb336
ms.openlocfilehash: 8db976a5f072db618ac4270df3bd1d8edf0ab15c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97144417"
---
# <a name="compiler-error-c3626"></a>Errore del compilatore C3626

' keyword ': la parola chiave ' __event ' può essere usata solo su interfacce COM, funzioni membro e membri dati che sono puntatori a delegati

Una parola chiave è stata usata in modo errato.

L'esempio seguente genera l'C3626:

```cpp
// C3626.cpp
// compile with: /c
struct A {
   __event int i;   // C3626
// try the following line instead
// __event int i();
};
```
