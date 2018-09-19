---
title: Errore del compilatore C2553 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2553
dev_langs:
- C++
helpviewer_keywords:
- C2553
ms.assetid: 64bc1e9a-627f-4ce9-b7bc-dc911bdb9180
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 38fb61b7281dd0371c546fd7b7bc960232cf2e00
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46043989"
---
# <a name="compiler-error-c2553"></a>Errore del compilatore C2553

'funzione_base': funzione virtual in override tipo restituito differisce da 'funzione_override'

Una funzione in una classe derivata ha tentato di eseguire l'override di una funzione virtuale in una classe di base, ma la funzione di classe derivata non includono lo stesso tipo restituito della funzione di classe di base.  Una firma della funzione di override deve corrispondere alla firma della funzione da sottoporre a override.

L'esempio seguente genera l'errore C2553:

```
// C2553.cpp
// compile with: /clr /c
ref struct C {
   virtual void f();
};

ref struct D : C {
   virtual int f() override ;   // C2553

   // try the following line instead
   // virtual void f() override;
};
```