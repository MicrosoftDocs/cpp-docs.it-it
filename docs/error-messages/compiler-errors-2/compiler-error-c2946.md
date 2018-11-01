---
title: Errore del compilatore C2946
ms.date: 11/04/2016
f1_keywords:
- C2946
helpviewer_keywords:
- C2946
ms.assetid: c86dfbfc-7702-4f09-8a53-d205710e99c2
ms.openlocfilehash: 0f61d047fcd070f3deea662cd3bd193f8e133659
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50459085"
---
# <a name="compiler-error-c2946"></a>Errore del compilatore C2946

creazione di un'istanza esplicita. 'class' non è una specializzazione della classe modello

Non è possibile creare un'istanza esplicita di una classe non basata su modello.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2946.

```
// C2946.cpp
class C {};
template C;  // C2946
int main() {}
```