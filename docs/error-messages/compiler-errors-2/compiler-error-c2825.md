---
description: 'Altre informazioni su: errore del compilatore C2825'
title: Errore del compilatore C2825
ms.date: 11/04/2016
f1_keywords:
- C2825
helpviewer_keywords:
- C2825
ms.assetid: c832f1c1-5184-4fc2-9356-12b21daa7af3
ms.openlocfilehash: fa72f915a77ec26e6da402ae8ff87ee380f1838c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97194579"
---
# <a name="compiler-error-c2825"></a>Errore del compilatore C2825

var: deve essere una classe o uno spazio dei nomi quando seguito da'::'

È stato effettuato un tentativo non riuscito di creare un nome completo.

Verificare, ad esempio, che il codice non contenga una dichiarazione di funzione in cui il nome della funzione inizia con::.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2825:

```cpp
// C2825.cpp
typedef int i;
int main() {
   int* p = new int;
   p->i::i();   // C2825
   // try the following line instead
   // p->i::~i();
}
```
