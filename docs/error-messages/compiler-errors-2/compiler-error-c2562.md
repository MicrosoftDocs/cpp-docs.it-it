---
description: 'Altre informazioni su: errore del compilatore C2562'
title: Errore del compilatore C2562
ms.date: 11/04/2016
f1_keywords:
- C2562
helpviewer_keywords:
- C2562
ms.assetid: 2c41e511-9952-4b98-9976-6b1523613e1b
ms.openlocfilehash: 9e9da8a7463b450073f4b537ec36512242995760
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338707"
---
# <a name="compiler-error-c2562"></a>Errore del compilatore C2562

' Identifier ': la funzione ' void ' restituisce un valore

La funzione viene dichiarata come **`void`** ma restituisce un valore.

Questo errore può essere causato da un prototipo di funzione errato.

Questo errore può essere corretto se si specifica il tipo restituito nella dichiarazione di funzione.

L'esempio seguente genera l'C2562:

```cpp
// C2562.cpp
// compile with: /c
void testfunc() {
   int i;
   return i;   // C2562 delete the return to resolve
}
```
