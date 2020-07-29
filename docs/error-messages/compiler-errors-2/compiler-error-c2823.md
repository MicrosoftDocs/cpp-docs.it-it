---
title: Errore del compilatore C2823
ms.date: 11/04/2016
f1_keywords:
- C2823
helpviewer_keywords:
- C2823
ms.assetid: 982b1b35-1a7c-456e-b711-f80cfe2d571e
ms.openlocfilehash: c277437bdc4622e7ae8a63eb9b0a553e0079bc02
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225384"
---
# <a name="compiler-error-c2823"></a>Errore del compilatore C2823

> un modello typedef non è valido

I modelli non sono consentiti nelle **`typedef`** definizioni.

## <a name="example"></a>Esempio

L'esempio seguente genera C2823 e Mostra un modo per risolverlo:

```cpp
// C2823.cpp
template<class T>
typedef struct x {
   T i;   // C2823 can't use T, specify data type and delete template
   int i;   // OK
} x1;
```
