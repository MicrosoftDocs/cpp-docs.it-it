---
title: Errore del compilatore C2825 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2825
dev_langs:
- C++
helpviewer_keywords:
- C2825
ms.assetid: c832f1c1-5184-4fc2-9356-12b21daa7af3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1bd0e9f8f2f5444b8835abc9f6802919f0e6c941
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46117582"
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