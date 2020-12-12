---
description: 'Altre informazioni su: errore del compilatore C2785'
title: Errore del compilatore C2785
ms.date: 11/04/2016
f1_keywords:
- C2785
helpviewer_keywords:
- C2785
ms.assetid: d8d13360-0d00-4815-8475-b49c7f0dc0f3
ms.openlocfilehash: f40b652e30b30f0ef17426b547337352181383e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97297902"
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
