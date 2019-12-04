---
title: Errore del compilatore C2825
ms.date: 11/04/2016
f1_keywords:
- C2825
helpviewer_keywords:
- C2825
ms.assetid: c832f1c1-5184-4fc2-9356-12b21daa7af3
ms.openlocfilehash: 6a51901477958056356a96d71adde4241d60a2ac
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74750585"
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
