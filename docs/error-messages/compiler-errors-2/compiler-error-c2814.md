---
title: Errore del compilatore C2814
ms.date: 11/04/2016
f1_keywords:
- C2814
helpviewer_keywords:
- C2814
ms.assetid: 7d165136-a08b-4497-a76d-60a21bb19404
ms.openlocfilehash: 6562e8a0968f83a0e7e968b538b4d94dc1047fa5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50474850"
---
# <a name="compiler-error-c2814"></a>Errore del compilatore C2814

'member': impossibile annidare un tipo nativo in un tipo gestito o WinRT 'type'

## <a name="example"></a>Esempio

Un tipo nativo non può essere annidato in un tipo CLR o WinRT. L'esempio seguente genera l'errore C2814 e mostra come risolverlo.

```
// C2814.cpp
// compile with: /clr /c
ref class A {
   class B {};   // C2814
   ref class C {};   // OK
};
```
