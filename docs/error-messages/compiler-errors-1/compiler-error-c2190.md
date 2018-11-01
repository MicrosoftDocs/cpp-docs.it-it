---
title: Errore del compilatore C2190
ms.date: 11/04/2016
f1_keywords:
- C2190
helpviewer_keywords:
- C2190
ms.assetid: 34e15f85-d979-4948-80fc-46c414508a70
ms.openlocfilehash: b52797b945b1a652506b4a85171e60a91544bbf0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50546481"
---
# <a name="compiler-error-c2190"></a>Errore del compilatore C2190

primo elenco di parametri più lungo del secondo

Una funzione C è stata dichiarata una seconda volta con un breve elenco di parametri. C non supporta le funzioni in overload.

L'esempio seguente genera l'errore C2190:

```
// C2190.c
// compile with: /Za /c
void func( int, float );
void func( int  );   // C2190, different parameter list
void func2( int  );   // OK
```