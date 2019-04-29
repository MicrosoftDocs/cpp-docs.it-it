---
title: Errore del compilatore C2586
ms.date: 11/04/2016
f1_keywords:
- C2586
helpviewer_keywords:
- C2586
ms.assetid: dae703c7-5c38-4db6-8411-4d1b22713eb5
ms.openlocfilehash: a6af49bba84eded7d530f6ecc37fac8f6acf16e2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62360424"
---
# <a name="compiler-error-c2586"></a>Errore del compilatore C2586

sintassi non corretta conversione definita dall'utente: riferimenti indiretti non validi

Riferimento indiretto di un operatore di conversione non è consentito.

L'esempio seguente genera l'errore C2586:

```
// c2586.cpp
// compile with: /c
struct C {
   * operator int();   // C2586
   operator char();   // OK
};
```