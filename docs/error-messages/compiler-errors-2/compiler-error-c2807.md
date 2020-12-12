---
description: 'Altre informazioni su: errore del compilatore C2807'
title: Errore del compilatore C2807
ms.date: 11/04/2016
f1_keywords:
- C2807
helpviewer_keywords:
- C2807
ms.assetid: bd7a207a-f379-4de6-8ee8-c7cab78b3480
ms.openlocfilehash: 8ce98ee69bf3c41e822a5ecc40dc794b443b6ff0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320623"
---
# <a name="compiler-error-c2807"></a>Errore del compilatore C2807

il secondo parametro formale per il suffisso ' operator Operator ' deve essere ' int '

Il secondo parametro per un operatore di suffisso è di tipo errato.

L'esempio seguente genera l'C2807:

```cpp
// C2807.cpp
// compile with: /c
class X {
public:
   X operator++ ( X );   // C2807 nonvoid parameter
   X operator++ ( int );   // OK, int parameter
};
```
