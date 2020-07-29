---
title: Errore del compilatore C2534
ms.date: 11/04/2016
f1_keywords:
- C2534
helpviewer_keywords:
- C2534
ms.assetid: 481f9f54-5b51-4aa0-8eea-218f10807705
ms.openlocfilehash: 202e3bbe2238b4cc2a5233ac4e093717d623f099
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87207901"
---
# <a name="compiler-error-c2534"></a>Errore del compilatore C2534

' Identifier ': il costruttore non può restituire un valore

Un costruttore non può restituire un valore o avere un tipo restituito, non anche un **`void`** tipo restituito.

Questo errore può essere corretto rimuovendo l' **`return`** istruzione dalla definizione del costruttore.

L'esempio seguente genera l'C2534:

```cpp
// C2534.cpp
class A {
public:
   int i;
   A() { return i; }   // C2534
};
```
