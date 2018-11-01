---
title: Errore del compilatore C2570
ms.date: 11/04/2016
f1_keywords:
- C2570
helpviewer_keywords:
- C2570
ms.assetid: d65d0b32-2fac-464a-bcdf-0ebcedf3bf32
ms.openlocfilehash: 447869b029df41219f71dcc633e9ae8a3934e0ed
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50549578"
---
# <a name="compiler-error-c2570"></a>Errore del compilatore C2570

'identifier': un'unione non può avere classi di base

Un'unione derivata da una classe, struttura o unione. ma questa operazione non è consentita. Dichiarare il tipo derivato come una classe o struttura.

L'esempio seguente genera l'errore C2570:

```
// C2570.cpp
// compile with: /c
class base {};
union hasPubBase : public base {};   // C2570
union hasNoBase {};   // OK
```