---
title: Errore del compilatore C2627
ms.date: 11/04/2016
f1_keywords:
- C2627
helpviewer_keywords:
- C2627
ms.assetid: 7fc6c5ac-c7c9-4f0b-ad52-f52252526458
ms.openlocfilehash: dc976a0c16d19d1fd2340676e43eb71903163aa5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62222858"
---
# <a name="compiler-error-c2627"></a>Errore del compilatore C2627

'function': funzione membro non consentite nelle unioni anonime

Un' [unione anonima](../../cpp/unions.md#anonymous_unions) possono avere funzioni membro.

L'esempio seguente genera l'errore C2627:

```
// C2627.cpp
int main() {
   union { void f(){} };   // C2627
   union X { void f(){} };
}
```