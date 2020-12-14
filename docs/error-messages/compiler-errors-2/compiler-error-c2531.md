---
description: 'Altre informazioni su: errore del compilatore C2531'
title: Errore del compilatore C2531
ms.date: 11/04/2016
f1_keywords:
- C2531
helpviewer_keywords:
- C2531
ms.assetid: c49afe15-55f8-4dc8-ac01-bf653622a7db
ms.openlocfilehash: 1ab3f18ca91f1dd77a1d06ee43adcb1cc52e05e8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302234"
---
# <a name="compiler-error-c2531"></a>Errore del compilatore C2531

' Identifier ': riferimento a un campo di bit non valido

I riferimenti ai campi di bit non sono consentiti.

L'esempio seguente genera l'C2531:

```cpp
// C2531.cpp
// compile with: /c
class P {
   int &b1 : 10;   // C2531
   int b2 : 10;   // OK
};
```
