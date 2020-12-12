---
description: 'Altre informazioni su: errore del compilatore C2474'
title: Errore del compilatore C2474
ms.date: 11/04/2016
f1_keywords:
- C2474
helpviewer_keywords:
- C2474
ms.assetid: 64e6c61e-6e77-480e-bcf0-b30a2fc482ac
ms.openlocfilehash: adbfce63a5a8d97707bfb8e73dfda265f5d5e328
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97164406"
---
# <a name="compiler-error-c2474"></a>Errore del compilatore C2474

'keyword': manca un punto e virgola adiacente, potrebbe trattarsi di una parola chiave o di un identificatore.

Il compilatore prevedeva un punto e virgola e non è riuscito a interpretare il codice. Per correggere questo errore, aggiungere il punto e virgola.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2474.

```cpp
// C2474.cpp
// compile with: /clr /c

ref class A {
   ref class B {}
   property int i;   // C2474 error
};

// OK
ref class B {
   ref class D {};
   property int i;
};

ref class E {
   ref class F {} property;
   int i;
};
```
