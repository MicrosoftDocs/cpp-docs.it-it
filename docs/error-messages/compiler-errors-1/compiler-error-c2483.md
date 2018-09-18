---
title: Errore del compilatore C2483 | Microsoft Docs
ms.custom: ''
ms.date: 09/15/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2483
dev_langs:
- C++
helpviewer_keywords:
- C2483
ms.assetid: 5762b325-914b-442d-a604-e4617ba04038
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: be2a2caef9e1252bf1ab36253a7f5f715b94d5a3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46031613"
---
# <a name="compiler-error-c2483"></a>Errore del compilatore C2483

>«*identificatore*': oggetto con costruttore o distruttore non può essere dichiarato 'thread'

Questo messaggio di errore è obsoleto in Visual Studio 2015 e versioni successive. Nelle versioni precedenti, le variabili dichiarate con la `thread` attributo non può essere inizializzato con un costruttore o in un'altra espressione che richiede la valutazione in fase di esecuzione. È necessaria per inizializzare un'espressione statica `thread` dei dati.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2483 in Visual Studio 2013 e versioni precedenti.

```cpp
// C2483.cpp
// compile with: /c
__declspec(thread) struct A {
   A(){}
   ~A(){}
} aa;   // C2483 error

__declspec(thread) struct B {} b;   // OK
```

## <a name="see-also"></a>Vedere anche

[thread](../../cpp/thread.md)