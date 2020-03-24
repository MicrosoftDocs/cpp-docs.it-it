---
title: Errore del compilatore C2483
ms.date: 09/15/2017
f1_keywords:
- C2483
helpviewer_keywords:
- C2483
ms.assetid: 5762b325-914b-442d-a604-e4617ba04038
ms.openlocfilehash: 20b08c0d2cd89224ed3d3b8b34915deb947b0b4b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80205114"
---
# <a name="compiler-error-c2483"></a>Errore del compilatore C2483

>'*Identifier*': l'oggetto con costruttore o distruttore non può essere dichiarato come ' thread '

Questo messaggio di errore è obsoleto in Visual Studio 2015 e versioni successive. Nelle versioni precedenti le variabili dichiarate con l'attributo `thread` non possono essere inizializzate con un costruttore o un'altra espressione che richiede la valutazione in fase di esecuzione. Per inizializzare `thread` dati è necessaria un'espressione statica.

## <a name="example"></a>Esempio

L'esempio seguente genera C2483 in Visual Studio 2013 e versioni precedenti.

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
