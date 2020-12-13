---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4003'
title: Avviso del compilatore (livello 1) C4003
ms.date: 11/04/2016
f1_keywords:
- C4003
helpviewer_keywords:
- C4003
ms.assetid: 0ed1c285-4428-4c90-8131-86897e31f115
ms.openlocfilehash: d8a581e9cf6152a3e0e92832b36e5f61a94277f1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335993"
---
# <a name="compiler-warning-level-1-c4003"></a>Avviso del compilatore (livello 1) C4003

parametri effettivi insufficienti per la macro 'identifier'

Il numero di parametri formali nella definizione della macro supera il numero di parametri effettivi nella macro. L'espansione della macro sostituisce il testo vuoto per i parametri mancanti.

L'esempio seguente genera l'C4003:

```cpp
// C4003.cpp
// compile with: /WX
#define test(a,b) (a+b)

int main()
{
   int a = 1;
   int b = 2;
   a = test(b);   // C4003
   // try..
   a = test(a,b);
}
```
