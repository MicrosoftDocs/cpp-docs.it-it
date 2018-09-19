---
title: Errore del compilatore C3195 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3195
dev_langs:
- C++
helpviewer_keywords:
- C3195
ms.assetid: 97e4f681-812b-49e8-ba57-24b7817e3cd8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3c299704b595ca6e6f6b81fb56ffad5534f81e6b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46040596"
---
# <a name="compiler-error-c3195"></a>Errore del compilatore C3195

'operator': è riservata e non può essere utilizzata come membro di una classe di riferimento o un tipo di valore. Gli operatori CLR o WinRT devono essere definiti usando la parola chiave 'operator'

Il compilatore ha rilevato una definizione dell'operatore che usa la sintassi di Estensioni gestite per C++. È necessario utilizzare la sintassi di C++ per gli operatori.

L'esempio seguente genera l'errore C3195 e mostra come risolverlo:

```
// C3195.cpp
// compile with: /clr /LD
#using <mscorlib.dll>
value struct V {
   static V op_Addition(V v, int i);   // C3195
   static V operator +(V v, char c);   // OK for new C++ syntax
};
```