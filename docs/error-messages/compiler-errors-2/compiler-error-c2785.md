---
title: Errore del compilatore C2785
ms.date: 11/04/2016
f1_keywords:
- C2785
helpviewer_keywords:
- C2785
ms.assetid: d8d13360-0d00-4815-8475-b49c7f0dc0f3
ms.openlocfilehash: 6aff2e5c96e3c79fc748d8a95779d6a08647ab03
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74739623"
---
# <a name="compiler-error-c2785"></a>Errore del compilatore C2785

' dichiarazione1' è dichiarazione2' hanno tipi restituiti diversi

Il tipo restituito della specializzazione del modello di funzione è diverso dal tipo restituito del modello di funzione primario.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Verificare la coerenza di tutte le specializzazioni del modello di funzione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2785:

```cpp
// C2785.cpp
// compile with: /c
template<class T> void f(T);

template<> int f(int); // C2785
template<> void f(int); // OK
```
