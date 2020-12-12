---
description: 'Altre informazioni su: errore del compilatore C2380'
title: Errore del compilatore C2380
ms.date: 11/04/2016
f1_keywords:
- C2380
helpviewer_keywords:
- C2380
ms.assetid: 717b1e6e-ddfe-4bac-a5f3-7f9a4dcb1572
ms.openlocfilehash: 4455fef072b6d8f686d5f43130db8d02aba69fd1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97174689"
---
# <a name="compiler-error-c2380"></a>Errore del compilatore C2380

i tipi che precedono ' Identifier ' (costruttore con tipo restituito o ridefinizione non valida del nome di classe corrente?)

Un costruttore restituisce un valore o ridefinisce il nome della classe.

L'esempio seguente genera l'errore C2326:

```cpp
// C2380.cpp
// compile with: /c
class C {
public:
   int C();   // C2380, specifies an int return
   int C;   // C2380, redefinition of i
   C();   // OK
};
```
