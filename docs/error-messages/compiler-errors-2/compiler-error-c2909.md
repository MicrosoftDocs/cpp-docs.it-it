---
description: 'Altre informazioni su: errore del compilatore C2909'
title: Errore del compilatore C2909
ms.date: 11/04/2016
f1_keywords:
- C2909
helpviewer_keywords:
- C2909
ms.assetid: 1c9df8ae-925d-4002-a5f8-a71413c45f9e
ms.openlocfilehash: c2a3ba74f87edb0f1958910d04820316508f6567
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97270641"
---
# <a name="compiler-error-c2909"></a>Errore del compilatore C2909

'identifier': la creazione esplicita di un'istanza di un modello di funzione richiede un tipo restituito

La creazione esplicita di un'istanza di un modello di funzione richiede la specifica esplicita del tipo restituito. La specifica implicita del tipo restituito non funziona.

L'esempio seguente genera l'errore C2909:

```cpp
// C2909.cpp
// compile with: /c
template<class T> int f(T);
template f<int>(int);         // C2909
template int f<int>(int);   // OK
```
