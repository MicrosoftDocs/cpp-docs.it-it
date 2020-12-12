---
description: 'Altre informazioni su: errore del compilatore C2688'
title: Errore del compilatore C2688
ms.date: 11/04/2016
f1_keywords:
- C2688
helpviewer_keywords:
- C2688
ms.assetid: 168c9e9d-8f65-4664-af86-db71d3e6ee46
ms.openlocfilehash: 17219fe6f4358b73ace0435e60d8fc2b7a9b6df8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330681"
---
# <a name="compiler-error-c2688"></a>Errore del compilatore C2688

' C2:: fgrv ': restituisce covariante con ereditarietà multipla o virtuale non supportata per le funzioni varargs

I tipi restituiti covariante non sono supportati in Visual C++ quando una funzione contiene argomenti variabili.

Per correggere l'errore, definire le funzioni in modo che non utilizzino argomenti variabili o rendere uguali i valori restituiti per tutte le funzioni virtuali.

L'esempio seguente genera l'C2688:

```cpp
// C2688.cpp
struct G1 {};
struct G2 {};
struct G3 : G1, G2 {};
struct G4 {};
struct G5 {};
struct G6 : G4, G5 {};
struct G7 : G3, G6 {};

struct C1 {
   virtual G4& fgrv(int,...);
};

struct C2 : C1 {
   virtual G7& fgrv(int,...);   // C2688, does not return G4&
};
```
