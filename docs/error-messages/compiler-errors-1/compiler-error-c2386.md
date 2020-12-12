---
description: 'Altre informazioni su: errore del compilatore C2386'
title: Errore del compilatore C2386
ms.date: 11/04/2016
f1_keywords:
- C2386
helpviewer_keywords:
- C2386
ms.assetid: aaaa1284-34a0-4da2-8547-9fcbb559dae0
ms.openlocfilehash: 65dca1cf052cab1292f6f594a316536a5097a032
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97204095"
---
# <a name="compiler-error-c2386"></a>Errore del compilatore C2386

'symbol': nell'ambito corrente esiste già un simbolo con questo nome

Si è provato a creare un alias dello spazio dei nomi, ma il nome scelto è già presente.

L'esempio seguente genera l'errore C2386:

```cpp
// C2386.cpp
namespace A {
   int k;
}

int i;
namespace i = A;   // C2386, i already exists
```
