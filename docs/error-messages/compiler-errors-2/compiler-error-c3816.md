---
title: Errore del compilatore C3816
ms.date: 11/04/2016
f1_keywords:
- C3816
helpviewer_keywords:
- C3816
ms.assetid: 2e52cc7f-e31c-41a3-8d6f-9f5fab3648c0
ms.openlocfilehash: d362480b3380fe4576ef56b8ca76dfa10eaa1408
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50557300"
---
# <a name="compiler-error-c3816"></a>Errore del compilatore C3816

'declaration' precedentemente dichiarata o definita con un altro oggetto gestito o WinRTmodifier

Una dichiarazione con prototipo e una dichiarazione effettiva richiedono che non siano presenti conflitti o incoerenze nella dichiarazione degli attributi.

L'esempio seguente genera l'errore C3816 e mostra come risolverlo:

```
// C3816a.cpp
// compile with: /clr /c
class C1;
// try the following line instead
// ref class C1;

ref class C1{  // C3816, forward declaration does not use ref
};
```