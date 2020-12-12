---
description: 'Altre informazioni su: errore del compilatore C2483'
title: Errore del compilatore C2483
ms.date: 09/15/2017
f1_keywords:
- C2483
helpviewer_keywords:
- C2483
ms.assetid: 5762b325-914b-442d-a604-e4617ba04038
ms.openlocfilehash: 5edafbbb0852eb622f34698421ce9a2b794f9209
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123877"
---
# <a name="compiler-error-c2483"></a>Errore del compilatore C2483

>'*Identifier*': l'oggetto con costruttore o distruttore non può essere dichiarato come ' thread '

Questo messaggio di errore è obsoleto in Visual Studio 2015 e versioni successive. Nelle versioni precedenti le variabili dichiarate con l' `thread` attributo non possono essere inizializzate con un costruttore o un'altra espressione che richiede la valutazione in fase di esecuzione. È necessaria un'espressione statica per inizializzare `thread` i dati.

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

## <a name="see-also"></a>Vedi anche

[thread](../../cpp/thread.md)
