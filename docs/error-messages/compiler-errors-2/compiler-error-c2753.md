---
title: Errore del compilatore C2753
ms.date: 11/04/2016
f1_keywords:
- C2753
helpviewer_keywords:
- C2753
ms.assetid: 92bfeeac-524a-4a8e-9a4f-fb8269055826
ms.openlocfilehash: ea2901c998ac1a44ad142779e7ce48bfffff66c2
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80202153"
---
# <a name="compiler-error-c2753"></a>Errore del compilatore C2753

'*template*': la specializzazione parziale non può corrispondere all'elenco di argomenti per il modello primario

Se l'elenco di argomenti del modello corrisponde all'elenco di parametri, il compilatore lo considera come lo stesso modello. Non è consentito definire due volte lo stesso modello.

## <a name="example"></a>Esempio

L'esempio seguente genera C2753 e Mostra un modo per risolverlo:

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
