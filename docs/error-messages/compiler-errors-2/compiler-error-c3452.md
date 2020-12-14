---
description: 'Altre informazioni su: errore del compilatore C3452'
title: Errore del compilatore C3452
ms.date: 11/04/2016
f1_keywords:
- C3452
helpviewer_keywords:
- C3452
ms.assetid: e5293dcf-cb70-4133-ae2a-0bb496950ba0
ms.openlocfilehash: 7153088ccd132112f47823cd1eb1147480615fc5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315985"
---
# <a name="compiler-error-c3452"></a>Errore del compilatore C3452

membro argomento di elenco non costante

È stato passato un argomento a un attributo che prevedeva una costante, un valore valutato in fase di compilazione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3452.

```cpp
// C3452.cpp
// compile with: /c
int i;
[module( name="mod", type=dll, custom={i} ) ];   // C3452
// try the following line instead
// [module( name="mod", type=dll, custom={"a"} ) ];
```
