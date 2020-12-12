---
description: 'Altre informazioni su: errore del compilatore C2534'
title: Errore del compilatore C2534
ms.date: 11/04/2016
f1_keywords:
- C2534
helpviewer_keywords:
- C2534
ms.assetid: 481f9f54-5b51-4aa0-8eea-218f10807705
ms.openlocfilehash: fbdc4c292a8eb59ee9ab51de0100455139473f7e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302075"
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
