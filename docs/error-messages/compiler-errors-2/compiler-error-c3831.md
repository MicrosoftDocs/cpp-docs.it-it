---
description: 'Altre informazioni su: errore del compilatore C3831'
title: Errore del compilatore C3831
ms.date: 11/04/2016
f1_keywords:
- C3831
helpviewer_keywords:
- C3831
ms.assetid: a125d8dc-b75a-4ea0-b6c7-fe7b119dba25
ms.openlocfilehash: ba3d1e7f6dfc2670307e510ee6eb13fa6277bc1c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97311812"
---
# <a name="compiler-error-c3831"></a>Errore del compilatore C3831

' member ':' Class ' non può avere un membro dati bloccato o una funzione membro che restituisce un puntatore di blocco

il [pin_ptr (C++/CLI)](../../extensions/pin-ptr-cpp-cli.md) è stato usato in modo errato.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3831:

```cpp
// C3831a.cpp
// compile with: /clr
ref class Y
{
public:
   int i;
};

ref class X
{
   pin_ptr<int> mbr_Y;   // C3831
   int^ mbr_Y2;   // OK
};

int main() {
   Y y;
   pin_ptr<int> p = &y.i;
}
```
