---
title: Errore del compilatore C2825
ms.date: 11/04/2016
f1_keywords:
- C2825
helpviewer_keywords:
- C2825
ms.assetid: c832f1c1-5184-4fc2-9356-12b21daa7af3
ms.openlocfilehash: 1e2f8e8cd38b90a698994743609892896ef0d1a5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62406899"
---
# <a name="compiler-error-c2825"></a>Errore del compilatore C2825

var: deve essere una classe o dello spazio dei nomi quando seguito da ':: '

È stato effettuato un tentativo non riuscito in modo da formare un nome completo.

Ad esempio, assicurarsi che il codice non contiene una dichiarazione di funzione in cui inizia con il nome della funzione::.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2825:

```
// C2825.cpp
typedef int i;
int main() {
   int* p = new int;
   p->i::i();   // C2825
   // try the following line instead
   // p->i::~i();
}
```