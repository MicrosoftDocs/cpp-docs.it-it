---
description: 'Altre informazioni su: errore del compilatore C2523'
title: Errore del compilatore C2523
ms.date: 11/04/2016
f1_keywords:
- C2523
helpviewer_keywords:
- C2523
ms.assetid: 7951b700-8f37-45a0-beb4-a79ae0ced72e
ms.openlocfilehash: c9907742903cf4c13364d6ac63bb561b52e02232
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97151164"
---
# <a name="compiler-error-c2523"></a>Errore del compilatore C2523

' Class:: ~ Identifier ': mancata corrispondenza dei tag del distruttore/finalizzatore

Il nome del distruttore deve corrispondere al nome della classe preceduto da una tilde ( `~` ). Il costruttore e il distruttore sono gli unici membri che hanno lo stesso nome della classe.

L'esempio seguente genera l'C2523:

```cpp
// C2523.cpp
// compile with: /c
class A {
   ~B();    // C2523
   ~A();   // OK
};
```
