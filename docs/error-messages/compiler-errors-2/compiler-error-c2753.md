---
title: Errore del compilatore C2753
ms.date: 11/04/2016
f1_keywords:
- C2753
helpviewer_keywords:
- C2753
ms.assetid: 92bfeeac-524a-4a8e-9a4f-fb8269055826
ms.openlocfilehash: e13c45cec99e60d8aec7dcc3db8e5a4813ea7de9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50509409"
---
# <a name="compiler-error-c2753"></a>Errore del compilatore C2753

«*modello*': la specializzazione parziale non può corrispondere a elenco di argomenti del modello principale

Se l'elenco degli argomenti modello corrisponde all'elenco di parametri, il compilatore considera il modello stesso. Non è consentito definire due volte lo stesso modello.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2753 e viene illustrato un modo per risolvere il problema:

```cpp
// C2753.cpp
// compile with: cl /c C2753.cpp
template<class T>
struct A {};

template<class T>
struct A<T> {};   // C2753
// try the following line instead
// struct A<int> {};

template<class T, class U, class V, class W, class X>
struct B {};
```