---
title: Errore del compilatore C2386 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2386
dev_langs:
- C++
helpviewer_keywords:
- C2386
ms.assetid: aaaa1284-34a0-4da2-8547-9fcbb559dae0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c799ec18eb062bbefcc91a8b1ef8364d9b2cdc03
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46043677"
---
# <a name="compiler-error-c2386"></a>Errore del compilatore C2386

'symbol': nell'ambito corrente esiste già un simbolo con questo nome

Si è provato a creare un alias dello spazio dei nomi, ma il nome scelto è già presente.

L'esempio seguente genera l'errore C2386:

```
// C2386.cpp
namespace A {
   int k;
}

int i;
namespace i = A;   // C2386, i already exists
```