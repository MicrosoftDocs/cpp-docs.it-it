---
title: Errore del compilatore C2292
ms.date: 11/04/2016
f1_keywords:
- C2292
helpviewer_keywords:
- C2292
ms.assetid: 256b392f-2b8f-4162-b578-e7633984e162
ms.openlocfilehash: 1477c767b770e4d1498df951d7ef5b4448e6fde7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62183055"
---
# <a name="compiler-error-c2292"></a>Errore del compilatore C2292

'identifier': rappresentazione di ereditarietà caso migliore: 'representation1' dichiarata ma 'representation2' obbligati

Il seguente codice con [/vmb](../../build/reference/vmb-vmg-representation-method.md) ("ottimali sempre" rappresentazione) genera l'errore C2292.

```
// C2292.cpp
// compile with: /vmb
class __single_inheritance X;

struct A { };
struct B { };
struct X : A, B { };  // C2292, X uses multiple inheritance
```