---
description: 'Altre informazioni su: errore del compilatore C2784'
title: Errore del compilatore C2784
ms.date: 11/04/2016
f1_keywords:
- C2784
helpviewer_keywords:
- C2784
ms.assetid: 3d761fe2-881c-48bd-afae-e2e714e20473
ms.openlocfilehash: dcee0cc2c6c8154bafe4a37fe83c66b1c8d477d0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97297915"
---
# <a name="compiler-error-c2784"></a>Errore del compilatore C2784

'declaration': impossibile dedurre un argomento modello per 'type' da 'type'

Il compilatore non può determinare un argomento modello dagli argomenti della funzione forniti.

L'esempio seguente genera l'errore C2784 e mostra come risolverlo:

```cpp
// C2784.cpp
template<class T> class X {};
template<class T> void f(X<T>) {}

int main() {
   X<int> x;
   f(1);   // C2784

   // To fix it, try the following line instead
   f(x);
}
```
