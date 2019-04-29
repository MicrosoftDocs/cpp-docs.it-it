---
title: Errore del compilatore C2637
ms.date: 11/04/2016
f1_keywords:
- C2637
helpviewer_keywords:
- C2637
ms.assetid: 58d94447-eb96-4d8f-a690-dd78d322462e
ms.openlocfilehash: 4231a811911fdf600b47962e929f6f3cff1f1bca
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62395456"
---
# <a name="compiler-error-c2637"></a>Errore del compilatore C2637

'identifier': non è possibile modificare i puntatori ai membri dati

Un puntatore a un membro dati non può avere una convenzione di chiamata. Per correggere, rimuovere la convenzione di chiamata o dichiarare un puntatore a funzione membro.

L'esempio seguente genera l'errore C2637:

```
// C2637.cpp
// compile with: /c
struct S {};
int __stdcall S::*pms1;   // C2637

// OK
int S::*pms2;
int (__stdcall S::*pms3)(...);
```